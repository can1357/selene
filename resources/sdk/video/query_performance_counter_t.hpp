#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/query_performance_counter_t.start.hpp"
namespace video
{
    struct performance_counter_t;

    // [struct _VIDEO_QUERY_PERFORMANCE_COUNTER]
    // => WDK 10 (NV)
    //
    struct query_performance_counter_t                        
    {                                                         
        // WDK 10                                             
        //                                                    
        _m00 uint32_t                             buffer_size;  //{ +0x0000    } | .BufferSize
        _m01 struct video::performance_counter_t* buffer;       //{ +0x0008    } | .Buffer
                                                              
        SDK_NONVOL_PROPERTIES( "_VIDEO_QUERY_PERFORMANCE_COUNTER.$", 0x0, false, 0x34f20beada237300 );            
        SDK_FIXED_SIZE( query_performance_counter_t, 0x10 );            
    };                                                        
};
#include "magic/query_performance_counter_t.end.hpp"
SDK_VERIFY( struct video::query_performance_counter_t, 0x10 );
