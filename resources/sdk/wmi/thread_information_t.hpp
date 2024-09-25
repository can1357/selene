#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/thread_information_t.start.hpp"
namespace wmi
{
    // [struct _WMI_THREAD_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct thread_information_t  
    {                            
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                       
        _m00 uint32_t process_id;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ProcessId
        _m01 uint32_t thread_id;   //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .ThreadId
                                 
        SDK_MAGIC_PROPERTIES( "_WMI_THREAD_INFORMATION.$", 0x8, true, 0xb0387419dce61196 );           
        SDK_FIXED_SIZE( thread_information_t, 0x8 );           
    };                           
};
#include "magic/thread_information_t.end.hpp"
SDK_VERIFY( struct wmi::thread_information_t, 0x8 );
