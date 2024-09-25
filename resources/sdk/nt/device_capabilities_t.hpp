#pragma once
#include <sdkgen/support_library.hpp>
#include "device_power_state_t.hpp"
#include "system_power_state_t.hpp"

#include "magic/device_capabilities_t.start.hpp"
namespace nt
{
    // [struct _DEVICE_CAPABILITIES]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct device_capabilities_t                                                       
    {                                                                                  
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                            
        //                                                                             
        _m000 uint16_t                                     size;                         //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Size
        _m001 uint16_t                                     version;                      //{ +0x0002    +0x0002    +0x0002    +0x0002    +0x0002    } | .Version
        _m002 uint1_t                                      device_d1;                    //{ +0x0004@0  +0x0004@0  +0x0004@0  +0x0004@0  +0x0004@0  } | .DeviceD1
        _m003 uint1_t                                      device_d2;                    //{ +0x0004@1  +0x0004@1  +0x0004@1  +0x0004@1  +0x0004@1  } | .DeviceD2
        _m004 uint1_t                                      lock_supported;               //{ +0x0004@2  +0x0004@2  +0x0004@2  +0x0004@2  +0x0004@2  } | .LockSupported
        _m005 uint1_t                                      eject_supported;              //{ +0x0004@3  +0x0004@3  +0x0004@3  +0x0004@3  +0x0004@3  } | .EjectSupported
        _m006 uint1_t                                      removable;                    //{ +0x0004@4  +0x0004@4  +0x0004@4  +0x0004@4  +0x0004@4  } | .Removable
        _m007 uint1_t                                      dock_device;                  //{ +0x0004@5  +0x0004@5  +0x0004@5  +0x0004@5  +0x0004@5  } | .DockDevice
        _m008 uint1_t                                      unique_id;                    //{ +0x0004@6  +0x0004@6  +0x0004@6  +0x0004@6  +0x0004@6  } | .UniqueID
        _m009 uint1_t                                      silent_install;               //{ +0x0004@7  +0x0004@7  +0x0004@7  +0x0004@7  +0x0004@7  } | .SilentInstall
        _m010 uint1_t                                      raw_device_ok;                //{ +0x0004@8  +0x0004@8  +0x0004@8  +0x0004@8  +0x0004@8  } | .RawDeviceOK
        _m011 uint1_t                                      surprise_removal_ok;          //{ +0x0004@9  +0x0004@9  +0x0004@9  +0x0004@9  +0x0004@9  } | .SurpriseRemovalOK
        _m012 uint1_t                                      wake_from_d0;                 //{ +0x0004@10 +0x0004@10 +0x0004@10 +0x0004@10 +0x0004@10 } | .WakeFromD0
        _m013 uint1_t                                      wake_from_d1;                 //{ +0x0004@11 +0x0004@11 +0x0004@11 +0x0004@11 +0x0004@11 } | .WakeFromD1
        _m014 uint1_t                                      wake_from_d2;                 //{ +0x0004@12 +0x0004@12 +0x0004@12 +0x0004@12 +0x0004@12 } | .WakeFromD2
        _m015 uint1_t                                      wake_from_d3;                 //{ +0x0004@13 +0x0004@13 +0x0004@13 +0x0004@13 +0x0004@13 } | .WakeFromD3
        _m016 uint1_t                                      hardware_disabled;            //{ +0x0004@14 +0x0004@14 +0x0004@14 +0x0004@14 +0x0004@14 } | .HardwareDisabled
        _m017 uint1_t                                      non_dynamic;                  //{ +0x0004@15 +0x0004@15 +0x0004@15 +0x0004@15 +0x0004@15 } | .NonDynamic
        _m018 uint1_t                                      warm_eject_supported;         //{ +0x0004@16 +0x0004@16 +0x0004@16 +0x0004@16 +0x0004@16 } | .WarmEjectSupported
        _m019 uint1_t                                      no_display_in_ui;             //{ +0x0004@17 +0x0004@17 +0x0004@17 +0x0004@17 +0x0004@17 } | .NoDisplayInUI
        _m020 uint1_t                                      wake_from_interrupt;          //{ +0x0004@19 +0x0004@19 +0x0004@19 +0x0004@19 +0x0004@19 } | .WakeFromInterrupt
        _m021 uint32_t                                     address;                      //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .Address
        _m022 uint32_t                                     ui_number;                    //{ +0x000c    +0x000c    +0x000c    +0x000c    +0x000c    } | .UINumber
        _m023 sdk::array<enum nt::device_power_state_t, 7> device_state;                 //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .DeviceState
        _m024 enum nt::system_power_state_t                system_wake;                  //{ +0x002c    +0x002c    +0x002c    +0x002c    +0x002c    } | .SystemWake
        _m025 enum nt::device_power_state_t                device_wake;                  //{ +0x0030    +0x0030    +0x0030    +0x0030    +0x0030    } | .DeviceWake
        _m026 uint32_t                                     d1_latency;                   //{ +0x0034    +0x0034    +0x0034    +0x0034    +0x0034    } | .D1Latency
        _m027 uint32_t                                     d2_latency;                   //{ +0x0038    +0x0038    +0x0038    +0x0038    +0x0038    } | .D2Latency
        _m028 uint32_t                                     d3_latency;                   //{ +0x003c    +0x003c    +0x003c    +0x003c    +0x003c    } | .D3Latency
                                                                                       
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2                            
        //                                                                             
        _m029 uint1_t                                      secure_device;                //{ +0x0004@20 +0x0004@20 +0x0004@20 +0x0004@20 } | .SecureDevice
        _m030 uint1_t                                      child_of_vga_enabled_bridge;  //{ +0x0004@21 +0x0004@21 +0x0004@21 +0x0004@21 } | .ChildOfVgaEnabledBridge
        _m031 uint1_t                                      decode_io_on_boot;            //{ +0x0004@22 +0x0004@22 +0x0004@22 +0x0004@22 } | .DecodeIoOnBoot
                                                                                       
        SDK_NONVOL_PROPERTIES( "_DEVICE_CAPABILITIES.$", 0x40, true, 0x7ef4ce5338758b05 );                            
        SDK_FIXED_SIZE( device_capabilities_t, 0x40 );                                 
    };                                                                                 
};
#include "magic/device_capabilities_t.end.hpp"
SDK_VERIFY( struct nt::device_capabilities_t, 0x40 );
