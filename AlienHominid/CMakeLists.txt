cmake_minimum_required(VERSION 3.24)
project(AlienHominid LANGUAGES C CXX OBJCXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_POSITION_INDEPENDENT_CODE ON)

option(ALIEN_HOMINID_BUILD_APP "Build the SDL3 application" ON)

if(IOS)
  set(CMAKE_OSX_DEPLOYMENT_TARGET "15.0" CACHE STRING "" FORCE)
  set(CMAKE_OSX_ARCHITECTURES "arm64" CACHE STRING "" FORCE)
endif()

add_subdirectory(vendored/SDL EXCLUDE_FROM_ALL)

file(GLOB PPC_SOURCES CONFIGURE_DEPENDS
  "${CMAKE_CURRENT_SOURCE_DIR}/ppc/*.cpp"
)

if(NOT PPC_SOURCES)
  message(FATAL_ERROR "No generated PPC sources found in AlienHominid/ppc")
endif()

add_library(alien_hominid_core STATIC
  ${PPC_SOURCES}
  runtime/xbox_kernel.cpp
)

target_include_directories(alien_hominid_core PUBLIC
  "${CMAKE_CURRENT_SOURCE_DIR}/ppc"
  "${CMAKE_CURRENT_SOURCE_DIR}/runtime"
  "${CMAKE_CURRENT_SOURCE_DIR}/vendored/simde"
)

target_compile_definitions(alien_hominid_core PRIVATE PPC_INCLUDE_DETAIL)
target_link_libraries(alien_hominid_core PUBLIC SDL3::SDL3)

if(ALIEN_HOMINID_BUILD_APP)
  add_executable(AlienHominid ios/Sources/main.mm)
  target_include_directories(AlienHominid PRIVATE
    "${CMAKE_CURRENT_SOURCE_DIR}/ppc"
    "${CMAKE_CURRENT_SOURCE_DIR}/runtime"
    "${CMAKE_CURRENT_SOURCE_DIR}/vendored/simde"
  )
  target_link_libraries(AlienHominid PRIVATE SDL3::SDL3 alien_hominid_core)
  set_target_properties(AlienHominid PROPERTIES
    MACOSX_BUNDLE TRUE
    PRODUCT_BUNDLE_IDENTIFIER "com.hussein.alienhominid"
    XCODE_ATTRIBUTE_PRODUCT_BUNDLE_IDENTIFIER "com.hussein.alienhominid"
    XCODE_ATTRIBUTE_CODE_SIGNING_ALLOWED "NO"
    XCODE_ATTRIBUTE_CODE_SIGNING_REQUIRED "NO"
    XCODE_ATTRIBUTE_CODE_SIGN_IDENTITY ""
    XCODE_ATTRIBUTE_TARGETED_DEVICE_FAMILY "1,2"
    XCODE_ATTRIBUTE_INFOPLIST_KEY_CFBundleDisplayName "Alien Hominid"
    XCODE_ATTRIBUTE_INFOPLIST_KEY_UIRequiresFullScreen "YES"
  )
endif()
