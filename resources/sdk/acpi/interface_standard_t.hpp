#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/kinterrupt_mode_t.hpp"

namespace nt { struct device_object_t; }

#include "magic/interface_standard_t.start.hpp"
namespace acpi
{
    // [struct _ACPI_INTERFACE_STANDARD]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct interface_standard_t                                                          
    {                                                                                    
        using pgpe_connect_vector_t =                  sdk::function<int32_t(struct nt::device_object_t*, uint32_t, enum nt::kinterrupt_mode_t, uint8_t, sdk::function<uint8_t(void*, void*)>*, void*, void*)>*;                                    
        using gpe_enable_event_t =                     sdk::function<int32_t(struct nt::device_object_t*, void*)>*;                                    
        using gpe_disable_event_t =                    sdk::function<int32_t(struct nt::device_object_t*, void*)>*;                                    
        using gpe_clear_status_t =                     sdk::function<int32_t(struct nt::device_object_t*, void*)>*;                                    
        using pregister_for_device_notifications_t =   sdk::function<int32_t(struct nt::device_object_t*, sdk::function<void(void*, uint32_t)>*, void*)>*;                                    
        using punregister_for_device_notifications_t = sdk::function<void(struct nt::device_object_t*, sdk::function<void(void*, uint32_t)>*)>*;                                    
                                                                                         
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                    
        //                                                                               
        _m00 uint16_t                                size;                                 //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Size
        _m01 uint16_t                                version;                              //{ +0x0002    +0x0002    +0x0002    +0x0002    +0x0002    } | .Version
        _m02 void*                                   context;                              //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .Context
        _m03 sdk::function<void(void*)>*             interface_reference;                  //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .InterfaceReference
        _m04 sdk::function<void(void*)>*             interface_dereference;                //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .InterfaceDereference
        _m05 pgpe_connect_vector_t                   gpe_connect_vector;                   //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | .GpeConnectVector
        _m06 sdk::function<int32_t(void*)>*          gpe_disconnect_vector;                //{ +0x0028    +0x0028    +0x0028    +0x0028    +0x0028    } | .GpeDisconnectVector
        _m07 gpe_enable_event_t                      gpe_enable_event;                     //{ +0x0030    +0x0030    +0x0030    +0x0030    +0x0030    } | .GpeEnableEvent
        _m08 gpe_disable_event_t                     gpe_disable_event;                    //{ +0x0038    +0x0038    +0x0038    +0x0038    +0x0038    } | .GpeDisableEvent
        _m09 gpe_clear_status_t                      gpe_clear_status;                     //{ +0x0040    +0x0040    +0x0040    +0x0040    +0x0040    } | .GpeClearStatus
        _m10 pregister_for_device_notifications_t    register_for_device_notifications;    //{ +0x0048    +0x0048    +0x0048    +0x0048    +0x0048    } | .RegisterForDeviceNotifications
        _m11 punregister_for_device_notifications_t  unregister_for_device_notifications;  //{ +0x0050    +0x0050    +0x0050    +0x0050    +0x0050    } | .UnregisterForDeviceNotifications
                                                                                         
        SDK_NONVOL_PROPERTIES( "_ACPI_INTERFACE_STANDARD.$", 0x58, true, 0x83bad903149e63c9 );                                    
        SDK_FIXED_SIZE( interface_standard_t, 0x58 );                                    
    };                                                                                   
};
#include "magic/interface_standard_t.end.hpp"
SDK_VERIFY( struct acpi::interface_standard_t, 0x58 );
