#pragma once
#include <sdkgen/support_library.hpp>

namespace fx
{
    // [enum FX_OBJECT_TYPES_BASE]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class object_types_base_t : int32_t
    {                                       
        types_base =            0x1000,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        types_packages_base =   0x1100,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        types_io_target_base =  0x1200,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        abstract_types_base =   0x1300,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        types_dma_base =        0x1400,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        types_interfaces_base = 0x1500,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                      
};
