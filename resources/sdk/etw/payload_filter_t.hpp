#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/aggregated_payload_filter_t.hpp"

#include "magic/payload_filter_t.start.hpp"
namespace etw
{
    // [struct _ETW_PAYLOAD_FILTER]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct payload_filter_t                                        
    {                                                              
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                                                         
        _m00 int32_t                                ref_count;       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .RefCount
        _m01 struct nt::aggregated_payload_filter_t payload_filter;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .PayloadFilter
                                                                   
        SDK_MAGIC_PROPERTIES( "_ETW_PAYLOAD_FILTER.$", 0x58, true, 0xc334c600002b7060 );               
        SDK_FIXED_SIZE( payload_filter_t, 0x58 );                  
    };                                                             
};
#include "magic/payload_filter_t.end.hpp"
SDK_VERIFY( struct etw::payload_filter_t, 0x58 );
