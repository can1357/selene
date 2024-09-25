#pragma once
#include <sdkgen/support_library.hpp>
#include "list_entry32_t.hpp"

#include "magic/activation_context_stack32_t.start.hpp"
namespace nt
{
    // [struct _ACTIVATION_CONTEXT_STACK32]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct activation_context_stack32_t                            
    {                                                              
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                            
        //                                                         
        _m00 uint32_t                  active_frame;                 //{ +0x0000    +0x0000    +0x0000    } | .ActiveFrame
        _m01 struct nt::list_entry32_t frame_list_cache;             //{ +0x0004    +0x0004    +0x0004    } | .FrameListCache
        _m02 uint32_t                  flags;                        //{ +0x000c    +0x000c    +0x000c    } | .Flags
        _m03 uint32_t                  next_cookie_sequence_number;  //{ +0x0010    +0x0010    +0x0010    } | .NextCookieSequenceNumber
        _m04 uint32_t                  stack_id;                     //{ +0x0014    +0x0014    +0x0014    } | .StackId
                                                                   
        SDK_MAGIC_PROPERTIES( "_ACTIVATION_CONTEXT_STACK32.$", 0x18, true, 0x88e262ca47cc7d26 );                            
        SDK_FIXED_SIZE( activation_context_stack32_t, 0x18 );                            
    };                                                             
};
#include "magic/activation_context_stack32_t.end.hpp"
SDK_VERIFY( struct nt::activation_context_stack32_t, 0x18 );
