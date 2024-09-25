#pragma once
#include <sdkgen/support_library.hpp>
#include "object_header_t.hpp"
#include "gft_flow_entry_type_t.hpp"

#include "magic/gft_flow_entry_array_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_GFT_FLOW_ENTRY_ARRAY]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct gft_flow_entry_array_t                                           
    {                                                                       
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                              
        //                                                                  
        _m00 struct ndis::object_header_t     header;                         //{ +0x0000    +0x0000    +0x0000    } | .Header
        _m01 uint32_t                         flags;                          //{ +0x0004    +0x0004    +0x0004    } | .Flags
        _m02 enum ndis::gft_flow_entry_type_t entry_type;                     //{ +0x0008    +0x0008    +0x0008    } | .EntryType
        _m03 uint32_t                         flow_entry_array_offset;        //{ +0x000c    +0x000c    +0x000c    } | .FlowEntryArrayOffset
        _m04 uint32_t                         flow_entry_array_num_elements;  //{ +0x0010    +0x0010    +0x0010    } | .FlowEntryArrayNumElements
        _m05 uint32_t                         flow_entry_array_element_size;  //{ +0x0014    +0x0014    +0x0014    } | .FlowEntryArrayElementSize
                                                                            
        SDK_MAGIC_PROPERTIES( "_NDIS_GFT_FLOW_ENTRY_ARRAY.$", 0x18, true, 0x6bea472e69a2a2df );                              
        SDK_FIXED_SIZE( gft_flow_entry_array_t, 0x18 );                              
    };                                                                      
};
#include "magic/gft_flow_entry_array_t.end.hpp"
SDK_VERIFY( struct ndis::gft_flow_entry_array_t, 0x18 );
