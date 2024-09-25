#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/crt_locale_data_public_t.start.hpp"
namespace nt
{
    // [struct __crt_locale_data_public]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct crt_locale_data_public_t             
    {                                           
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                                      
        _m00 const uint16_t* locale_pctype;       //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | ._locale_pctype
        _m01 int32_t         locale_mb_cur_max;   //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | ._locale_mb_cur_max
        _m02 uint32_t        locale_lc_codepage;  //{ +0x000c    +0x000c    +0x000c    +0x000c    +0x000c    } | ._locale_lc_codepage
                                                
        SDK_NONVOL_PROPERTIES( "__crt_locale_data_public.$", 0x10, true, 0x3dcaba15974d516c );                   
        SDK_FIXED_SIZE( crt_locale_data_public_t, 0x10 );                   
    };                                          
};
#include "magic/crt_locale_data_public_t.end.hpp"
SDK_VERIFY( struct nt::crt_locale_data_public_t, 0x10 );
