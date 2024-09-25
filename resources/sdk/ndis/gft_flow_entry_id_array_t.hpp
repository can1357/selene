#pragma once
#include <sdkgen/support_library.hpp>
#include "object_header_t.hpp"

#include "magic/gft_flow_entry_id_array_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_GFT_FLOW_ENTRY_ID_ARRAY]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct gft_flow_entry_id_array_t                                                                                          
    {                                                                                                                         
        union u0_id_array_t                                                                                                   
        {                                                                                                                     
            struct u3_flow_entry_id_array_t                                                                                   
            {                                                                                                                 
                // Windows 10 v2004, Windows 11, Windows 10 v20H2                                                                                    
                //                                                                                                            
                _m04 uint32_t provider_flow_entry_id_array_offset;                                                              //{ +0x0000    +0x0000    +0x0000    } | .ProviderFlowEntryIdArrayOffset
                _m05 uint32_t provider_flow_entry_id_array_num_elements;                                                        //{ +0x0004    +0x0004    +0x0004    } | .ProviderFlowEntryIdArrayNumElements
                _m06 uint32_t provider_flow_entry_id_array_element_size;                                                        //{ +0x0008    +0x0008    +0x0008    } | .ProviderFlowEntryIdArrayElementSize
                                                                                                                              
                SDK_MAGIC_PROPERTIES( "_NDIS_GFT_FLOW_ENTRY_ID_ARRAY.IdArray.FlowEntryIdArray.$", 0xc, true, 0xabee49494ab3bfe2 );                                                                                    
                SDK_FIXED_SIZE( u3_flow_entry_id_array_t, 0xc );                                                                                    
            };                                                                                                                
                                                                                                                              
            struct u6_flow_entry_id_and_counter_array_t                                                                       
            {                                                                                                                 
                // Windows 10 v2004, Windows 11, Windows 10 v20H2                                                                                                
                //                                                                                                            
                _m08 uint32_t provider_flow_entry_id_and_counter_array_offset;                                                  //{ +0x0000    +0x0000    +0x0000    } | .ProviderFlowEntryIdAndCounterArrayOffset
                _m09 uint32_t provider_flow_entry_id_and_counter_array_num_elements;                                            //{ +0x0004    +0x0004    +0x0004    } | .ProviderFlowEntryIdAndCounterArrayNumElements
                _m10 uint32_t provider_flow_entry_id_and_counter_array_element_size;                                            //{ +0x0008    +0x0008    +0x0008    } | .ProviderFlowEntryIdAndCounterArrayElementSize
                                                                                                                              
                SDK_MAGIC_PROPERTIES( "_NDIS_GFT_FLOW_ENTRY_ID_ARRAY.IdArray.FlowEntryIdAndCounterArray.$", 0xc, true, 0xf49160555cf9adae );                                                                                                
                SDK_FIXED_SIZE( u6_flow_entry_id_and_counter_array_t, 0xc );                                                                                                
            };                                                                                                                
                                                                                                                              
            // Windows 10 v2004, Windows 11, Windows 10 v20H2                                                                 
            //                                                                                                                
            _m07 u3_flow_entry_id_array_t                                           flow_entry_id_array;                        //{ +0x0000    +0x0000    +0x0000    } | .FlowEntryIdArray
            _m11 u6_flow_entry_id_and_counter_array_t                               flow_entry_id_and_counter_array;            //{ +0x0000    +0x0000    +0x0000    } | .FlowEntryIdAndCounterArray
                                                                                                                              
            SDK_MAGIC_PROPERTIES( "_NDIS_GFT_FLOW_ENTRY_ID_ARRAY.IdArray.$", 0xc, true, 0x1a7d87d4fc9a7fdb );                                          
            SDK_FIXED_SIZE( u0_id_array_t, 0xc );                                                                             
        };                                                                                                                    
                                                                                                                              
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                                                     
        //                                                                                                                    
        _m00 struct ndis::object_header_t                                                                           header;     //{ +0x0000    +0x0000    +0x0000    } | .Header
        _m01 uint32_t                                                                                               flags;      //{ +0x0004    +0x0004    +0x0004    } | .Flags
        _m02 uint32_t                                                                                               table_id;   //{ +0x0008    +0x0008    +0x0008    } | .TableId
        _m03 uint32_t                                                                                               v_port_id;  //{ +0x000c    +0x000c    +0x000c    } | .VPortId
        _m12 u0_id_array_t                                                                                          id_array;   //{ +0x0010    +0x0010    +0x0010    } | .IdArray
                                                                                                                              
        SDK_MAGIC_PROPERTIES( "_NDIS_GFT_FLOW_ENTRY_ID_ARRAY.$", 0x1c, true, 0xb4b2a0c873d2e3a );                             
        SDK_FIXED_SIZE( gft_flow_entry_id_array_t, 0x1c );                                                                    
    };                                                                                                                        
};
#include "magic/gft_flow_entry_id_array_t.end.hpp"
SDK_VERIFY( struct ndis::gft_flow_entry_id_array_t::u0_id_array_t::u3_flow_entry_id_array_t, 0xc );
SDK_VERIFY( struct ndis::gft_flow_entry_id_array_t::u0_id_array_t::u6_flow_entry_id_and_counter_array_t, 0xc );
SDK_VERIFY( union ndis::gft_flow_entry_id_array_t::u0_id_array_t, 0xc );
SDK_VERIFY( struct ndis::gft_flow_entry_id_array_t, 0x1c );
