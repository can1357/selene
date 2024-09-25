#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/object_type_event_t.start.hpp"
namespace etw
{
    // [struct _ETW_OBJECT_TYPE_EVENT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct object_type_event_t                  
    {                                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                                      
        _m00 uint16_t               object_type;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ObjectType
        _m01 sdk::array<wchar_t, 1> name;         //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Name
                                                
        SDK_MAGIC_PROPERTIES( "_ETW_OBJECT_TYPE_EVENT.$", 0x6, true, 0x7ed6b0fdb7d6b80a );            
        SDK_FIXED_SIZE( object_type_event_t, 0x6 );            
    };                                          
};
#include "magic/object_type_event_t.end.hpp"
SDK_VERIFY( struct etw::object_type_event_t, 0x6 );
