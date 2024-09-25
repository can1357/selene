#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/noop_coroutine_frame_standard_t.start.hpp"
namespace win
{
    // [struct __noop_coroutine_frame_standard]
    // => Windows 11
    //
    struct noop_coroutine_frame_standard_t
    {                                     
        // Windows 11        
        //                 
        _m00 void* resume;                  //{ +0x0000    } | .resume
        _m01 void* destroy;                 //{ +0x0008    } | .destroy
        _m02 char  promise;                 //{ +0x0010    } | .promise
                                          
        SDK_MAGIC_PROPERTIES( "__noop_coroutine_frame_standard.$", 0x0, false, 0x666018a56cc78d01 );        
        SDK_FIXED_SIZE( noop_coroutine_frame_standard_t, 0x18 );        
    };                                    
};
#include "magic/noop_coroutine_frame_standard_t.end.hpp"
SDK_VERIFY( struct win::noop_coroutine_frame_standard_t, 0x18 );
