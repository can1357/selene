#pragma once
#include <sdkgen/support_library.hpp>
#include "bitmap_t.hpp"
#include "bitmapinfoheader_t.hpp"

#include "magic/dibsection_t.start.hpp"
namespace tag
{
    // [struct tagDIBSECTION]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct dibsection_t                                  
    {                                                    
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                                               
        _m00 struct tag::bitmap_t           ds_bm;         //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .dsBm
        _m01 struct tag::bitmapinfoheader_t ds_bmih;       //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | .dsBmih
        _m02 sdk::array<uint32_t, 3>        ds_bitfields;  //{ +0x0048    +0x0048    +0x0048    +0x0048    +0x0048    } | .dsBitfields
        _m03 void*                          dsh_section;   //{ +0x0058    +0x0058    +0x0058    +0x0058    +0x0058    } | .dshSection
        _m04 uint32_t                       ds_offset;     //{ +0x0060    +0x0060    +0x0060    +0x0060    +0x0060    } | .dsOffset
                                                         
        SDK_NONVOL_PROPERTIES( "tagDIBSECTION.$", 0x68, true, 0x6f3ef0859839e9a1 );             
        SDK_FIXED_SIZE( dibsection_t, 0x68 );             
    };                                                   
};
#include "magic/dibsection_t.end.hpp"
SDK_VERIFY( struct tag::dibsection_t, 0x68 );
