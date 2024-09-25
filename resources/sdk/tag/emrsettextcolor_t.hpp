#pragma once
#include <sdkgen/support_library.hpp>
#include "emr_t.hpp"

#include "magic/emrsettextcolor_t.start.hpp"
namespace tag
{
    // [struct tagEMRSETTEXTCOLOR]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct emrsettextcolor_t            
    {                                   
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2         
        //                              
        _m00 struct tag::emr_t emr;       //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .emr
        _m01 uint32_t          cr_color;  //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .crColor
                                        
        SDK_NONVOL_PROPERTIES( "tagEMRSETTEXTCOLOR.$", 0xc, true, 0x175366bae99c73 );         
        SDK_FIXED_SIZE( emrsettextcolor_t, 0xc );         
    };                                  
};
#include "magic/emrsettextcolor_t.end.hpp"
SDK_VERIFY( struct tag::emrsettextcolor_t, 0xc );
