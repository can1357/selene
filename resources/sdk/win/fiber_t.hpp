#pragma once
#include <sdkgen/support_library.hpp>

namespace nt { struct activation_context_stack_t;      }
namespace nt { struct exception_registration_record_t; }

#include "magic/fiber_t.start.hpp"
namespace win
{
    struct wx86tib_t;

    // [struct _FIBER]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct fiber_t                                                                        
    {                                                                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                 
        //                                                                                
        _m00 void*                                       fiber_data;                        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .FiberData
        _m01 struct nt::exception_registration_record_t* exception_list;                    //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ExceptionList
        _m02 void*                                       stack_base;                        //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .StackBase
        _m03 void*                                       stack_limit;                       //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .StackLimit
        _m04 void*                                       deallocation_stack;                //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .DeallocationStack
        _m05 nt::context                                 fiber_context;                     //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .FiberContext
        _m06 struct win::wx86tib_t*                      wx86_tib;                          //{ +0x0500    +0x0500    +0x0500    +0x0500    } | .Wx86Tib
        _m07 struct nt::activation_context_stack_t*      activation_context_stack_pointer;  //{ +0x0508    +0x0508    +0x0508    +0x0508    } | .ActivationContextStackPointer
        _m08 void*                                       fls_data;                          //{ +0x0510    +0x0510    +0x0510    +0x0510    } | .FlsData
        _m09 uint32_t                                    guaranteed_stack_bytes;            //{ +0x0518    +0x0518    +0x0518    +0x0518    } | .GuaranteedStackBytes
        _m10 uint16_t                                    teb_flags;                         //{ +0x051c    +0x051c    +0x051c    +0x051c    } | .TebFlags
        _m11 uint64_t                                    fiber_cookie;                      //{ +0x0520    +0x0520    +0x0520    +0x0520    } | .FiberCookie
                                                                                          
        SDK_MAGIC_PROPERTIES( "_FIBER.$", 0x530, true, 0xf08e5f87ef898c30 );                                 
        SDK_FIXED_SIZE( fiber_t, 0x530 );                                                 
    };                                                                                    
};
#include "magic/fiber_t.end.hpp"
SDK_VERIFY( struct win::fiber_t, 0x530 );
