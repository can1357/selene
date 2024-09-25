#pragma once
#include <sdkgen/support_library.hpp>
#include "emr_t.hpp"
#include "emrtext_t.hpp"
#include "../win/rectl_t.hpp"

#include "magic/emrexttextouta_t.start.hpp"
namespace tag
{
    // [struct tagEMREXTTEXTOUTA]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct emrexttextouta_t                        
    {                                              
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                                         
        _m00 struct tag::emr_t     emr;              //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .emr
        _m01 struct win::rectl_t   rcl_bounds;       //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .rclBounds
        _m02 uint32_t              i_graphics_mode;  //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .iGraphicsMode
        _m03 float                 ex_scale;         //{ +0x001c    +0x001c    +0x001c    +0x001c    +0x001c    } | .exScale
        _m04 float                 ey_scale;         //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | .eyScale
        _m05 struct tag::emrtext_t emrtext;          //{ +0x0024    +0x0024    +0x0024    +0x0024    +0x0024    } | .emrtext
                                                   
        SDK_NONVOL_PROPERTIES( "tagEMREXTTEXTOUTA.$", 0x4c, true, 0x7df100c35b62bea );                
        SDK_FIXED_SIZE( emrexttextouta_t, 0x4c );                
    };                                             
};
#include "magic/emrexttextouta_t.end.hpp"
SDK_VERIFY( struct tag::emrexttextouta_t, 0x4c );
