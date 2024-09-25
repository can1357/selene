#pragma once
#include <sdkgen/support_library.hpp>
#include "flags_t.hpp"
#include "../rpc/message_t.hpp"
#include "ndr_proc_context_t.hpp"
#include "midl_stub_message_t.hpp"

namespace rpc { struct async_state_t; }

#include "magic/ndr_async_message_t.start.hpp"
namespace win
{
    // [struct _NDR_ASYNC_MESSAGE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ndr_async_message_t                              
    {                                                       
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                                                  
        _m00 int32_t                         version;         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Version
        _m01 int32_t                         signature;       //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Signature
        _m02 struct rpc::async_state_t*      async_handle;    //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .AsyncHandle
        _m03 struct win::flags_t             flags;           //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Flags
        _m04 uint16_t                        stub_phase;      //{ +0x0012    +0x0012    +0x0012    +0x0012    } | .StubPhase
        _m05 uint32_t                        ref_count;       //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .RefCount
        _m06 uint32_t                        error_code;      //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .ErrorCode
        _m07 struct rpc::message_t           rpc_msg;         //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .RpcMsg
        _m08 struct win::midl_stub_message_t stub_msg;        //{ +0x0070    +0x0070    +0x0070    +0x0070    } | .StubMsg
        _m09 uint32_t*                       pdw_stub_phase;  //{ +0x0200    +0x0200    +0x0200    +0x0200    } | .pdwStubPhase
        _m10 struct win::ndr_proc_context_t  proc_context;    //{ +0x0208    +0x0208    +0x0208    +0x0208    } | .ProcContext
        _m11 sdk::array<uint8_t, 16>         async_guard;     //{ +0x0528    +0x0528    +0x0528    +0x0528    } | .AsyncGuard
                                                            
        SDK_MAGIC_PROPERTIES( "_NDR_ASYNC_MESSAGE.$", 0x538, true, 0x98a5a94513585d55 );               
        SDK_FIXED_SIZE( ndr_async_message_t, 0x538 );               
    };                                                      
};
#include "magic/ndr_async_message_t.end.hpp"
SDK_VERIFY( struct win::ndr_async_message_t, 0x538 );
