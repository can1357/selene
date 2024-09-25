#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/c_server_channel_t.start.hpp"
namespace win
{
    class c_object_context_t;

    // [class CServerChannel]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class c_server_channel_t                                     
    {                                                            
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                                                       
        _m00 class win::c_object_context_t const* disconnect_ctx;  //{ +0x0040    +0x0050    +0x0050    +0x0050    } | ._disconnectCtx
                                                                 
        SDK_MAGIC_PROPERTIES( "CServerChannel.$", 0x58, true, 0xf88ead7fe320da66 );               
        SDK_DYNAMIC_SIZE( c_server_channel_t );                  
    };                                                           
};
#include "magic/c_server_channel_t.end.hpp"
