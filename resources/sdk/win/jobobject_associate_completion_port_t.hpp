#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/jobobject_associate_completion_port_t.start.hpp"
namespace win
{
    // [struct _JOBOBJECT_ASSOCIATE_COMPLETION_PORT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct jobobject_associate_completion_port_t
    {                                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                         
        _m00 void* completion_key;                //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .CompletionKey
        _m01 void* completion_port;               //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .CompletionPort
                                                
        SDK_MAGIC_PROPERTIES( "_JOBOBJECT_ASSOCIATE_COMPLETION_PORT.$", 0x10, true, 0x125ac1509eb6f642 );                
        SDK_FIXED_SIZE( jobobject_associate_completion_port_t, 0x10 );                
    };                                          
};
#include "magic/jobobject_associate_completion_port_t.end.hpp"
SDK_VERIFY( struct win::jobobject_associate_completion_port_t, 0x10 );
