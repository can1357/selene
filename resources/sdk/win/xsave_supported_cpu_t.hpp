#pragma once
#include <sdkgen/support_library.hpp>
#include "xsave_cpu_info_t.hpp"

#include "magic/xsave_supported_cpu_t.start.hpp"
namespace win
{
    struct xsave_cpu_errata_t;

    // [struct _XSAVE_SUPPORTED_CPU]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct xsave_supported_cpu_t                        
    {                                                   
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                                              
        _m00 struct win::xsave_cpu_info_t    cpu_info;    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .CpuInfo
        _m01 struct win::xsave_cpu_errata_t* cpu_errata;  //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .CpuErrata
                                                        
        SDK_MAGIC_PROPERTIES( "_XSAVE_SUPPORTED_CPU.$", 0x28, true, 0xd73612011fe5667e );           
        SDK_FIXED_SIZE( xsave_supported_cpu_t, 0x28 );           
    };                                                  
};
#include "magic/xsave_supported_cpu_t.end.hpp"
SDK_VERIFY( struct win::xsave_supported_cpu_t, 0x28 );
