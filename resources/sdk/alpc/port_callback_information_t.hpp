#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/port_callback_information_t.start.hpp"
namespace alpc
{
    // [struct _ALPC_PORT_CALLBACK_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct port_callback_information_t
    {                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                         
        _m00 void* callback_object;     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .CallbackObject
        _m01 void* context;             //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Context
                                      
        SDK_MAGIC_PROPERTIES( "_ALPC_PORT_CALLBACK_INFORMATION.$", 0x10, true, 0xf8800293231bff8 );                
        SDK_FIXED_SIZE( port_callback_information_t, 0x10 );                
    };                                
};
#include "magic/port_callback_information_t.end.hpp"
SDK_VERIFY( struct alpc::port_callback_information_t, 0x10 );
