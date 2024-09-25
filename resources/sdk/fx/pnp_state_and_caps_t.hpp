#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/pnp_state_and_caps_t.start.hpp"
namespace fx
{
    // [union FxPnpStateAndCaps]
    // => Windows 10 v1607
    //
    union pnp_state_and_caps_t                      
    {                                               
        struct u0_by_enum_t                         
        {                                           
            // Windows 10 v1607                            
            //                                      
            _m00 int2_t disabled;                     //{ +0x0000@0  } | .Disabled
            _m01 int2_t dont_display_in_ui;           //{ +0x0000@2  } | .DontDisplayInUI
            _m02 int2_t failed;                       //{ +0x0000@4  } | .Failed
            _m03 int2_t not_disableable;              //{ +0x0000@6  } | .NotDisableable
            _m04 int2_t removed;                      //{ +0x0000@8  } | .Removed
            _m05 int2_t resources_changed;            //{ +0x0000@10 } | .ResourcesChanged
            _m06 int2_t lock_supported;               //{ +0x0000@12 } | .LockSupported
            _m07 int2_t eject_supported;              //{ +0x0000@14 } | .EjectSupported
            _m08 int2_t removable;                    //{ +0x0000@16 } | .Removable
            _m09 int2_t dock_device;                  //{ +0x0000@18 } | .DockDevice
            _m10 int2_t unique_id;                    //{ +0x0000@20 } | .UniqueID
            _m11 int2_t silent_install;               //{ +0x0000@22 } | .SilentInstall
            _m12 int2_t surprise_removal_ok;          //{ +0x0000@24 } | .SurpriseRemovalOK
            _m13 int2_t hardware_disabled;            //{ +0x0000@26 } | .HardwareDisabled
            _m14 int2_t no_display_in_ui;             //{ +0x0000@28 } | .NoDisplayInUI
                                                    
            SDK_MAGIC_PROPERTIES( "FxPnpStateAndCaps.ByEnum.$", 0x0, false, 0x5c10c5c1340a0cf3 );                            
            SDK_FIXED_SIZE( u0_by_enum_t, 0x4 );                            
        };                                          
                                                    
        // Windows 10 v1607                         
        //                                          
        _m15 u0_by_enum_t                   by_enum;  //{ +0x0000    } | .ByEnum
        _m16 int32_t                        value;    //{ +0x0000    } | .Value
                                                    
        SDK_MAGIC_PROPERTIES( "FxPnpStateAndCaps.$", 0x0, false, 0xe31cf792d7eccfbc );        
        SDK_FIXED_SIZE( pnp_state_and_caps_t, 0x4 );        
    };                                              
};
#include "magic/pnp_state_and_caps_t.end.hpp"
SDK_VERIFY( struct fx::pnp_state_and_caps_t::u0_by_enum_t, 0x4 );
SDK_VERIFY( union fx::pnp_state_and_caps_t, 0x4 );
