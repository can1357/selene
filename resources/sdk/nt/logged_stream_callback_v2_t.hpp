#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/logged_stream_callback_v2_t.start.hpp"
namespace nt
{
    struct log_handle_context_t;

    // [struct _LOGGED_STREAM_CALLBACK_V2]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct logged_stream_callback_v2_t                           
    {                                                            
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                                                       
        _m00 struct nt::log_handle_context_t* log_handle_context;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .LogHandleContext
                                                                 
        SDK_MAGIC_PROPERTIES( "_LOGGED_STREAM_CALLBACK_V2.$", 0x8, true, 0xf64b07bc1fbabad8 );                   
        SDK_FIXED_SIZE( logged_stream_callback_v2_t, 0x8 );                   
    };                                                           
};
#include "magic/logged_stream_callback_v2_t.end.hpp"
SDK_VERIFY( struct nt::logged_stream_callback_v2_t, 0x8 );
