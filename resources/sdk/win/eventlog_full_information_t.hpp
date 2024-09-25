#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/eventlog_full_information_t.start.hpp"
namespace win
{
    // [struct _EVENTLOG_FULL_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct eventlog_full_information_t
    {                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2        
        //                    
        _m00 uint32_t dw_full;          //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .dwFull
                                      
        SDK_MAGIC_PROPERTIES( "_EVENTLOG_FULL_INFORMATION.$", 0x4, true, 0x94cf8ab37c59199a );        
        SDK_FIXED_SIZE( eventlog_full_information_t, 0x4 );        
    };                                
};
#include "magic/eventlog_full_information_t.end.hpp"
SDK_VERIFY( struct win::eventlog_full_information_t, 0x4 );
