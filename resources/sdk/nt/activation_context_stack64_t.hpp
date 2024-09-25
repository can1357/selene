#pragma once
#include <sdkgen/support_library.hpp>
#include "list_entry64_t.hpp"

#include "magic/activation_context_stack64_t.start.hpp"
namespace nt
{
    // [struct _ACTIVATION_CONTEXT_STACK64]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct activation_context_stack64_t                            
    {                                                              
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                            
        //                                                         
        _m00 uint64_t                  active_frame;                 //{ +0x0000    +0x0000    +0x0000    } | .ActiveFrame
        _m01 struct nt::list_entry64_t frame_list_cache;             //{ +0x0008    +0x0008    +0x0008    } | .FrameListCache
        _m02 uint32_t                  flags;                        //{ +0x0018    +0x0018    +0x0018    } | .Flags
        _m03 uint32_t                  next_cookie_sequence_number;  //{ +0x001c    +0x001c    +0x001c    } | .NextCookieSequenceNumber
        _m04 uint32_t                  stack_id;                     //{ +0x0020    +0x0020    +0x0020    } | .StackId
                                                                   
        SDK_MAGIC_PROPERTIES( "_ACTIVATION_CONTEXT_STACK64.$", 0x28, true, 0xab49213224b97f06 );                            
        SDK_FIXED_SIZE( activation_context_stack64_t, 0x28 );                            
    };                                                             
};
#include "magic/activation_context_stack64_t.end.hpp"
SDK_VERIFY( struct nt::activation_context_stack64_t, 0x28 );
