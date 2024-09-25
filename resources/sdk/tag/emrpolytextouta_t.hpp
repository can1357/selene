#pragma once
#include <sdkgen/support_library.hpp>
#include "emr_t.hpp"
#include "emrtext_t.hpp"
#include "../win/rectl_t.hpp"

#include "magic/emrpolytextouta_t.start.hpp"
namespace tag
{
    // [struct tagEMRPOLYTEXTOUTA]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct emrpolytextouta_t                                      
    {                                                             
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                                                        
        _m00 struct tag::emr_t                    emr;              //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .emr
        _m01 struct win::rectl_t                  rcl_bounds;       //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .rclBounds
        _m02 uint32_t                             i_graphics_mode;  //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .iGraphicsMode
        _m03 float                                ex_scale;         //{ +0x001c    +0x001c    +0x001c    +0x001c    +0x001c    } | .exScale
        _m04 float                                ey_scale;         //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | .eyScale
        _m05 int32_t                              c_strings;        //{ +0x0024    +0x0024    +0x0024    +0x0024    +0x0024    } | .cStrings
        _m06 sdk::array<struct tag::emrtext_t, 1> aemrtext;         //{ +0x0028    +0x0028    +0x0028    +0x0028    +0x0028    } | .aemrtext
                                                                  
        SDK_NONVOL_PROPERTIES( "tagEMRPOLYTEXTOUTA.$", 0x50, true, 0x294cbfb49cc3e159 );                
        SDK_FIXED_SIZE( emrpolytextouta_t, 0x50 );                
    };                                                            
};
#include "magic/emrpolytextouta_t.end.hpp"
SDK_VERIFY( struct tag::emrpolytextouta_t, 0x50 );
