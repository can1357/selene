#pragma once
#include <sdkgen/support_library.hpp>
#include "object_header_t.hpp"
#include "miniport_adapter_ndk_attributes_t.hpp"
#include "miniport_adapter_general_attributes_t.hpp"
#include "miniport_adapter_offload_attributes_t.hpp"
#include "miniport_adapter_registration_attributes_t.hpp"
#include "miniport_adapter_native_802_11_attributes_t.hpp"
#include "miniport_adapter_packet_direct_attributes_t.hpp"
#include "miniport_adapter_hardware_assist_attributes_t.hpp"
#include "miniport_add_device_registration_attributes_t.hpp"

#include "magic/miniport_adapter_attributes_t.start.hpp"
namespace ndis
{
    // [union _NDIS_MINIPORT_ADAPTER_ATTRIBUTES]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    union miniport_adapter_attributes_t                                                        
    {                                                                                          
        using add_device_registration_attributes_t = struct ndis::miniport_add_device_registration_attributes_t;                                   
        using registration_attributes_t =            struct ndis::miniport_adapter_registration_attributes_t;                                   
        using general_attributes_t =                 struct ndis::miniport_adapter_general_attributes_t;                                   
        using offload_attributes_t =                 struct ndis::miniport_adapter_offload_attributes_t;                                   
        using native_802_11_attributes_t =           struct ndis::miniport_adapter_native_802_11_attributes_t;                                   
        using hardware_assist_attributes_t =         struct ndis::miniport_adapter_hardware_assist_attributes_t;                                   
        using packet_direct_attributes_t =           struct ndis::miniport_adapter_packet_direct_attributes_t;                                   
                                                                                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                   
        //                                                                                     
        _m00 struct ndis::object_header_t                   header;                              //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m01 add_device_registration_attributes_t           add_device_registration_attributes;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .AddDeviceRegistrationAttributes
        _m02 registration_attributes_t                      registration_attributes;             //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .RegistrationAttributes
        _m03 general_attributes_t                           general_attributes;                  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .GeneralAttributes
        _m04 offload_attributes_t                           offload_attributes;                  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .OffloadAttributes
        _m05 native_802_11_attributes_t                     native_802_11_attributes;            //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Native_802_11_Attributes
        _m06 hardware_assist_attributes_t                   hardware_assist_attributes;          //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .HardwareAssistAttributes
        _m07 struct ndis::miniport_adapter_ndk_attributes_t ndk_attributes;                      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .NDKAttributes
        _m08 packet_direct_attributes_t                     packet_direct_attributes;            //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .PacketDirectAttributes
                                                                                               
        SDK_MAGIC_PROPERTIES( "_NDIS_MINIPORT_ADAPTER_ATTRIBUTES.$", 0xe0, true, 0xd6b3cccea35bd241 );                                   
        SDK_FIXED_SIZE( miniport_adapter_attributes_t, 0xe0 );                                   
    };                                                                                         
};
#include "magic/miniport_adapter_attributes_t.end.hpp"
SDK_VERIFY( union ndis::miniport_adapter_attributes_t, 0xe0 );
