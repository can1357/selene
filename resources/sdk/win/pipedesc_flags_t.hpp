#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/pipedesc_flags_t.start.hpp"
namespace win
{
    // [struct _PIPEDESC_FLAGS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct pipedesc_flags_t                   
    {                                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                         
        //                                    
        _m00 uint1_t aux_out_buffer_allocated;  //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .AuxOutBufferAllocated
        _m01 uint1_t no_buffer_call_pending;    //{ +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  } | .NoBufferCallPending
        _m02 uint1_t no_more_buffers_to_read;   //{ +0x0000@3  +0x0000@3  +0x0000@3  +0x0000@3  } | .NoMoreBuffersToRead
        _m03 uint1_t last_pipe_send;            //{ +0x0000@4  +0x0000@4  +0x0000@4  +0x0000@4  } | .LastPipeSend
        _m04 uint1_t in_pipe_push;              //{ +0x0000@5  +0x0000@5  +0x0000@5  +0x0000@5  } | .InPipePush
                                              
        SDK_MAGIC_PROPERTIES( "_PIPEDESC_FLAGS.$", 0x2, true, 0xb0c733d19a81430b );                         
        SDK_FIXED_SIZE( pipedesc_flags_t, 0x2 );                         
    };                                        
};
#include "magic/pipedesc_flags_t.end.hpp"
SDK_VERIFY( struct win::pipedesc_flags_t, 0x2 );
