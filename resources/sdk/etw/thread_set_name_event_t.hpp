#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/thread_set_name_event_t.start.hpp"
namespace etw
{
    // [struct _ETW_THREAD_SET_NAME_EVENT]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct thread_set_name_event_t              
    {                                           
        // Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                                      
        _m00 uint32_t               process_id;   //{ +0x0000    +0x0000    +0x0000    } | .ProcessId
        _m01 uint32_t               thread_id;    //{ +0x0004    +0x0004    +0x0004    } | .ThreadId
        _m02 sdk::array<wchar_t, 1> thread_name;  //{ +0x0008    +0x0008    +0x0008    } | .ThreadName
                                                
        SDK_MAGIC_PROPERTIES( "_ETW_THREAD_SET_NAME_EVENT.$", 0xc, true, 0xf8090be82c3cc93b );            
        SDK_FIXED_SIZE( thread_set_name_event_t, 0xc );            
    };                                          
};
#include "magic/thread_set_name_event_t.end.hpp"
SDK_VERIFY( struct etw::thread_set_name_event_t, 0xc );
