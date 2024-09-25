#pragma once
#include <sdkgen/support_library.hpp>
#include "xsave_cpu_info_t.hpp"

#include "magic/xsave_cpu_errata_t.start.hpp"
namespace win
{
    // [struct XSAVE_CPU_ERRATA]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct xsave_cpu_errata_t                                             
    {                                                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                                                                
        _m00 uint32_t                                    number_of_errata;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .NumberOfErrata
        _m01 sdk::array<struct win::xsave_cpu_info_t, 1> errata;            //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Errata
                                                                          
        SDK_MAGIC_PROPERTIES( "XSAVE_CPU_ERRATA.$", 0x28, true, 0xa3c49dee3f604492 );                 
        SDK_FIXED_SIZE( xsave_cpu_errata_t, 0x28 );                       
    };                                                                    
};
#include "magic/xsave_cpu_errata_t.end.hpp"
SDK_VERIFY( struct win::xsave_cpu_errata_t, 0x28 );
