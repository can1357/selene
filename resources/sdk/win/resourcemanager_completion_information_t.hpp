#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/resourcemanager_completion_information_t.start.hpp"
namespace win
{
    // [struct _RESOURCEMANAGER_COMPLETION_INFORMATION]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct resourcemanager_completion_information_t
    {                                              
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                          
        //                                      
        _m00 void*    io_completion_port_handle;     //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .IoCompletionPortHandle
        _m01 uint64_t completion_key;                //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .CompletionKey
                                                   
        SDK_NONVOL_PROPERTIES( "_RESOURCEMANAGER_COMPLETION_INFORMATION.$", 0x10, true, 0x7ec1623fbd2594d2 );                          
        SDK_FIXED_SIZE( resourcemanager_completion_information_t, 0x10 );                          
    };                                             
};
#include "magic/resourcemanager_completion_information_t.end.hpp"
SDK_VERIFY( struct win::resourcemanager_completion_information_t, 0x10 );
