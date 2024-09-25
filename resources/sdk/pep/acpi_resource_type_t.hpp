#pragma once
#include <sdkgen/support_library.hpp>

namespace pep
{
    // [enum _PEP_ACPI_RESOURCE_TYPE]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class acpi_resource_type_t : int32_t
    {                                        
        memory =          0x0,                 // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        io_port =         0x1,                 // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        interrupt =       0x2,                 // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        gpio_io =         0x3,                 // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        gpio_int =        0x4,                 // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        spb_i2c =         0x5,                 // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        spb_spi =         0x6,                 // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        spb_uart =        0x7,                 // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        extended_memory = 0x8,                 // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        extended_io =     0x9,                 // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                       
};
