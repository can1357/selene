#pragma once
#include <sdkgen/support_library.hpp>
#include "object_header_t.hpp"

#include "magic/gft_free_counter_parameters_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_GFT_FREE_COUNTER_PARAMETERS]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct gft_free_counter_parameters_t                                                  
    {                                                                                     
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                                
        //                                                                                
        _m00 struct ndis::object_header_t header;                                           //{ +0x0000    +0x0000    +0x0000    } | .Header
        _m01 uint32_t                     flags;                                            //{ +0x0004    +0x0004    +0x0004    } | .Flags
        _m02 uint32_t                     table_id;                                         //{ +0x0008    +0x0008    +0x0008    } | .TableId
        _m03 uint32_t                     counter_id_start;                                 //{ +0x000c    +0x000c    +0x000c    } | .CounterIdStart
        _m04 uint32_t                     num_counters;                                     //{ +0x0010    +0x0010    +0x0010    } | .NumCounters
        _m05 uint32_t                     last_counter_value_and_state_array_offset;        //{ +0x0014    +0x0014    +0x0014    } | .LastCounterValueAndStateArrayOffset
        _m06 uint32_t                     last_counter_value_and_state_array_num_elements;  //{ +0x0018    +0x0018    +0x0018    } | .LastCounterValueAndStateArrayNumElements
        _m07 uint32_t                     last_counter_value_and_state_array_element_size;  //{ +0x001c    +0x001c    +0x001c    } | .LastCounterValueAndStateArrayElementSize
                                                                                          
        SDK_MAGIC_PROPERTIES( "_NDIS_GFT_FREE_COUNTER_PARAMETERS.$", 0x20, true, 0x463f06f4758826e7 );                                                
        SDK_FIXED_SIZE( gft_free_counter_parameters_t, 0x20 );                                                
    };                                                                                    
};
#include "magic/gft_free_counter_parameters_t.end.hpp"
SDK_VERIFY( struct ndis::gft_free_counter_parameters_t, 0x20 );
