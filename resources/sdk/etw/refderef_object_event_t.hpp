#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/refderef_object_event_t.start.hpp"
namespace etw
{
    // [struct _ETW_REFDEREF_OBJECT_EVENT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct refderef_object_event_t
    {                             
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2       
        //                   
        _m00 void*    object;       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Object
        _m01 uint32_t tag;          //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Tag
        _m02 uint32_t count;        //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .Count
                                  
        SDK_MAGIC_PROPERTIES( "_ETW_REFDEREF_OBJECT_EVENT.$", 0x10, true, 0xb386beebf5f3d1b6 );       
        SDK_FIXED_SIZE( refderef_object_event_t, 0x10 );       
    };                            
};
#include "magic/refderef_object_event_t.end.hpp"
SDK_VERIFY( struct etw::refderef_object_event_t, 0x10 );
