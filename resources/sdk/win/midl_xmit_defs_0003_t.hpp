#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"
#include "midl_xmit_defs_0001_t.hpp"

#include "magic/midl_xmit_defs_0003_t.start.hpp"
namespace win
{
    struct containerthis_t;
    struct midl_xmit_defs_0002_t;

    // [struct __MIDL_XmitDefs_0003]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct midl_xmit_defs_0003_t                                           
    {                                                                      
        using p_touched_asta_array_t = sdk::variant<struct win::midl_xmit_defs_0002_t*, const struct win::midl_xmit_defs_0002_t*>;                           
                                                                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                           
        //                                                                 
        _m00 uint32_t                           dw_flags;                    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .dwFlags
        _m01 uint32_t                           dw_client_thread;            //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .dwClientThread
        _m02 struct win::midl_xmit_defs_0001_t  async_request_block;         //{ +0x0008    +0x0028    +0x0028    +0x0028    } | .asyncRequestBlock
        _m03 p_touched_asta_array_t             p_touched_asta_array;        //{ +0x0040    +0x0058    +0x0058    +0x0058    } | .pTouchedAstaArray
                                                                           
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                           
        //                                                                 
        _m04 struct nt::guid_t                  passthrough_trace_activity;  //{ +0x0008    +0x0008    +0x0008    } | .passthroughTraceActivity
        _m05 struct nt::guid_t                  call_id;                     //{ +0x0018    +0x0018    +0x0018    } | .callId
        _m06 const struct win::containerthis_t* container_passthrough_data;  //{ +0x0060    +0x0060    +0x0060    } | .containerPassthroughData
                                                                           
        SDK_MAGIC_PROPERTIES( "__MIDL_XmitDefs_0003.$", 0x68, true, 0xfa99f37e6fc063c0 );                           
        SDK_DYNAMIC_SIZE( midl_xmit_defs_0003_t );                           
    };                                                                     
};
#include "magic/midl_xmit_defs_0003_t.end.hpp"
