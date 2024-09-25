#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/async_io_completion_context_t.start.hpp"
namespace fltmgr
{
    struct flt_callback_data_t;

    // [struct _ASYNC_IO_COMPLETION_CONTEXT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct async_io_completion_context_t    
    {                                       
        using user_callback_t = sdk::function<void(struct fltmgr::flt_callback_data_t*, void*)>*;              
                                            
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                                  
        _m00 user_callback_t  user_callback;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .UserCallback
        _m01 void*            user_context;   //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .UserContext
                                            
        SDK_MAGIC_PROPERTIES( "_ASYNC_IO_COMPLETION_CONTEXT.$", 0x10, true, 0x5205b16e948059a2 );              
        SDK_FIXED_SIZE( async_io_completion_context_t, 0x10 );              
    };                                      
};
#include "magic/async_io_completion_context_t.end.hpp"
SDK_VERIFY( struct fltmgr::async_io_completion_context_t, 0x10 );
