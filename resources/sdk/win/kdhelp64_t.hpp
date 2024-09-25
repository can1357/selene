#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/kdhelp64_t.start.hpp"
namespace win
{
    // [struct _KDHELP64]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct kdhelp64_t                                    
    {                                                    
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                   
        //                                               
        _m00 uint64_t thread;                              //{ +0x0000    +0x0000    +0x0000    } | .Thread
        _m01 uint32_t th_callback_stack;                   //{ +0x0008    +0x0008    +0x0008    } | .ThCallbackStack
        _m02 uint32_t th_callback_b_store;                 //{ +0x000c    +0x000c    +0x000c    } | .ThCallbackBStore
        _m03 uint32_t next_callback;                       //{ +0x0010    +0x0010    +0x0010    } | .NextCallback
        _m04 uint32_t frame_pointer;                       //{ +0x0014    +0x0014    +0x0014    } | .FramePointer
        _m05 uint64_t ki_call_user_mode;                   //{ +0x0018    +0x0018    +0x0018    } | .KiCallUserMode
        _m06 uint64_t ke_user_callback_dispatcher;         //{ +0x0020    +0x0020    +0x0020    } | .KeUserCallbackDispatcher
        _m07 uint64_t system_range_start;                  //{ +0x0028    +0x0028    +0x0028    } | .SystemRangeStart
        _m08 uint64_t ki_user_exception_dispatcher;        //{ +0x0030    +0x0030    +0x0030    } | .KiUserExceptionDispatcher
        _m09 uint64_t stack_base;                          //{ +0x0038    +0x0038    +0x0038    } | .StackBase
        _m10 uint64_t stack_limit;                         //{ +0x0040    +0x0040    +0x0040    } | .StackLimit
        _m11 uint32_t build_version;                       //{ +0x0048    +0x0048    +0x0048    } | .BuildVersion
        _m12 uint32_t retpoline_stub_function_table_size;  //{ +0x004c    +0x004c    +0x004c    } | .RetpolineStubFunctionTableSize
        _m13 uint64_t retpoline_stub_function_table;       //{ +0x0050    +0x0050    +0x0050    } | .RetpolineStubFunctionTable
        _m14 uint32_t retpoline_stub_offset;               //{ +0x0058    +0x0058    +0x0058    } | .RetpolineStubOffset
        _m15 uint32_t retpoline_stub_size;                 //{ +0x005c    +0x005c    +0x005c    } | .RetpolineStubSize
                                                         
        SDK_MAGIC_PROPERTIES( "_KDHELP64.$", 0x70, true, 0x61e5dafb7e77919d );                                   
        SDK_FIXED_SIZE( kdhelp64_t, 0x70 );                                   
    };                                                   
};
#include "magic/kdhelp64_t.end.hpp"
SDK_VERIFY( struct win::kdhelp64_t, 0x70 );
