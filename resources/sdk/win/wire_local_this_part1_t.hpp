#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"
#include "midl_xmit_defs_0001_t.hpp"

#include "magic/wire_local_this_part1_t.start.hpp"
namespace win
{
    // [struct WireLocalThisPart1]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct wire_local_this_part1_t                                               
    {                                                                            
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                  
        //                                                                       
        _m00 uint32_t                          dw_flags;                           //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .dwFlags
        _m01 uint32_t                          dw_client_thread;                   //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .dwClientThread
        _m02 struct win::midl_xmit_defs_0001_t async_request_block;                //{ +0x0008    +0x0028    +0x0028    +0x0028    } | .asyncRequestBlock
                                                                                 
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                  
        //                                                                       
        _m03 struct nt::guid_t                 passthrough_trace_activity;         //{ +0x0008    +0x0008    +0x0008    } | .passthroughTraceActivity
        _m04 struct nt::guid_t                 call_id;                            //{ +0x0018    +0x0018    +0x0018    } | .callId
        _m05 uint32_t                          unique_p_touched_asta_array;        //{ +0x0058    +0x0058    +0x0058    } | .unique_pTouchedAstaArray
        _m06 uint32_t                          unique_container_passthrough_data;  //{ +0x005c    +0x005c    +0x005c    } | .unique_containerPassthroughData
                                                                                 
        // Windows 10 v1607                                                      
        //                                                                       
        _m07 uint32_t                          unique;                             //{ +0x003c    } | .unique
                                                                                 
        SDK_MAGIC_PROPERTIES( "WireLocalThisPart1.$", 0x60, true, 0xf3a032406f39a6f3 );                                  
        SDK_DYNAMIC_SIZE( wire_local_this_part1_t );                                  
    };                                                                           
};
#include "magic/wire_local_this_part1_t.end.hpp"
