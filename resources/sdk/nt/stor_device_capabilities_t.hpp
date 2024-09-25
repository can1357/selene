#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/stor_device_capabilities_t.start.hpp"
namespace nt
{
    // [struct _STOR_DEVICE_CAPABILITIES]
    // => WDK 10 (NV)
    //
    struct stor_device_capabilities_t     
    {                                     
        // WDK 10                         
        //                                
        _m00 uint16_t version;              //{ +0x0000    } | .Version
        _m01 uint1_t  device_d1;            //{ +0x0004@0  } | .DeviceD1
        _m02 uint1_t  device_d2;            //{ +0x0004@1  } | .DeviceD2
        _m03 uint1_t  lock_supported;       //{ +0x0004@2  } | .LockSupported
        _m04 uint1_t  eject_supported;      //{ +0x0004@3  } | .EjectSupported
        _m05 uint1_t  removable;            //{ +0x0004@4  } | .Removable
        _m06 uint1_t  dock_device;          //{ +0x0004@5  } | .DockDevice
        _m07 uint1_t  unique_id;            //{ +0x0004@6  } | .UniqueID
        _m08 uint1_t  silent_install;       //{ +0x0004@7  } | .SilentInstall
        _m09 uint1_t  surprise_removal_ok;  //{ +0x0004@8  } | .SurpriseRemovalOK
        _m10 uint1_t  no_display_in_ui;     //{ +0x0004@9  } | .NoDisplayInUI
                                          
        SDK_NONVOL_PROPERTIES( "_STOR_DEVICE_CAPABILITIES.$", 0x0, false, 0x8ad9835ef04eef7e );                    
        SDK_FIXED_SIZE( stor_device_capabilities_t, 0x8 );                    
    };                                    
};
#include "magic/stor_device_capabilities_t.end.hpp"
SDK_VERIFY( struct nt::stor_device_capabilities_t, 0x8 );
