#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/server_information_t.start.hpp"
namespace tag
{
    // [struct tagServerInformation]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct server_information_t           
    {                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                
        _m00 uint32_t dw_server_pid;        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .dwServerPid
        _m01 uint32_t dw_server_tid;        //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .dwServerTid
        _m02 uint64_t ui64_server_address;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ui64ServerAddress
                                          
        SDK_MAGIC_PROPERTIES( "tagServerInformation.$", 0x10, true, 0x6d920da80b09a925 );                    
        SDK_FIXED_SIZE( server_information_t, 0x10 );                    
    };                                    
};
#include "magic/server_information_t.end.hpp"
SDK_VERIFY( struct tag::server_information_t, 0x10 );
