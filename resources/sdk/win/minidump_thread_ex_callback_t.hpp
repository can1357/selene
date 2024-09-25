#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/minidump_thread_ex_callback_t.start.hpp"
namespace win
{
    // [struct _MINIDUMP_THREAD_EX_CALLBACK]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct minidump_thread_ex_callback_t    
    {                                       
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                                  
        _m00 uint32_t    thread_id;           //{ +0x0000    +0x0000    +0x0000    } | .ThreadId
        _m01 void*       thread_handle;       //{ +0x0004    +0x0004    +0x0004    } | .ThreadHandle
        _m02 nt::context context;             //{ +0x0010    +0x0010    +0x0010    } | .Context
        _m03 uint32_t    size_of_context;     //{ +0x04e0    +0x04e0    +0x04e0    } | .SizeOfContext
        _m04 uint64_t    stack_base;          //{ +0x04e4    +0x04e4    +0x04e4    } | .StackBase
        _m05 uint64_t    stack_end;           //{ +0x04ec    +0x04ec    +0x04ec    } | .StackEnd
        _m06 uint64_t    backing_store_base;  //{ +0x04f4    +0x04f4    +0x04f4    } | .BackingStoreBase
        _m07 uint64_t    backing_store_end;   //{ +0x04fc    +0x04fc    +0x04fc    } | .BackingStoreEnd
                                            
        SDK_MAGIC_PROPERTIES( "_MINIDUMP_THREAD_EX_CALLBACK.$", 0x510, true, 0x248f0e03a148e733 );                   
        SDK_FIXED_SIZE( minidump_thread_ex_callback_t, 0x510 );                   
    };                                      
};
#include "magic/minidump_thread_ex_callback_t.end.hpp"
SDK_VERIFY( struct win::minidump_thread_ex_callback_t, 0x510 );
