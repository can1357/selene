#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/thread_teb_information_t.start.hpp"
namespace win
{
    // [struct _THREAD_TEB_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct thread_teb_information_t   
    {                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                            
        _m00 void*    teb_information;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .TebInformation
        _m01 uint32_t teb_offset;       //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .TebOffset
        _m02 uint32_t bytes_to_read;    //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .BytesToRead
                                      
        SDK_MAGIC_PROPERTIES( "_THREAD_TEB_INFORMATION.$", 0x10, true, 0xf1627a25b55d0963 );                
        SDK_FIXED_SIZE( thread_teb_information_t, 0x10 );                
    };                                
};
#include "magic/thread_teb_information_t.end.hpp"
SDK_VERIFY( struct win::thread_teb_information_t, 0x10 );
