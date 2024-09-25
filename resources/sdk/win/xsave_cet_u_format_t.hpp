#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/xsave_cet_u_format_t.start.hpp"
namespace win
{
    // [struct _XSAVE_CET_U_FORMAT]
    // => WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct xsave_cet_u_format_t        
    {                                  
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                             
        _m00 uint64_t ia32_cet_u_msr;    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Ia32CetUMsr
        _m01 uint64_t ia32_pl3_ssp_msr;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Ia32Pl3SspMsr
                                       
        SDK_NONVOL_PROPERTIES( "_XSAVE_CET_U_FORMAT.$", 0x10, true, 0x1655a7bb29edbac9 );                 
        SDK_FIXED_SIZE( xsave_cet_u_format_t, 0x10 );                 
    };                                 
};
#include "magic/xsave_cet_u_format_t.end.hpp"
SDK_VERIFY( struct win::xsave_cet_u_format_t, 0x10 );
