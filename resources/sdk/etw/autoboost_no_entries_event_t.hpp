#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/autoboost_no_entries_event_t.start.hpp"
namespace etw
{
    // [struct _ETW_AUTOBOOST_NO_ENTRIES_EVENT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct autoboost_no_entries_event_t
    {                                  
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2          
        //                      
        _m00 void*    lock;              //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Lock
        _m01 uint32_t thread_id;         //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ThreadId
                                       
        SDK_MAGIC_PROPERTIES( "_ETW_AUTOBOOST_NO_ENTRIES_EVENT.$", 0x10, true, 0x5b49a381f27af8bf );          
        SDK_FIXED_SIZE( autoboost_no_entries_event_t, 0x10 );          
    };                                 
};
#include "magic/autoboost_no_entries_event_t.end.hpp"
SDK_VERIFY( struct etw::autoboost_no_entries_event_t, 0x10 );
