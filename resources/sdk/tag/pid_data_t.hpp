#pragma once
#include <sdkgen/support_library.hpp>

namespace win { class c_object_context_t; }
namespace win { struct i_unknown_t;       }

#include "magic/pid_data_t.start.hpp"
namespace tag
{
    // [struct tagPIDData]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct pid_data_t                                    
    {                                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                                               
        _m00 struct win::i_unknown_t*       p_server;      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .pServer
        _m01 class win::c_object_context_t* p_server_ctx;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pServerCtx
                                                         
        SDK_MAGIC_PROPERTIES( "tagPIDData.$", 0x10, true, 0x80288999013becda );             
        SDK_FIXED_SIZE( pid_data_t, 0x10 );              
    };                                                   
};
#include "magic/pid_data_t.end.hpp"
SDK_VERIFY( struct tag::pid_data_t, 0x10 );
