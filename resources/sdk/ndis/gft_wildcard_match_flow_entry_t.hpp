#pragma once
#include <sdkgen/support_library.hpp>
#include "object_header_t.hpp"
#include "gft_counter_type_t.hpp"
#include "gft_wildcard_action_t.hpp"
#include "gft_flow_entry_state_t.hpp"
#include "gft_flow_entry_cache_hint_t.hpp"
#include "gft_counter_update_frequency_t.hpp"

#include "magic/gft_wildcard_match_flow_entry_t.start.hpp"
namespace ndis
{
    struct gft_byte_counter_value_t;
    struct gft_packet_counter_value_t;
    struct gft_packet_byte_counter_value_t;

    // [struct _NDIS_GFT_WILDCARD_MATCH_FLOW_ENTRY]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct gft_wildcard_match_flow_entry_t                                                                                                  
    {                                                                                                                                       
        union u0_counter_value_buffer_t                                                                                                     
        {                                                                                                                                   
            using packet_counter_address_t =      volatile struct ndis::gft_packet_counter_value_t*;                                                                           
            using packet_byte_counter_address_t = volatile struct ndis::gft_packet_byte_counter_value_t*;                                                                           
                                                                                                                                            
            // Windows 10 v2004, Windows 11, Windows 10 v20H2                                                                               
            //                                                                                                                              
            _m11 packet_counter_address_t                        packet_counter_address;                                                      //{ +0x0000    +0x0000    +0x0000    } | .PacketCounterAddress
            _m12 volatile struct ndis::gft_byte_counter_value_t* byte_counter_address;                                                        //{ +0x0000    +0x0000    +0x0000    } | .ByteCounterAddress
            _m13 packet_byte_counter_address_t                   packet_byte_counter_address;                                                 //{ +0x0000    +0x0000    +0x0000    } | .PacketByteCounterAddress
                                                                                                                                            
            SDK_MAGIC_PROPERTIES( "_NDIS_GFT_WILDCARD_MATCH_FLOW_ENTRY.CounterValueBuffer.$", 0x8, true, 0x7024f1a6fba9fff6 );                                                                           
            SDK_FIXED_SIZE( u0_counter_value_buffer_t, 0x8 );                                                                               
        };                                                                                                                                  
                                                                                                                                            
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                                                                   
        //                                                                                                                                  
        _m000 struct ndis::object_header_t                                                   header;                                          //{ +0x0000    +0x0000    +0x0000    } | .Header
        _m001 uint32_t                                                                       flags;                                           //{ +0x0004    +0x0004    +0x0004    } | .Flags
        _m002 uint32_t                                                                       table_id;                                        //{ +0x0008    +0x0008    +0x0008    } | .TableId
        _m003 uint32_t                                                                       v_port_id;                                       //{ +0x000c    +0x000c    +0x000c    } | .VPortId
        _m004 uint32_t                                                                       match_profile_id;                                //{ +0x0010    +0x0010    +0x0010    } | .MatchProfileId
        _m005 int32_t                                                                        match_request_status;                            //{ +0x0014    +0x0014    +0x0014    } | .MatchRequestStatus
        _m006 int32_t                                                                        action_request_status;                           //{ +0x0018    +0x0018    +0x0018    } | .ActionRequestStatus
        _m007 uint32_t                                                                       counter_flags;                                   //{ +0x001c    +0x001c    +0x001c    } | .CounterFlags
        _m008 enum ndis::gft_counter_update_frequency_t                                      counter_update_frequency;                        //{ +0x0020    +0x0020    +0x0020    } | .CounterUpdateFrequency
        _m009 enum ndis::gft_counter_type_t                                                  counter_type;                                    //{ +0x0024    +0x0024    +0x0024    } | .CounterType
        _m010 uint32_t                                                                       update_period;                                   //{ +0x0028    +0x0028    +0x0028    } | .UpdatePeriod
        _m014 u0_counter_value_buffer_t                                                      counter_value_buffer;                            //{ +0x0030    +0x0030    +0x0030    } | .CounterValueBuffer
        _m015 uint32_t                                                                       priority;                                        //{ +0x0038    +0x0038    +0x0038    } | .Priority
        _m016 enum ndis::gft_wildcard_action_t                                               action;                                          //{ +0x003c    +0x003c    +0x003c    } | .Action
        _m017 uint32_t                                                                       redirection_v_port_id;                           //{ +0x0040    +0x0040    +0x0040    } | .RedirectionVPortId
        _m018 uint32_t                                                                       ttl_is_one_redirection_v_port_id;                //{ +0x0044    +0x0044    +0x0044    } | .TtlIsOneRedirectionVPortId
        _m019 uint32_t                                                                       num_counter_objects;                             //{ +0x0048    +0x0048    +0x0048    } | .NumCounterObjects
        _m020 sdk::array<uint32_t, 8>                                                        counter_id_array;                                //{ +0x004c    +0x004c    +0x004c    } | .CounterIdArray
        _m021 enum ndis::gft_flow_entry_cache_hint_t                                         cache_hint;                                      //{ +0x006c    +0x006c    +0x006c    } | .CacheHint
        _m022 uint64_t                                                                       client_flow_entry_id;                            //{ +0x0070    +0x0070    +0x0070    } | .ClientFlowEntryId
        _m023 uint64_t                                                                       provider_flow_entry_id;                          //{ +0x0078    +0x0078    +0x0078    } | .ProviderFlowEntryId
        _m024 enum ndis::gft_flow_entry_state_t                                              flow_entry_state;                                //{ +0x0080    +0x0080    +0x0080    } | .FlowEntryState
        _m025 uint32_t                                                                       header_group_wildcard_match_array_offset;        //{ +0x0084    +0x0084    +0x0084    } | .HeaderGroupWildcardMatchArrayOffset
        _m026 uint32_t                                                                       header_group_wildcard_match_array_num_elements;  //{ +0x0088    +0x0088    +0x0088    } | .HeaderGroupWildcardMatchArrayNumElements
        _m027 uint32_t                                                                       header_group_wildcard_match_array_element_size;  //{ +0x008c    +0x008c    +0x008c    } | .HeaderGroupWildcardMatchArrayElementSize
        _m028 uint32_t                                                                       custom_action_offset;                            //{ +0x0090    +0x0090    +0x0090    } | .CustomActionOffset
                                                                                                                                            
        SDK_MAGIC_PROPERTIES( "_NDIS_GFT_WILDCARD_MATCH_FLOW_ENTRY.$", 0x98, true, 0x24465b6e6befb395 );                                               
        SDK_FIXED_SIZE( gft_wildcard_match_flow_entry_t, 0x98 );                                                                            
    };                                                                                                                                      
};
#include "magic/gft_wildcard_match_flow_entry_t.end.hpp"
SDK_VERIFY( union ndis::gft_wildcard_match_flow_entry_t::u0_counter_value_buffer_t, 0x8 );
SDK_VERIFY( struct ndis::gft_wildcard_match_flow_entry_t, 0x98 );
