#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct _PROC_THREAD_ATTRIBUTE_LIST]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct proc_thread_attribute_list_t
    {                                  
                                       
        SDK_MAGIC_PROPERTIES( "_PROC_THREAD_ATTRIBUTE_LIST.$", 0x0, true, 0x39807b9849549420 );
        SDK_FIXED_SIZE( proc_thread_attribute_list_t, 0x0 );
    };                                 
};
SDK_VERIFY( struct win::proc_thread_attribute_list_t, 0x0 );
