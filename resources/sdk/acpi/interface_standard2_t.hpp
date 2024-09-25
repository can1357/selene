#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/kinterrupt_mode_t.hpp"

#include "magic/interface_standard2_t.start.hpp"
namespace acpi
{
    // [struct ACPI_INTERFACE_STANDARD2]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct interface_standard2_t                                                       
    {                                                                                  
        using gpe_connect_vector_t =                sdk::function<int32_t(void*, uint32_t, enum nt::kinterrupt_mode_t, uint8_t, sdk::function<uint8_t(void*, void*)>*, void*, void**)>*;                                    
        using register_for_device_notifications_t = sdk::function<int32_t(void*, sdk::function<void(void*, uint32_t)>*, void*)>*;                                    
                                                                                       
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                    
        //                                                                             
        _m00 uint16_t                              size;                                 //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Size
        _m01 uint16_t                              version;                              //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .Version
        _m02 void*                                 context;                              //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Context
        _m03 sdk::function<void(void*)>*           interface_reference;                  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .InterfaceReference
        _m04 sdk::function<void(void*)>*           interface_dereference;                //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .InterfaceDereference
        _m05 gpe_connect_vector_t                  gpe_connect_vector;                   //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .GpeConnectVector
        _m06 sdk::function<int32_t(void*, void*)>* gpe_disconnect_vector;                //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .GpeDisconnectVector
        _m07 sdk::function<int32_t(void*, void*)>* gpe_enable_event;                     //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .GpeEnableEvent
        _m08 sdk::function<int32_t(void*, void*)>* gpe_disable_event;                    //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .GpeDisableEvent
        _m09 sdk::function<int32_t(void*, void*)>* gpe_clear_status;                     //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .GpeClearStatus
        _m10 register_for_device_notifications_t   register_for_device_notifications;    //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .RegisterForDeviceNotifications
        _m11 sdk::function<void(void*)>*           unregister_for_device_notifications;  //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .UnregisterForDeviceNotifications
                                                                                       
        SDK_MAGIC_PROPERTIES( "ACPI_INTERFACE_STANDARD2.$", 0x58, true, 0x2dd7a544bd69e963 );                                    
        SDK_FIXED_SIZE( interface_standard2_t, 0x58 );                                    
    };                                                                                 
};
#include "magic/interface_standard2_t.end.hpp"
SDK_VERIFY( struct acpi::interface_standard2_t, 0x58 );
