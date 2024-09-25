#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/thread_name_information_t.start.hpp"
namespace win
{
    // [struct _THREAD_NAME_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct thread_name_information_t      
    {                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                                
        _m00 nt::unicode_view thread_name;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ThreadName
                                          
        SDK_MAGIC_PROPERTIES( "_THREAD_NAME_INFORMATION.$", 0x10, true, 0xbe86856665d456e2 );            
        SDK_FIXED_SIZE( thread_name_information_t, 0x10 );            
    };                                    
};
#include "magic/thread_name_information_t.end.hpp"
SDK_VERIFY( struct win::thread_name_information_t, 0x10 );
