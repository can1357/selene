#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/minidump_include_thread_callback_t.start.hpp"
namespace win
{
    // [struct _MINIDUMP_INCLUDE_THREAD_CALLBACK]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct minidump_include_thread_callback_t
    {                                        
        // Windows 10 v2004, Windows 11, Windows 10 v20H2          
        //                      
        _m00 uint32_t thread_id;               //{ +0x0000    +0x0000    +0x0000    } | .ThreadId
                                             
        SDK_MAGIC_PROPERTIES( "_MINIDUMP_INCLUDE_THREAD_CALLBACK.$", 0x4, true, 0x602c304df94901cd );          
        SDK_FIXED_SIZE( minidump_include_thread_callback_t, 0x4 );          
    };                                       
};
#include "magic/minidump_include_thread_callback_t.end.hpp"
SDK_VERIFY( struct win::minidump_include_thread_callback_t, 0x4 );
