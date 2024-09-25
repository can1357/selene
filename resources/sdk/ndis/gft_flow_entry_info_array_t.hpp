#pragma once
#include <sdkgen/support_library.hpp>
#include "object_header_t.hpp"

#include "magic/gft_flow_entry_info_array_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_GFT_FLOW_ENTRY_INFO_ARRAY]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct gft_flow_entry_info_array_t                                       
    {                                                                        
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                   
        //                                                                   
        _m00 struct ndis::object_header_t header;                              //{ +0x0000    +0x0000    +0x0000    } | .Header
        _m01 uint32_t                     flags;                               //{ +0x0004    +0x0004    +0x0004    } | .Flags
        _m02 uint32_t                     table_id;                            //{ +0x0008    +0x0008    +0x0008    } | .TableId
        _m03 uint32_t                     v_port_id;                           //{ +0x000c    +0x000c    +0x000c    } | .VPortId
        _m04 uint64_t                     provider_flow_entry_id_start;        //{ +0x0010    +0x0010    +0x0010    } | .ProviderFlowEntryIdStart
        _m05 uint32_t                     flow_entry_id_count;                 //{ +0x0018    +0x0018    +0x0018    } | .FlowEntryIdCount
        _m06 uint32_t                     flow_entry_info_array_offset;        //{ +0x001c    +0x001c    +0x001c    } | .FlowEntryInfoArrayOffset
        _m07 uint32_t                     flow_entry_info_array_num_elements;  //{ +0x0020    +0x0020    +0x0020    } | .FlowEntryInfoArrayNumElements
        _m08 uint32_t                     flow_entry_info_array_element_size;  //{ +0x0024    +0x0024    +0x0024    } | .FlowEntryInfoArrayElementSize
                                                                             
        SDK_MAGIC_PROPERTIES( "_NDIS_GFT_FLOW_ENTRY_INFO_ARRAY.$", 0x28, true, 0x594119b50fa15c14 );                                   
        SDK_FIXED_SIZE( gft_flow_entry_info_array_t, 0x28 );                                   
    };                                                                       
};
#include "magic/gft_flow_entry_info_array_t.end.hpp"
SDK_VERIFY( struct ndis::gft_flow_entry_info_array_t, 0x28 );
