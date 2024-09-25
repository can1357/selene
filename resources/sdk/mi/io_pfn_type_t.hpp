#pragma once
#include <sdkgen/support_library.hpp>

namespace mi
{
    // [enum _MI_IO_PFN_TYPE]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class io_pfn_type_t : int32_t 
    {                                  
        io_pfn_probes =         0x0,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        io_pfn_maps =           0x1,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        io_pfn_unmapped =       0x2,     // Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
        //maximum_io_pfn_type = 0x2,     // Windows 11
        maximum_io_pfn_type =   0x3,     // Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    };                                 
};
