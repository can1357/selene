#pragma once
#include <sdkgen/support_library.hpp>
#include "object_header_t.hpp"
#include "ndk_parameters_t.hpp"
#include "../nt/group_affinity_t.hpp"
#include "if_counted_string_lh_t.hpp"
#include "nic_switch_vport_state_t.hpp"
#include "nic_switch_vport_interrupt_moderation_t.hpp"

#include "magic/nic_switch_vport_parameters_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_NIC_SWITCH_VPORT_PARAMETERS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct nic_switch_vport_parameters_t                              
    {                                                                 
        using interrupt_moderation_t = enum ndis::nic_switch_vport_interrupt_moderation_t;                     
                                                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                                            
        _m00 struct ndis::object_header_t        header;                //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m01 uint32_t                            flags;                 //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Flags
        _m02 uint32_t                            switch_id;             //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .SwitchId
        _m03 uint32_t                            v_port_id;             //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .VPortId
        _m04 struct ndis::if_counted_string_lh_t v_port_name;           //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .VPortName
        _m05 uint16_t                            attached_function_id;  //{ +0x0214    +0x0214    +0x0214    +0x0214    } | .AttachedFunctionId
        _m06 uint32_t                            num_queue_pairs;       //{ +0x0218    +0x0218    +0x0218    +0x0218    } | .NumQueuePairs
        _m07 interrupt_moderation_t              interrupt_moderation;  //{ +0x021c    +0x021c    +0x021c    +0x021c    } | .InterruptModeration
        _m08 enum ndis::nic_switch_vport_state_t v_port_state;          //{ +0x0220    +0x0220    +0x0220    +0x0220    } | .VPortState
        _m09 struct nt::group_affinity_t         processor_affinity;    //{ +0x0228    +0x0228    +0x0228    +0x0228    } | .ProcessorAffinity
        _m10 uint32_t                            lookahead_size;        //{ +0x0238    +0x0238    +0x0238    +0x0238    } | .LookaheadSize
        _m11 struct ndis::ndk_parameters_t       ndk_params;            //{ +0x0240    +0x0240    +0x0240    +0x0240    } | .NdkParams
        _m12 uint32_t                            qos_sq_id;             //{ +0x02e8    +0x02e8    +0x02e8    +0x02e8    } | .QosSqId
                                                                      
        SDK_MAGIC_PROPERTIES( "_NDIS_NIC_SWITCH_VPORT_PARAMETERS.$", 0x2f0, true, 0x7afaccd23d999593 );                     
        SDK_FIXED_SIZE( nic_switch_vport_parameters_t, 0x2f0 );                     
    };                                                                
};
#include "magic/nic_switch_vport_parameters_t.end.hpp"
SDK_VERIFY( struct ndis::nic_switch_vport_parameters_t, 0x2f0 );
