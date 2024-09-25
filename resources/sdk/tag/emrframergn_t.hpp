#pragma once
#include <sdkgen/support_library.hpp>
#include "emr_t.hpp"
#include "size_t.hpp"
#include "../win/rectl_t.hpp"

#include "magic/emrframergn_t.start.hpp"
namespace tag
{
    // [struct tagEMRFRAMERGN]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct emrframergn_t                        
    {                                           
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                                      
        _m00 struct tag::emr_t      emr;          //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .emr
        _m01 struct win::rectl_t    rcl_bounds;   //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .rclBounds
        _m02 uint32_t               cb_rgn_data;  //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .cbRgnData
        _m03 uint32_t               ih_brush;     //{ +0x001c    +0x001c    +0x001c    +0x001c    +0x001c    } | .ihBrush
        _m04 struct tag::size_t     szl_stroke;   //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | .szlStroke
        _m05 sdk::array<uint8_t, 1> rgn_data;     //{ +0x0028    +0x0028    +0x0028    +0x0028    +0x0028    } | .RgnData
                                                
        SDK_NONVOL_PROPERTIES( "tagEMRFRAMERGN.$", 0x2c, true, 0xc7db6c3b3e3ee5d );            
        SDK_FIXED_SIZE( emrframergn_t, 0x2c );            
    };                                          
};
#include "magic/emrframergn_t.end.hpp"
SDK_VERIFY( struct tag::emrframergn_t, 0x2c );
