#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"

#include "magic/midl_xmit_defs_0010_t.start.hpp"
namespace win
{
    struct midl_xmit_defs_0008_t;

    // [struct __MIDL_XmitDefs_0010]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct midl_xmit_defs_0010_t                                            
    {                                                                       
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                            
        //                                                                  
        _m00 uint32_t                           async_status;                 //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .asyncStatus
        _m01 uint64_t                           u_server_causality_trace_id;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .uServerCausalityTraceId
        _m02 struct win::midl_xmit_defs_0008_t* p_outcome_details;            //{ +0x0018    +0x0028    +0x0028    +0x0028    } | .pOutcomeDetails
                                                                            
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                            
        //                                                                  
        _m03 struct nt::guid_t                  completion_trace_activity;    //{ +0x0010    +0x0010    +0x0010    } | .completionTraceActivity
                                                                            
        SDK_MAGIC_PROPERTIES( "__MIDL_XmitDefs_0010.$", 0x30, true, 0xa94cb4cd795625d0 );                            
        SDK_DYNAMIC_SIZE( midl_xmit_defs_0010_t );                            
    };                                                                      
};
#include "magic/midl_xmit_defs_0010_t.end.hpp"
