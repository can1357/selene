#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/createdelete_object_event_t.start.hpp"
namespace etw
{
    // [struct _ETW_CREATEDELETE_OBJECT_EVENT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct createdelete_object_event_t
    {                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                        
        _m00 void*    object;           //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Object
        _m01 uint16_t object_type;      //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ObjectType
                                      
        SDK_MAGIC_PROPERTIES( "_ETW_CREATEDELETE_OBJECT_EVENT.$", 0x10, true, 0x21edc21b715d6921 );            
        SDK_FIXED_SIZE( createdelete_object_event_t, 0x10 );            
    };                                
};
#include "magic/createdelete_object_event_t.end.hpp"
SDK_VERIFY( struct etw::createdelete_object_event_t, 0x10 );
