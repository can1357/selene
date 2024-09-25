#pragma once
#include <sdkgen/support_library.hpp>

namespace ex { struct fast_ref_t; }

#include "magic/silo_tracing_block_t.start.hpp"
namespace etw
{
    // [struct _ETW_SILO_TRACING_BLOCK]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct silo_tracing_block_t                         
    {                                                   
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                              
        _m00 struct ex::fast_ref_t* processor_buffers;    //{ +0x0000    +0x0000    +0x0000    } | .ProcessorBuffers
        _m01 uint64_t*              events_logged_count;  //{ +0x0008    +0x0008    +0x0008    } | .EventsLoggedCount
        _m02 int64_t*               qpc_delta;            //{ +0x0010    +0x0010    +0x0010    } | .QpcDelta
                                                        
        SDK_MAGIC_PROPERTIES( "_ETW_SILO_TRACING_BLOCK.$", 0x40, true, 0x9f6b0d5d5f53a4f8 );                    
        SDK_FIXED_SIZE( silo_tracing_block_t, 0x40 );                    
    };                                                  
};
#include "magic/silo_tracing_block_t.end.hpp"
SDK_VERIFY( struct etw::silo_tracing_block_t, 0x40 );
