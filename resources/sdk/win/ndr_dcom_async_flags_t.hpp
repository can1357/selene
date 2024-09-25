#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/ndr_dcom_async_flags_t.start.hpp"
namespace win
{
    // [struct _NdrDcomAsyncFlags]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ndr_dcom_async_flags_t     
    {                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                            
        _m00 uint1_t async_msg_set;     //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .AsyncMsgSet
        _m01 uint1_t begin_started;     //{ +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  } | .BeginStarted
        _m02 uint1_t begin_done;        //{ +0x0000@2  +0x0000@2  +0x0000@2  +0x0000@2  } | .BeginDone
        _m03 uint1_t finish_started;    //{ +0x0000@3  +0x0000@3  +0x0000@3  +0x0000@3  } | .FinishStarted
        _m04 uint1_t finish_done;       //{ +0x0000@4  +0x0000@4  +0x0000@4  +0x0000@4  } | .FinishDone
        _m05 uint1_t begin_error;       //{ +0x0000@5  +0x0000@5  +0x0000@5  +0x0000@5  } | .BeginError
        _m06 uint1_t finish_error;      //{ +0x0000@6  +0x0000@6  +0x0000@6  +0x0000@6  } | .FinishError
        _m07 uint1_t invoke_forwarded;  //{ +0x0000@7  +0x0000@7  +0x0000@7  +0x0000@7  } | .InvokeForwarded
                                      
        SDK_MAGIC_PROPERTIES( "_NdrDcomAsyncFlags.$", 0x4, true, 0xb1698a72a1201aa6 );                 
        SDK_FIXED_SIZE( ndr_dcom_async_flags_t, 0x4 );                 
    };                                
};
#include "magic/ndr_dcom_async_flags_t.end.hpp"
SDK_VERIFY( struct win::ndr_dcom_async_flags_t, 0x4 );
