#pragma once
#include <sdkgen/support_library.hpp>
#include "usbd_endpoint_offload_mode_t.hpp"

#include "magic/usbd_endpoint_offload_information_t.start.hpp"
namespace wdf
{
    // [struct _USBD_ENDPOINT_OFFLOAD_INFORMATION]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct usbd_endpoint_offload_information_t                                          
    {                                                                                   
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                    
        //                                                                              
        _m00 uint32_t                               size;                                 //{ +0x0000    +0x0000    +0x0000    } | .Size
        _m01 uint16_t                               endpoint_address;                     //{ +0x0004    +0x0004    +0x0004    } | .EndpointAddress
        _m02 uint32_t                               resource_id;                          //{ +0x0006    +0x0006    +0x0006    } | .ResourceId
        _m03 enum wdf::usbd_endpoint_offload_mode_t mode;                                 //{ +0x000a    +0x000a    +0x000a    } | .Mode
        _m04 uint8_t                                root_hub_port_number;                 //{ +0x000c@16 +0x000c@16 +0x000c@16 } | .RootHubPortNumber
        _m05 uint20_t                               route_string;                         //{ +0x000c@24 +0x000c@24 +0x000c@24 } | .RouteString
        _m06 uint4_t                                speed;                                //{ +0x0010@12 +0x0010@12 +0x0010@12 } | .Speed
        _m07 uint8_t                                usb_device_address;                   //{ +0x0010@16 +0x0010@16 +0x0010@16 } | .UsbDeviceAddress
        _m08 uint8_t                                slot_id;                              //{ +0x0010@24 +0x0010@24 +0x0010@24 } | .SlotId
        _m09 uint1_t                                multi_tt;                             //{ +0x0014@0  +0x0014@0  +0x0014@0  } | .MultiTT
        _m10 uint1_t                                ls_or_fs_device_connected_to_tt_hub;  //{ +0x0014@1  +0x0014@1  +0x0014@1  } | .LSOrFSDeviceConnectedToTTHub
        _m11 int64_t                                transfer_segment_la;                  //{ +0x0016    +0x0016    +0x0016    } | .TransferSegmentLA
        _m12 void*                                  transfer_segment_va;                  //{ +0x001e    +0x001e    +0x001e    } | .TransferSegmentVA
        _m13 uint64_t                               transfer_ring_size;                   //{ +0x0026    +0x0026    +0x0026    } | .TransferRingSize
        _m14 uint32_t                               transfer_ring_initial_cycle_bit;      //{ +0x002e    +0x002e    +0x002e    } | .TransferRingInitialCycleBit
        _m15 uint32_t                               message_number;                       //{ +0x0032    +0x0032    +0x0032    } | .MessageNumber
        _m16 int64_t                                event_ring_segment_la;                //{ +0x0036    +0x0036    +0x0036    } | .EventRingSegmentLA
        _m17 void*                                  event_ring_segment_va;                //{ +0x003e    +0x003e    +0x003e    } | .EventRingSegmentVA
        _m18 uint64_t                               event_ring_size;                      //{ +0x0046    +0x0046    +0x0046    } | .EventRingSize
        _m19 uint32_t                               event_ring_initial_cycle_bit;         //{ +0x004e    +0x004e    +0x004e    } | .EventRingInitialCycleBit
                                                                                        
        SDK_MAGIC_PROPERTIES( "_USBD_ENDPOINT_OFFLOAD_INFORMATION.$", 0x52, true, 0x1b4b6c0b5529ab5b );                                    
        SDK_FIXED_SIZE( usbd_endpoint_offload_information_t, 0x52 );                                    
    };                                                                                  
};
#include "magic/usbd_endpoint_offload_information_t.end.hpp"
SDK_VERIFY( struct wdf::usbd_endpoint_offload_information_t, 0x52 );
