#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/minidump_thread_callback_t.start.hpp"
namespace win
{
    // [struct _MINIDUMP_THREAD_CALLBACK]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct minidump_thread_callback_t    
    {                                    
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                               
        _m00 uint32_t    thread_id;        //{ +0x0000    +0x0000    +0x0000    } | .ThreadId
        _m01 void*       thread_handle;    //{ +0x0004    +0x0004    +0x0004    } | .ThreadHandle
        _m02 nt::context context;          //{ +0x0010    +0x0010    +0x0010    } | .Context
        _m03 uint32_t    size_of_context;  //{ +0x04e0    +0x04e0    +0x04e0    } | .SizeOfContext
        _m04 uint64_t    stack_base;       //{ +0x04e4    +0x04e4    +0x04e4    } | .StackBase
        _m05 uint64_t    stack_end;        //{ +0x04ec    +0x04ec    +0x04ec    } | .StackEnd
                                         
        SDK_MAGIC_PROPERTIES( "_MINIDUMP_THREAD_CALLBACK.$", 0x500, true, 0x56895e635098feb6 );                
        SDK_FIXED_SIZE( minidump_thread_callback_t, 0x500 );                
    };                                   
};
#include "magic/minidump_thread_callback_t.end.hpp"
SDK_VERIFY( struct win::minidump_thread_callback_t, 0x500 );
