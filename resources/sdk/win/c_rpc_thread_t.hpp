#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/c_rpc_thread_t.start.hpp"
namespace win
{
    struct hinstance_t;
    class c_rpc_thread_t;

    // [class CRpcThread]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class c_rpc_thread_t                                  
    {                                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                                                
        _m00 void*                           h_wakeup;      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | ._hWakeup
        _m01 int32_t                         f_done;        //{ +0x0008    +0x0008    +0x0008    +0x0008    } | ._fDone
        _m02 sdk::function<uint32_t(void*)>* fn;            //{ +0x0010    +0x0010    +0x0010    +0x0010    } | ._fn
        _m03 void*                           param;         //{ +0x0018    +0x0018    +0x0018    +0x0018    } | ._param
        _m04 class win::c_rpc_thread_t*      p_next;        //{ +0x0020    +0x0020    +0x0020    +0x0020    } | ._pNext
        _m05 uint32_t                        dw_thread_id;  //{ +0x0028    +0x0028    +0x0028    +0x0028    } | ._dwThreadID
        _m06 struct win::hinstance_t*        h_inst_ole32;  //{ +0x0030    +0x0030    +0x0030    +0x0030    } | ._hInstOle32
                                                          
        SDK_MAGIC_PROPERTIES( "CRpcThread.$", 0x38, true, 0x4974f5e1e7098f6c );             
        SDK_FIXED_SIZE( c_rpc_thread_t, 0x38 );             
    };                                                    
};
#include "magic/c_rpc_thread_t.end.hpp"
SDK_VERIFY( class win::c_rpc_thread_t, 0x38 );
