#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/pnp_caps_t.start.hpp"
namespace fx
{
    // [union FxPnpCaps]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    union pnp_caps_t                                
    {                                               
        struct u0_by_enum_t                         
        {                                           
            // Windows 10 v2004, Windows 11, Windows 10 v20H2                            
            //                                      
            _m00 int2_t lock_supported;               //{ +0x0000@0  +0x0000@0  +0x0000@0  } | .LockSupported
            _m01 int2_t eject_supported;              //{ +0x0000@2  +0x0000@2  +0x0000@2  } | .EjectSupported
            _m02 int2_t removable;                    //{ +0x0000@4  +0x0000@4  +0x0000@4  } | .Removable
            _m03 int2_t dock_device;                  //{ +0x0000@6  +0x0000@6  +0x0000@6  } | .DockDevice
            _m04 int2_t unique_id;                    //{ +0x0000@8  +0x0000@8  +0x0000@8  } | .UniqueID
            _m05 int2_t silent_install;               //{ +0x0000@10 +0x0000@10 +0x0000@10 } | .SilentInstall
            _m06 int2_t surprise_removal_ok;          //{ +0x0000@12 +0x0000@12 +0x0000@12 } | .SurpriseRemovalOK
            _m07 int2_t hardware_disabled;            //{ +0x0000@14 +0x0000@14 +0x0000@14 } | .HardwareDisabled
            _m08 int2_t no_display_in_ui;             //{ +0x0000@16 +0x0000@16 +0x0000@16 } | .NoDisplayInUI
                                                    
            SDK_MAGIC_PROPERTIES( "FxPnpCaps.ByEnum.$", 0x4, true, 0xd6251b3db56bc9a1 );                            
            SDK_FIXED_SIZE( u0_by_enum_t, 0x4 );                            
        };                                          
                                                    
        // Windows 10 v2004, Windows 11, Windows 10 v20H2        
        //                                          
        _m09 u0_by_enum_t                   by_enum;  //{ +0x0000    +0x0000    +0x0000    } | .ByEnum
        _m10 int32_t                        value;    //{ +0x0000    +0x0000    +0x0000    } | .Value
                                                    
        SDK_MAGIC_PROPERTIES( "FxPnpCaps.$", 0x4, true, 0x58c233f239787206 );        
        SDK_FIXED_SIZE( pnp_caps_t, 0x4 );          
    };                                              
};
#include "magic/pnp_caps_t.end.hpp"
SDK_VERIFY( struct fx::pnp_caps_t::u0_by_enum_t, 0x4 );
SDK_VERIFY( union fx::pnp_caps_t, 0x4 );
