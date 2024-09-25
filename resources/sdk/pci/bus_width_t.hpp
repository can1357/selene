#pragma once
#include <sdkgen/support_library.hpp>

namespace pci
{
    // [enum PCI_BUS_WIDTH]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class bus_width_t : int32_t
    {                               
        width32_bits = 0x0,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        width64_bits = 0x1,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                              
};
