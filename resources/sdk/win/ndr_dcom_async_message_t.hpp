#pragma once
#include <sdkgen/support_library.hpp>
#include "flags_t.hpp"
#include "syntax_type_t.hpp"
#include "../rpc/message_t.hpp"
#include "ndr_proc_context_t.hpp"
#include "midl_stub_message_t.hpp"

#include "magic/ndr_dcom_async_message_t.start.hpp"
namespace win
{
    // [struct _NDR_DCOM_ASYNC_MESSAGE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ndr_dcom_async_message_t                            
    {                                                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                                                     
        _m00 int32_t                         version;            //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Version
        _m01 int32_t                         signature;          //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Signature
        _m02 enum win::syntax_type_t         syntax_type;        //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .SyntaxType
        _m03 int32_t                         n_begin_params;     //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .nBeginParams
        _m04 void*                           begin_params;       //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .BeginParams
        _m05 int32_t                         n_finish_params;    //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .nFinishParams
        _m06 void*                           finish_params;      //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .FinishParams
        _m07 uint8_t*                        begin_stack;        //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .BeginStack
        _m08 uint8_t*                        finish_stack;       //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .FinishStack
        _m09 uint32_t                        begin_stack_size;   //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .BeginStackSize
        _m10 uint32_t                        finish_stack_size;  //{ +0x003c    +0x003c    +0x003c    +0x003c    } | .FinishStackSize
        _m11 struct win::flags_t             flags;              //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .Flags
        _m12 uint32_t                        ref_count;          //{ +0x0044    +0x0044    +0x0044    +0x0044    } | .RefCount
        _m13 void*                           p_this;             //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .pThis
        _m14 void*                           p_async_pb;         //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .pAsyncPB
        _m15 void*                           p_async_sb;         //{ +0x0058    +0x0058    +0x0058    +0x0058    } | .pAsyncSB
        _m16 uint32_t*                       pdw_stub_phase;     //{ +0x0060    +0x0060    +0x0060    +0x0060    } | .pdwStubPhase
        _m17 uint16_t                        stub_phase;         //{ +0x0068    +0x0068    +0x0068    +0x0068    } | .StubPhase
        _m18 uint32_t                        error_code;         //{ +0x006c    +0x006c    +0x006c    +0x006c    } | .ErrorCode
        _m19 struct rpc::message_t           rpc_msg;            //{ +0x0070    +0x0070    +0x0070    +0x0070    } | .RpcMsg
        _m20 struct win::midl_stub_message_t stub_msg;           //{ +0x00c0    +0x00c0    +0x00c0    +0x00c0    } | .StubMsg
        _m21 struct win::ndr_proc_context_t  proc_context;       //{ +0x0250    +0x0250    +0x0250    +0x0250    } | .ProcContext
        _m22 uint8_t*                        p_arg;              //{ +0x0570    +0x0570    +0x0570    +0x0570    } | .pArg
        _m23 uint64_t                        app_stack;          //{ +0x0578    +0x0578    +0x0578    +0x0578    } | .AppStack
                                                               
        SDK_MAGIC_PROPERTIES( "_NDR_DCOM_ASYNC_MESSAGE.$", 0x580, true, 0xcb9aa2c44e5fb0de );                  
        SDK_FIXED_SIZE( ndr_dcom_async_message_t, 0x580 );                  
    };                                                         
};
#include "magic/ndr_dcom_async_message_t.end.hpp"
SDK_VERIFY( struct win::ndr_dcom_async_message_t, 0x580 );
