#pragma once
#include <sdkgen/support_library.hpp>
#include "system_thread_information_t.hpp"

#include "magic/system_extended_thread_information_t.start.hpp"
namespace win
{
    // [struct _SYSTEM_EXTENDED_THREAD_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct system_extended_thread_information_t                          
    {                                                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                                               
        _m00 struct win::system_thread_information_t thread_info;          //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ThreadInfo
        _m01 void*                                   stack_base;           //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .StackBase
        _m02 void*                                   stack_limit;          //{ +0x0058    +0x0058    +0x0058    +0x0058    } | .StackLimit
        _m03 void*                                   win32_start_address;  //{ +0x0060    +0x0060    +0x0060    +0x0060    } | .Win32StartAddress
        _m04 void*                                   teb_base;             //{ +0x0068    +0x0068    +0x0068    +0x0068    } | .TebBase
                                                                         
        SDK_MAGIC_PROPERTIES( "_SYSTEM_EXTENDED_THREAD_INFORMATION.$", 0x88, true, 0x41d68fb9f3bf4919 );                    
        SDK_FIXED_SIZE( system_extended_thread_information_t, 0x88 );                    
    };                                                                   
};
#include "magic/system_extended_thread_information_t.end.hpp"
SDK_VERIFY( struct win::system_extended_thread_information_t, 0x88 );
