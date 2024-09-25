#pragma once
#include <sdkgen/support_library.hpp>
#include "qos_sq_type_t.hpp"
#include "object_header_t.hpp"

#include "magic/qos_sq_parameters_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_QOS_SQ_PARAMETERS]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct qos_sq_parameters_t                                                    
    {                                                                             
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                        
        //                                                                        
        _m00 struct ndis::object_header_t header;                                   //{ +0x0000    +0x0000    +0x0000    } | .Header
        _m01 uint32_t                     flags;                                    //{ +0x0004    +0x0004    +0x0004    } | .Flags
        _m02 uint32_t                     sq_id;                                    //{ +0x0008    +0x0008    +0x0008    } | .SqId
        _m03 enum ndis::qos_sq_type_t     sq_type;                                  //{ +0x000c    +0x000c    +0x000c    } | .SqType
        _m04 sdk::array<uint8_t, 8>       tc_enabled_table;                         //{ +0x0010    +0x0010    +0x0010    } | .TcEnabledTable
        _m05 sdk::array<uint32_t, 8>      tc_transmit_bandwidth_cap_table;          //{ +0x0018    +0x0018    +0x0018    } | .TcTransmitBandwidthCapTable
        _m06 sdk::array<uint32_t, 8>      tc_transmit_bandwidth_reservation_table;  //{ +0x0038    +0x0038    +0x0038    } | .TcTransmitBandwidthReservationTable
        _m07 sdk::array<uint32_t, 8>      tc_receive_bandwidth_cap_table;           //{ +0x0058    +0x0058    +0x0058    } | .TcReceiveBandwidthCapTable
        _m08 uint32_t                     cross_tc_transmit_bandwidth_cap;          //{ +0x0078    +0x0078    +0x0078    } | .CrossTcTransmitBandwidthCap
        _m09 uint32_t                     max_num_sq_inputs;                        //{ +0x007c    +0x007c    +0x007c    } | .MaxNumSqInputs
                                                                                  
        SDK_MAGIC_PROPERTIES( "_NDIS_QOS_SQ_PARAMETERS.$", 0x80, true, 0x3382e5a63fb05445 );                                        
        SDK_FIXED_SIZE( qos_sq_parameters_t, 0x80 );                                        
    };                                                                            
};
#include "magic/qos_sq_parameters_t.end.hpp"
SDK_VERIFY( struct ndis::qos_sq_parameters_t, 0x80 );
