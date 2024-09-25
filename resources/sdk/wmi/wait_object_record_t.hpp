#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/wait_object_record_t.start.hpp"
namespace wmi
{
    // [struct _WMI_WAIT_OBJECT_RECORD]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct wait_object_record_t  
    {                            
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                       
        _m00 void*   object;       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Object
        _m01 uint8_t object_type;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ObjectType
                                 
        SDK_MAGIC_PROPERTIES( "_WMI_WAIT_OBJECT_RECORD.$", 0x10, true, 0x2f9fe1bffafcc818 );            
        SDK_FIXED_SIZE( wait_object_record_t, 0x10 );            
    };                           
};
#include "magic/wait_object_record_t.end.hpp"
SDK_VERIFY( struct wmi::wait_object_record_t, 0x10 );
