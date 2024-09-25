#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/pnp_state_t.start.hpp"
namespace fx
{
    // [union FxPnpState]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    union pnp_state_t                              
    {                                              
        struct u0_by_enum_t                        
        {                                          
            // Windows 10 v2004, Windows 11, Windows 10 v20H2                           
            //                                     
            _m00 int2_t disabled;                    //{ +0x0000@0  +0x0000@0  +0x0000@0  } | .Disabled
            _m01 int2_t dont_display_in_ui;          //{ +0x0000@2  +0x0000@2  +0x0000@2  } | .DontDisplayInUI
            _m02 int2_t failed;                      //{ +0x0000@4  +0x0000@4  +0x0000@4  } | .Failed
            _m03 int2_t not_disableable;             //{ +0x0000@6  +0x0000@6  +0x0000@6  } | .NotDisableable
            _m04 int2_t removed;                     //{ +0x0000@8  +0x0000@8  +0x0000@8  } | .Removed
            _m05 int2_t resources_changed;           //{ +0x0000@10 +0x0000@10 +0x0000@10 } | .ResourcesChanged
            _m06 int2_t assigned_to_guest;           //{ +0x0000@12 +0x0000@12 +0x0000@12 } | .AssignedToGuest
                                                   
            SDK_MAGIC_PROPERTIES( "FxPnpState.ByEnum.$", 0x4, true, 0x6af37d98514b15b7 );                           
            SDK_FIXED_SIZE( u0_by_enum_t, 0x4 );                           
        };                                         
                                                   
        // Windows 10 v2004, Windows 11, Windows 10 v20H2        
        //                                         
        _m07 u0_by_enum_t                  by_enum;  //{ +0x0000    +0x0000    +0x0000    } | .ByEnum
        _m08 int32_t                       value;    //{ +0x0000    +0x0000    +0x0000    } | .Value
                                                   
        SDK_MAGIC_PROPERTIES( "FxPnpState.$", 0x4, true, 0x11d8fb0f41042c16 );        
        SDK_FIXED_SIZE( pnp_state_t, 0x4 );        
    };                                             
};
#include "magic/pnp_state_t.end.hpp"
SDK_VERIFY( struct fx::pnp_state_t::u0_by_enum_t, 0x4 );
SDK_VERIFY( union fx::pnp_state_t, 0x4 );
