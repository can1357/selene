#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/logged_stream_callback_v1_t.start.hpp"
namespace nt
{
    // [struct _LOGGED_STREAM_CALLBACK_V1]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct logged_stream_callback_v1_t                                 
    {                                                                  
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                                             
        _m00 void*                                log_handle;            //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .LogHandle
        _m01 sdk::function<void(void*, int64_t)>* flush_to_lsn_routine;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .FlushToLsnRoutine
                                                                       
        SDK_MAGIC_PROPERTIES( "_LOGGED_STREAM_CALLBACK_V1.$", 0x10, true, 0xe00f333d0f6b2cc1 );                     
        SDK_FIXED_SIZE( logged_stream_callback_v1_t, 0x10 );                     
    };                                                                 
};
#include "magic/logged_stream_callback_v1_t.end.hpp"
SDK_VERIFY( struct nt::logged_stream_callback_v1_t, 0x10 );
