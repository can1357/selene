#pragma once
#include <sdkgen/support_library.hpp>
#include "object_header_t.hpp"
#include "gft_counter_type_t.hpp"
#include "gft_counter_update_frequency_t.hpp"

#include "magic/gft_counter_info_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_GFT_COUNTER_INFO]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct gft_counter_info_t                                                   
    {                                                                           
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                         
        //                                                                      
        _m00 struct ndis::object_header_t              header;                    //{ +0x0000    +0x0000    +0x0000    } | .Header
        _m01 uint32_t                                  flags;                     //{ +0x0004    +0x0004    +0x0004    } | .Flags
        _m02 uint32_t                                  counter_id_start;          //{ +0x0008    +0x0008    +0x0008    } | .CounterIdStart
        _m03 uint32_t                                  num_counters;              //{ +0x000c    +0x000c    +0x000c    } | .NumCounters
        _m04 enum ndis::gft_counter_update_frequency_t counter_update_frequency;  //{ +0x0010    +0x0010    +0x0010    } | .CounterUpdateFrequency
        _m05 enum ndis::gft_counter_type_t             counter_type;              //{ +0x0014    +0x0014    +0x0014    } | .CounterType
        _m06 uint32_t                                  update_period;             //{ +0x0018    +0x0018    +0x0018    } | .UpdatePeriod
                                                                                
        SDK_MAGIC_PROPERTIES( "_NDIS_GFT_COUNTER_INFO.$", 0x1c, true, 0xe5ef2cbfec968cb2 );                         
        SDK_FIXED_SIZE( gft_counter_info_t, 0x1c );                             
    };                                                                          
};
#include "magic/gft_counter_info_t.end.hpp"
SDK_VERIFY( struct ndis::gft_counter_info_t, 0x1c );
