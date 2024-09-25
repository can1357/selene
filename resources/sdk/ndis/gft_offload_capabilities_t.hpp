#pragma once
#include <sdkgen/support_library.hpp>
#include "object_header_t.hpp"

#include "magic/gft_offload_capabilities_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_GFT_OFFLOAD_CAPABILITIES]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct gft_offload_capabilities_t                                                               
    {                                                                                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                          
        //                                                                                          
        _m00 struct ndis::object_header_t header;                                                     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m01 uint32_t                     flags;                                                      //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Flags
        _m02 uint32_t                     counter_capabilities;                                       //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .CounterCapabilities
        _m03 uint32_t                     supported_table_types;                                      //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .SupportedTableTypes
        _m04 uint32_t                     supported_encapsulation_types;                              //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .SupportedEncapsulationTypes
        _m05 uint32_t                     supported_ingress_exact_match_table_actions;                //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .SupportedIngressExactMatchTableActions
        _m06 uint32_t                     supported_egress_exact_match_table_actions;                 //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .SupportedEgressExactMatchTableActions
        _m07 uint32_t                     software_supported_ingress_exact_match_table_actions;       //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .SoftwareSupportedIngressExactMatchTableActions
        _m08 uint32_t                     software_supported_egress_exact_match_table_actions;        //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .SoftwareSupportedEgressExactMatchTableActions
        _m09 uint32_t                     supported_ingress_wildcard_match_table_actions;             //{ +0x0024    +0x0024    +0x0024    +0x0024    } | .SupportedIngressWildcardMatchTableActions
        _m10 uint32_t                     supported_egress_wildcard_match_table_actions;              //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .SupportedEgressWildcardMatchTableActions
        _m11 uint32_t                     software_supported_ingress_wildcard_match_table_actions;    //{ +0x002c    +0x002c    +0x002c    +0x002c    } | .SoftwareSupportedIngressWildcardMatchTableActions
        _m12 uint32_t                     software_supported_egress_wildcard_match_table_actions;     //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .SoftwareSupportedEgressWildcardMatchTableActions
        _m13 uint32_t                     num_packet_counter_objects;                                 //{ +0x0034    +0x0034    +0x0034    +0x0034    } | .NumPacketCounterObjects
        _m14 uint32_t                     num_byte_counter_objects;                                   //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .NumByteCounterObjects
        _m15 uint32_t                     num_counter_objects_per_ingress_exact_match_flow_entry;     //{ +0x0040    +0x0044    +0x0044    +0x0044    } | .NumCounterObjectsPerIngressExactMatchFlowEntry
        _m16 uint32_t                     num_counter_objects_per_egress_exact_match_flow_entry;      //{ +0x0044    +0x0048    +0x0048    +0x0048    } | .NumCounterObjectsPerEgressExactMatchFlowEntry
        _m17 uint32_t                     num_counter_objects_per_ingress_wildcard_match_flow_entry;  //{ +0x0048    +0x004c    +0x004c    +0x004c    } | .NumCounterObjectsPerIngressWildcardMatchFlowEntry
        _m18 uint32_t                     num_counter_objects_per_egress_wildcard_match_flow_entry;   //{ +0x004c    +0x0050    +0x0050    +0x0050    } | .NumCounterObjectsPerEgressWildcardMatchFlowEntry
                                                                                                    
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                                          
        //                                                                                          
        _m19 uint32_t                     num_packet_byte_counter_objects;                            //{ +0x003c    +0x003c    +0x003c    } | .NumPacketByteCounterObjects
        _m20 uint32_t                     num_packet_byte_counter_and_state_objects;                  //{ +0x0040    +0x0040    +0x0040    } | .NumPacketByteCounterAndStateObjects
                                                                                                    
        // Windows 10 v1607                                                                         
        //                                                                                          
        _m21 uint32_t                     num_packet_and_byte_counter_objects;                        //{ +0x003c    } | .NumPacketAndByteCounterObjects
                                                                                                    
        SDK_MAGIC_PROPERTIES( "_NDIS_GFT_OFFLOAD_CAPABILITIES.$", 0x54, true, 0x98ebbfb6dfdba2ac );                                                          
        SDK_DYNAMIC_SIZE( gft_offload_capabilities_t );                                                          
    };                                                                                              
};
#include "magic/gft_offload_capabilities_t.end.hpp"
