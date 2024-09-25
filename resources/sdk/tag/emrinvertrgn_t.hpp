#pragma once
#include <sdkgen/support_library.hpp>
#include "emr_t.hpp"
#include "../win/rectl_t.hpp"

#include "magic/emrinvertrgn_t.start.hpp"
namespace tag
{
    // [struct tagEMRINVERTRGN]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct emrinvertrgn_t                       
    {                                           
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                                      
        _m00 struct tag::emr_t      emr;          //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .emr
        _m01 struct win::rectl_t    rcl_bounds;   //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .rclBounds
        _m02 uint32_t               cb_rgn_data;  //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .cbRgnData
        _m03 sdk::array<uint8_t, 1> rgn_data;     //{ +0x001c    +0x001c    +0x001c    +0x001c    +0x001c    } | .RgnData
                                                
        SDK_NONVOL_PROPERTIES( "tagEMRINVERTRGN.$", 0x20, true, 0x7fbab3ca948205a5 );            
        SDK_FIXED_SIZE( emrinvertrgn_t, 0x20 );            
    };                                          
};
#include "magic/emrinvertrgn_t.end.hpp"
SDK_VERIFY( struct tag::emrinvertrgn_t, 0x20 );
