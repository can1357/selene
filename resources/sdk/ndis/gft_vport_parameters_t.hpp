#pragma once
#include <sdkgen/support_library.hpp>
#include "object_header_t.hpp"

#include "magic/gft_vport_parameters_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_GFT_VPORT_PARAMETERS]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct gft_vport_parameters_t                                           
    {                                                                       
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                  
        //                                                                  
        _m00 struct ndis::object_header_t header;                             //{ +0x0000    +0x0000    +0x0000    } | .Header
        _m01 uint32_t                     flags;                              //{ +0x0004    +0x0004    +0x0004    } | .Flags
        _m02 uint32_t                     v_port_id;                          //{ +0x0008    +0x0008    +0x0008    } | .VPortId
        _m03 uint32_t                     exception_v_port_id;                //{ +0x000c    +0x000c    +0x000c    } | .ExceptionVPortId
        _m04 uint32_t                     sampling_rate;                      //{ +0x0010    +0x0010    +0x0010    } | .SamplingRate
        _m05 uint64_t                     dscp_mask;                          //{ +0x0018    +0x0018    +0x0018    } | .DscpMask
        _m06 uint32_t                     num_dscp_mask_counter_objects;      //{ +0x0020    +0x0020    +0x0020    } | .NumDscpMaskCounterObjects
        _m07 sdk::array<uint32_t, 64>     dscp_mask_counter_id_array;         //{ +0x0024    +0x0024    +0x0024    } | .DscpMaskCounterIdArray
        _m08 uint64_t                     priority_mask;                      //{ +0x0128    +0x0128    +0x0128    } | .PriorityMask
        _m09 uint32_t                     num_priority_mask_counter_objects;  //{ +0x0130    +0x0130    +0x0130    } | .NumPriorityMaskCounterObjects
        _m10 sdk::array<uint32_t, 8>      priority_mask_counter_id_array;     //{ +0x0134    +0x0134    +0x0134    } | .PriorityMaskCounterIdArray
        _m11 uint16_t                     vx_lan_src_port_base;               //{ +0x0154    +0x0154    +0x0154    } | .VxLanSrcPortBase
        _m12 uint16_t                     vx_lan_src_port_range;              //{ +0x0156    +0x0156    +0x0156    } | .VxLanSrcPortRange
        _m13 uint32_t                     dscp_flags;                         //{ +0x0158    +0x0158    +0x0158    } | .DscpFlags
                                                                            
        // Windows 11                                                       
        //                                                                  
        _m14 void*                        custom_provider_reserved_pointer;   //{ +0x0160    } | .CustomProviderReservedPointer
        _m15 uint64_t                     custom_provider_reserved_value;     //{ +0x0160    } | .CustomProviderReservedValue
                                                                            
        SDK_MAGIC_PROPERTIES( "_NDIS_GFT_VPORT_PARAMETERS.$", 0x160, true, 0x53587e6fb53f1a00 );                                  
        SDK_DYNAMIC_SIZE( gft_vport_parameters_t );                                  
    };                                                                      
};
#include "magic/gft_vport_parameters_t.end.hpp"
