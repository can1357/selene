#pragma once
#include <sdkgen/support_library.hpp>
#include "object_header_t.hpp"

#include "magic/qos_offload_capabilities_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_QOS_OFFLOAD_CAPABILITIES]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct qos_offload_capabilities_t                                         
    {                                                                         
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                    
        //                                                                    
        _m00 struct ndis::object_header_t header;                               //{ +0x0000    +0x0000    +0x0000    } | .Header
        _m01 uint32_t                     flags;                                //{ +0x0004    +0x0004    +0x0004    } | .Flags
        _m02 uint32_t                     supported_sq_types;                   //{ +0x0008    +0x0008    +0x0008    } | .SupportedSqTypes
        _m03 sdk::array<uint8_t, 8>       transmit_cap_supported;               //{ +0x000c    +0x000c    +0x000c    } | .TransmitCapSupported
        _m04 sdk::array<uint8_t, 8>       transmit_reservation_supported;       //{ +0x0014    +0x0014    +0x0014    } | .TransmitReservationSupported
        _m05 sdk::array<uint8_t, 8>       receive_cap_supported;                //{ +0x001c    +0x001c    +0x001c    } | .ReceiveCapSupported
        _m06 sdk::array<uint8_t, 8>       transmit_gft_cap_supported;           //{ +0x0024    +0x0024    +0x0024    } | .TransmitGftCapSupported
        _m07 sdk::array<uint8_t, 8>       receive_gft_cap_supported;            //{ +0x002c    +0x002c    +0x002c    } | .ReceiveGftCapSupported
        _m08 sdk::array<uint8_t, 8>       tc_supported_table;                   //{ +0x0034    +0x0034    +0x0034    } | .TcSupportedTable
        _m09 uint32_t                     num_standard_sqs_supported;           //{ +0x003c    +0x003c    +0x003c    } | .NumStandardSqsSupported
        _m10 uint32_t                     num_gft_sqs_supported;                //{ +0x0040    +0x0040    +0x0040    } | .NumGftSqsSupported
        _m11 uint32_t                     reservation_granularity_supported;    //{ +0x0044    +0x0044    +0x0044    } | .ReservationGranularitySupported
        _m12 uint32_t                     max_num_sq_inputs;                    //{ +0x0048    +0x0048    +0x0048    } | .MaxNumSqInputs
        _m13 uint8_t                      cross_tc_transmit_max_cap_supported;  //{ +0x004c    +0x004c    +0x004c    } | .CrossTcTransmitMaxCapSupported
                                                                              
        SDK_MAGIC_PROPERTIES( "_NDIS_QOS_OFFLOAD_CAPABILITIES.$", 0x50, true, 0x7a6c54b64762fe77 );                                    
        SDK_FIXED_SIZE( qos_offload_capabilities_t, 0x50 );                                    
    };                                                                        
};
#include "magic/qos_offload_capabilities_t.end.hpp"
SDK_VERIFY( struct ndis::qos_offload_capabilities_t, 0x50 );
