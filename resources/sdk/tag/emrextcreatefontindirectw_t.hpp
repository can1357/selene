#pragma once
#include <sdkgen/support_library.hpp>
#include "emr_t.hpp"
#include "extlogfontw_t.hpp"

#include "magic/emrextcreatefontindirectw_t.start.hpp"
namespace tag
{
    // [struct tagEMREXTCREATEFONTINDIRECTW]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct emrextcreatefontindirectw_t         
    {                                          
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2        
        //                                     
        _m00 struct tag::emr_t         emr;      //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .emr
        _m01 uint32_t                  ih_font;  //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .ihFont
        _m02 struct tag::extlogfontw_t elfw;     //{ +0x000c    +0x000c    +0x000c    +0x000c    +0x000c    } | .elfw
                                               
        SDK_NONVOL_PROPERTIES( "tagEMREXTCREATEFONTINDIRECTW.$", 0x14c, true, 0xdcd06f678ceaebc7 );        
        SDK_FIXED_SIZE( emrextcreatefontindirectw_t, 0x14c );        
    };                                         
};
#include "magic/emrextcreatefontindirectw_t.end.hpp"
SDK_VERIFY( struct tag::emrextcreatefontindirectw_t, 0x14c );
