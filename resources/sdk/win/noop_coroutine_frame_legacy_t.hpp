#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/noop_coroutine_frame_legacy_t.start.hpp"
namespace win
{
    // [struct __noop_coroutine_frame_legacy]
    // => Windows 11
    //
    struct noop_coroutine_frame_legacy_t
    {                                   
        // Windows 11       
        //                  
        _m00 void*   resume;              //{ +0x0000    } | .resume
        _m01 int32_t flag;                //{ +0x0008    } | .flag
        _m02 int32_t index;               //{ +0x000c    } | .index
                                        
        SDK_MAGIC_PROPERTIES( "__noop_coroutine_frame_legacy.$", 0x0, false, 0xa32c514260c69215 );       
        SDK_FIXED_SIZE( noop_coroutine_frame_legacy_t, 0x10 );       
    };                                  
};
#include "magic/noop_coroutine_frame_legacy_t.end.hpp"
SDK_VERIFY( struct win::noop_coroutine_frame_legacy_t, 0x10 );
