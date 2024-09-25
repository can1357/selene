#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"

#include "magic/midl_xmit_defs_0001_t.start.hpp"
namespace win
{
    // [struct __MIDL_XmitDefs_0001]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct midl_xmit_defs_0001_t                                 
    {                                                            
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                  
        //                                                       
        _m00 struct nt::guid_t async_operation_id;                 //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .asyncOperationId
        _m01 uint64_t          oxid_client_process_na;             //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .oxidClientProcessNA
        _m02 struct nt::guid_t original_client_logical_thread_id;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .originalClientLogicalThreadId
        _m03 uint64_t          u_client_causality_trace_id;        //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .uClientCausalityTraceId
                                                                 
        SDK_MAGIC_PROPERTIES( "__MIDL_XmitDefs_0001.$", 0x30, true, 0x76f4349186576d0d );                                  
        SDK_FIXED_SIZE( midl_xmit_defs_0001_t, 0x30 );                                  
    };                                                           
};
#include "magic/midl_xmit_defs_0001_t.end.hpp"
SDK_VERIFY( struct win::midl_xmit_defs_0001_t, 0x30 );
