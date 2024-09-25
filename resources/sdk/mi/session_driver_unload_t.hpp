#pragma once
#include <sdkgen/support_library.hpp>

namespace nt { struct driver_object_t; }

#include "magic/session_driver_unload_t.start.hpp"
namespace mi
{
    // [struct _MI_SESSION_DRIVER_UNLOAD]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct session_driver_unload_t      
    {                                   
        using function_t = sdk::function<void(struct nt::driver_object_t*)>*;               
                                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                              
        _m00 function_t  function;        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Function
        _m01 uint64_t    function_value;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .FunctionValue
                                        
        SDK_MAGIC_PROPERTIES( "_MI_SESSION_DRIVER_UNLOAD.$", 0x8, true, 0x8d43231273ebabd5 );               
        SDK_FIXED_SIZE( session_driver_unload_t, 0x8 );               
    };                                  
};
#include "magic/session_driver_unload_t.end.hpp"
SDK_VERIFY( struct mi::session_driver_unload_t, 0x8 );
