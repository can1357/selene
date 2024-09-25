#pragma once
#include <sdkgen/support_library.hpp>
#include "ndr_dcom_async_flags_t.hpp"

#include "magic/ndr_dcom_async_call_state_t.start.hpp"
namespace win
{
    // [struct _NdrDcomAsyncCallState]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ndr_dcom_async_call_state_t                      
    {                                                       
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                                                  
        _m00 uint32_t                           signature;    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Signature
        _m01 uint32_t                           lock;         //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Lock
        _m02 void*                              p_async_msg;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pAsyncMsg
        _m03 struct win::ndr_dcom_async_flags_t flags;        //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Flags
        _m04 sdk::hresult                       hr;           //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .Hr
                                                            
        SDK_MAGIC_PROPERTIES( "_NdrDcomAsyncCallState.$", 0x18, true, 0x8668dbfdaa6027a3 );            
        SDK_FIXED_SIZE( ndr_dcom_async_call_state_t, 0x18 );            
    };                                                      
};
#include "magic/ndr_dcom_async_call_state_t.end.hpp"
SDK_VERIFY( struct win::ndr_dcom_async_call_state_t, 0x18 );
