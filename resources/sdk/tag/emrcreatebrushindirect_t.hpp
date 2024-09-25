#pragma once
#include <sdkgen/support_library.hpp>
#include "emr_t.hpp"
#include "logbrush32_t.hpp"

#include "magic/emrcreatebrushindirect_t.start.hpp"
namespace tag
{
    // [struct tagEMRCREATEBRUSHINDIRECT]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct emrcreatebrushindirect_t            
    {                                          
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2         
        //                                     
        _m00 struct tag::emr_t        emr;       //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .emr
        _m01 uint32_t                 ih_brush;  //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .ihBrush
        _m02 struct tag::logbrush32_t lb;        //{ +0x000c    +0x000c    +0x000c    +0x000c    +0x000c    } | .lb
                                               
        SDK_NONVOL_PROPERTIES( "tagEMRCREATEBRUSHINDIRECT.$", 0x18, true, 0xd95ff912da7bbf80 );         
        SDK_FIXED_SIZE( emrcreatebrushindirect_t, 0x18 );         
    };                                         
};
#include "magic/emrcreatebrushindirect_t.end.hpp"
SDK_VERIFY( struct tag::emrcreatebrushindirect_t, 0x18 );
