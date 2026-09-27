#include <iostream>
#include <fstream>
#include <vector>
#include <cstdint>
#include <iomanip>

static uint32_t be32(const uint8_t* p)
{
    return (uint32_t(p[0]) << 24) |
           (uint32_t(p[1]) << 16) |
           (uint32_t(p[2]) << 8) |
           uint32_t(p[3]);
}

int main()
{
    const char* path =
        "D:\\XboxImageExtractor-v1.2-win-x64\\alien hominid LEGAL COPY\\default.xex";

    std::ifstream f(path, std::ios::binary);
    if (!f)
    {
        std::cerr << "Cannot open XEX\n";
        return 1;
    }

    f.seekg(0, std::ios::end);
    const size_t size = static_cast<size_t>(f.tellg());
    f.seekg(0);

    std::vector<uint8_t> data(size);
    f.read(reinterpret_cast<char*>(data.data()), size);

    std::cout << "XEX size: 0x" << std::hex << size << "\n";

    // Print occurrences of common PPC instruction words.
    // This is only a diagnostic scan; we are NOT treating file offsets
    // as Xbox virtual addresses.
    for (size_t i = 0; i + 4 <= size; i += 4)
    {
        uint32_t w = be32(&data[i]);

        // mflr r0 / mtlr r0
        // stwu r1,... / lwz r1,...
        // blr
        if (w == 0x7C0802A6 ||
            w == 0x7C0803A6 ||
            w == 0x4E800020)
        {
            std::cout
                << "offset 0x" << std::setw(8) << std::setfill('0')
                << i
                << " instruction 0x"
                << std::setw(8) << w
                << "\n";
        }
    }

    return 0;
}
