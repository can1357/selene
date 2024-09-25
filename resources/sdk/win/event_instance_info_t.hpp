#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/event_instance_info_t.start.hpp"
namespace win
{
    // [struct EVENT_INSTANCE_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct event_instance_info_t  
    {                             
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                        
        _m00 void*    reg_handle;   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .RegHandle
        _m01 uint32_t instance_id;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .InstanceId
                                  
        SDK_MAGIC_PROPERTIES( "EVENT_INSTANCE_INFO.$", 0x10, true, 0x6388119f9e3dd084 );            
        SDK_FIXED_SIZE( event_instance_info_t, 0x10 );            
    };                            
};
#include "magic/event_instance_info_t.end.hpp"
SDK_VERIFY( struct win::event_instance_info_t, 0x10 );
