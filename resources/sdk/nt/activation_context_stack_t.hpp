#pragma once
#include <sdkgen/support_library.hpp>

namespace rtl { struct activation_context_stack_frame_t; }

#include "magic/activation_context_stack_t.start.hpp"
namespace nt
{
    // [struct _ACTIVATION_CONTEXT_STACK]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct activation_context_stack_t                                                  
    {                                                                                  
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                            
        //                                                                             
        _m00 struct rtl::activation_context_stack_frame_t* active_frame;                 //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .ActiveFrame
        _m01 nt::list_entry_t                              frame_list_cache;             //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .FrameListCache
        _m02 uint32_t                                      flags;                        //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .Flags
        _m03 uint32_t                                      next_cookie_sequence_number;  //{ +0x001c    +0x001c    +0x001c    +0x001c    +0x001c    } | .NextCookieSequenceNumber
        _m04 uint32_t                                      stack_id;                     //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | .StackId
                                                                                       
        SDK_NONVOL_PROPERTIES( "_ACTIVATION_CONTEXT_STACK.$", 0x28, true, 0x5b7346b6b3aa361c );                            
        SDK_FIXED_SIZE( activation_context_stack_t, 0x28 );                            
    };                                                                                 
};
#include "magic/activation_context_stack_t.end.hpp"
SDK_VERIFY( struct nt::activation_context_stack_t, 0x28 );
