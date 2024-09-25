#pragma once
#include <sdkgen/support_library.hpp>
#include "object_header_t.hpp"

#include "magic/gft_counter_value_array_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_GFT_COUNTER_VALUE_ARRAY]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct gft_counter_value_array_t                                       
    {                                                                      
        union u0_start_id_t                                                
        {                                                                  
            // Windows 10 v2004, Windows 11, Windows 10 v20H2                                               
            //                                                             
            _m03 uint64_t flow_entry_id;                                     //{ +0x0000    +0x0000    +0x0000    } | .FlowEntryId
            _m04 uint32_t counter_id;                                        //{ +0x0000    +0x0000    +0x0000    } | .CounterId
                                                                           
            SDK_MAGIC_PROPERTIES( "_NDIS_GFT_COUNTER_VALUE_ARRAY.StartId.$", 0x8, true, 0x489ef4789b1f603f );                                               
            SDK_FIXED_SIZE( u0_start_id_t, 0x8 );                                               
        };                                                                 
                                                                           
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                 
        //                                                                 
        _m00 struct ndis::object_header_t header;                            //{ +0x0000    +0x0000    +0x0000    } | .Header
        _m01 uint32_t                     flags;                             //{ +0x0004    +0x0004    +0x0004    } | .Flags
        _m02 uint32_t                     table_id;                          //{ +0x0008    +0x0008    +0x0008    } | .TableId
        _m05 u0_start_id_t                start_id;                          //{ +0x0010    +0x0010    +0x0010    } | .StartId
        _m06 uint32_t                     num_counters;                      //{ +0x0018    +0x0018    +0x0018    } | .NumCounters
        _m07 uint32_t                     counter_value_array_offset;        //{ +0x001c    +0x001c    +0x001c    } | .CounterValueArrayOffset
        _m08 uint32_t                     counter_value_array_num_elements;  //{ +0x0020    +0x0020    +0x0020    } | .CounterValueArrayNumElements
        _m09 uint32_t                     counter_value_array_element_size;  //{ +0x0024    +0x0024    +0x0024    } | .CounterValueArrayElementSize
                                                                           
        SDK_MAGIC_PROPERTIES( "_NDIS_GFT_COUNTER_VALUE_ARRAY.$", 0x28, true, 0x1dda733c81f91e5d );                                 
        SDK_FIXED_SIZE( gft_counter_value_array_t, 0x28 );                                 
    };                                                                     
};
#include "magic/gft_counter_value_array_t.end.hpp"
SDK_VERIFY( union ndis::gft_counter_value_array_t::u0_start_id_t, 0x8 );
SDK_VERIFY( struct ndis::gft_counter_value_array_t, 0x28 );
