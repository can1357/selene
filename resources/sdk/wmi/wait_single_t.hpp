#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/wait_single_t.start.hpp"
namespace wmi
{
    // [struct _WMI_WAIT_SINGLE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct wait_single_t          
    {                             
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                        
        _m00 uint32_t thread_id;    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ThreadId
        _m01 void*    object;       //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Object
        _m02 uint8_t  object_type;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .ObjectType
                                  
        SDK_MAGIC_PROPERTIES( "_WMI_WAIT_SINGLE.$", 0x18, true, 0x9daa10050ac3efa2 );            
        SDK_FIXED_SIZE( wait_single_t, 0x18 );            
    };                            
};
#include "magic/wait_single_t.end.hpp"
SDK_VERIFY( struct wmi::wait_single_t, 0x18 );
