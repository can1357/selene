#pragma once
#include <sdkgen/support_library.hpp>
#include "object_header_t.hpp"
#include "gft_counter_type_t.hpp"
#include "gft_flow_entry_state_t.hpp"
#include "gft_flow_entry_cache_hint_t.hpp"
#include "gft_counter_update_frequency_t.hpp"

#include "magic/gft_exact_match_flow_entry_t.start.hpp"
namespace ndis
{
    struct gft_byte_counter_value_t;
    struct gft_packet_counter_value_t;
    struct gft_packet_byte_counter_value_t;
    struct gft_packet_byte_counter_value_and_state_t;

    // [struct _NDIS_GFT_EXACT_MATCH_FLOW_ENTRY]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct gft_exact_match_flow_entry_t                                                                                                              
    {                                                                                                                                                
        union u0_counter_value_buffer_t                                                                                                              
        {                                                                                                                                            
            using packet_counter_address_t =                volatile struct ndis::gft_packet_counter_value_t*;                                                                                    
            using packet_byte_counter_address_t =           volatile struct ndis::gft_packet_byte_counter_value_t*;                                                                                    
            using packet_byte_counter_and_state_address_t = volatile struct ndis::gft_packet_byte_counter_value_and_state_t*;                                                                                    
                                                                                                                                                     
            // Windows 10 v2004, Windows 11, Windows 10 v20H2                                                                                        
            //                                                                                                                                       
            _m11 packet_counter_address_t                        packet_counter_address;                                                               //{ +0x0000    +0x0000    +0x0000    } | .PacketCounterAddress
            _m12 volatile struct ndis::gft_byte_counter_value_t* byte_counter_address;                                                                 //{ +0x0000    +0x0000    +0x0000    } | .ByteCounterAddress
            _m13 packet_byte_counter_address_t                   packet_byte_counter_address;                                                          //{ +0x0000    +0x0000    +0x0000    } | .PacketByteCounterAddress
            _m14 packet_byte_counter_and_state_address_t         packet_byte_counter_and_state_address;                                                //{ +0x0000    +0x0000    +0x0000    } | .PacketByteCounterAndStateAddress
                                                                                                                                                     
            SDK_MAGIC_PROPERTIES( "_NDIS_GFT_EXACT_MATCH_FLOW_ENTRY.CounterValueBuffer.$", 0x8, true, 0x6e81e0915dc856b5 );                                                                                    
            SDK_FIXED_SIZE( u0_counter_value_buffer_t, 0x8 );                                                                                        
        };                                                                                                                                           
                                                                                                                                                     
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                                                                            
        //                                                                                                                                           
        _m000 struct ndis::object_header_t                                                             header;                                         //{ +0x0000    +0x0000    +0x0000    } | .Header
        _m001 uint32_t                                                                                 flags;                                          //{ +0x0004    +0x0004    +0x0004    } | .Flags
        _m002 uint32_t                                                                                 table_id;                                       //{ +0x0008    +0x0008    +0x0008    } | .TableId
        _m003 uint32_t                                                                                 v_port_id;                                      //{ +0x000c    +0x000c    +0x000c    } | .VPortId
        _m004 uint32_t                                                                                 match_profile_id;                               //{ +0x0010    +0x0010    +0x0010    } | .MatchProfileId
        _m005 int32_t                                                                                  match_request_status;                           //{ +0x0014    +0x0014    +0x0014    } | .MatchRequestStatus
        _m006 int32_t                                                                                  action_request_status;                          //{ +0x0018    +0x0018    +0x0018    } | .ActionRequestStatus
        _m007 uint32_t                                                                                 counter_flags;                                  //{ +0x001c    +0x001c    +0x001c    } | .CounterFlags
        _m008 enum ndis::gft_counter_update_frequency_t                                                counter_update_frequency;                       //{ +0x0020    +0x0020    +0x0020    } | .CounterUpdateFrequency
        _m009 enum ndis::gft_counter_type_t                                                            counter_type;                                   //{ +0x0024    +0x0024    +0x0024    } | .CounterType
        _m010 uint32_t                                                                                 update_period;                                  //{ +0x0028    +0x0028    +0x0028    } | .UpdatePeriod
        _m015 u0_counter_value_buffer_t                                                                counter_value_buffer;                           //{ +0x0030    +0x0030    +0x0030    } | .CounterValueBuffer
        _m016 uint32_t                                                                                 header_transposition_profile_id;                //{ +0x0038    +0x0038    +0x0038    } | .HeaderTranspositionProfileId
        _m017 uint32_t                                                                                 redirection_v_port_id;                          //{ +0x003c    +0x003c    +0x003c    } | .RedirectionVPortId
        _m018 uint32_t                                                                                 ttl_is_one_redirection_v_port_id;               //{ +0x0040    +0x0040    +0x0040    } | .TtlIsOneRedirectionVPortId
        _m019 uint32_t                                                                                 num_counter_objects;                            //{ +0x0044    +0x0044    +0x0044    } | .NumCounterObjects
        _m020 sdk::array<uint32_t, 8>                                                                  counter_id_array;                               //{ +0x0048    +0x0048    +0x0048    } | .CounterIdArray
        _m021 enum ndis::gft_flow_entry_cache_hint_t                                                   cache_hint;                                     //{ +0x0068    +0x0068    +0x0068    } | .CacheHint
        _m022 uint64_t                                                                                 client_flow_entry_id;                           //{ +0x0070    +0x0070    +0x0070    } | .ClientFlowEntryId
        _m023 uint64_t                                                                                 provider_flow_entry_id;                         //{ +0x0078    +0x0078    +0x0078    } | .ProviderFlowEntryId
        _m024 enum ndis::gft_flow_entry_state_t                                                        flow_entry_state;                               //{ +0x0080    +0x0080    +0x0080    } | .FlowEntryState
        _m025 uint32_t                                                                                 tcp_sequence_number;                            //{ +0x0084    +0x0084    +0x0084    } | .TcpSequenceNumber
        _m026 uint32_t                                                                                 header_group_exact_match_array_offset;          //{ +0x0088    +0x0088    +0x0088    } | .HeaderGroupExactMatchArrayOffset
        _m027 uint32_t                                                                                 header_group_exact_match_array_num_elements;    //{ +0x008c    +0x008c    +0x008c    } | .HeaderGroupExactMatchArrayNumElements
        _m028 uint32_t                                                                                 header_group_exact_match_array_element_size;    //{ +0x0090    +0x0090    +0x0090    } | .HeaderGroupExactMatchArrayElementSize
        _m029 uint32_t                                                                                 header_group_transposition_array_offset;        //{ +0x0094    +0x0094    +0x0094    } | .HeaderGroupTranspositionArrayOffset
        _m030 uint32_t                                                                                 header_group_transposition_array_num_elements;  //{ +0x0098    +0x0098    +0x0098    } | .HeaderGroupTranspositionArrayNumElements
        _m031 uint32_t                                                                                 header_group_transposition_array_element_size;  //{ +0x009c    +0x009c    +0x009c    } | .HeaderGroupTranspositionArrayElementSize
        _m032 uint32_t                                                                                 custom_action_offset;                           //{ +0x00a0    +0x00a0    +0x00a0    } | .CustomActionOffset
                                                                                                                                                     
        SDK_MAGIC_PROPERTIES( "_NDIS_GFT_EXACT_MATCH_FLOW_ENTRY.$", 0xa8, true, 0x4026495fa5b04be7 );                                                
        SDK_FIXED_SIZE( gft_exact_match_flow_entry_t, 0xa8 );                                                                                        
    };                                                                                                                                               
};
#include "magic/gft_exact_match_flow_entry_t.end.hpp"
SDK_VERIFY( union ndis::gft_exact_match_flow_entry_t::u0_counter_value_buffer_t, 0x8 );
SDK_VERIFY( struct ndis::gft_exact_match_flow_entry_t, 0xa8 );
