cmake_minimum_required (VERSION 3.20)

set(THIRDPARTY_ROOT ${CMAKE_CURRENT_SOURCE_DIR}/thirdparty)

set(CMAKE_CXX_STANDARD 17)
set(BUILD_SHARED_LIBS OFF)

# MSVC-only settings.
# Do not apply MSVC debug information/runtime settings to Clang.
if (MSVC)
  if (POLICY CMP0141)
    cmake_policy(SET CMP0141 NEW)
    set(CMAKE_MSVC_DEBUG_INFORMATION_FORMAT "$<$<CONFIG:Debug,RelWithDebInfo>:ProgramDatabase>")
  endif()

  set(CMAKE_MSVC_RUNTIME_LIBRARY "MultiThreaded$<$<CONFIG:Debug>:Debug>")
endif()

add_subdirectory(${THIRDPARTY_ROOT})
set(XENONANALYSE_ROOT ${CMAKE_CURRENT_SOURCE_DIR}/XenonAnalyse)
set(XENONUTILS_ROOT ${CMAKE_CURRENT_SOURCE_DIR}/XenonUtils)
set(XENONRECOMP_ROOT ${CMAKE_CURRENT_SOURCE_DIR}/XenonRecomp)

project ("XenonRecomp-ALL")

add_subdirectory(${XENONANALYSE_ROOT})
add_subdirectory(${XENONRECOMP_ROOT})
add_subdirectory(${XENONUTILS_ROOT})

# Only tests if this is the top level project
if (${CMAKE_CURRENT_SOURCE_DIR} STREQUAL ${CMAKE_SOURCE_DIR})
    add_subdirectory(XenonTests)
endif()
