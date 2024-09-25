#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"
#include "ace_header_t.hpp"

#include "magic/system_alarm_object_ace_t.start.hpp"
namespace win
{
    // [struct _SYSTEM_ALARM_OBJECT_ACE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct system_alarm_object_ace_t                        
    {                                                       
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                                  
        _m00 struct win::ace_header_t header;                 //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m01 uint32_t                 mask;                   //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Mask
        _m02 uint32_t                 flags;                  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Flags
        _m03 struct nt::guid_t        object_type;            //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .ObjectType
        _m04 struct nt::guid_t        inherited_object_type;  //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .InheritedObjectType
        _m05 uint32_t                 sid_start;              //{ +0x002c    +0x002c    +0x002c    +0x002c    } | .SidStart
                                                            
        SDK_MAGIC_PROPERTIES( "_SYSTEM_ALARM_OBJECT_ACE.$", 0x30, true, 0xd4128a0d8f0b5fa5 );                      
        SDK_FIXED_SIZE( system_alarm_object_ace_t, 0x30 );                      
    };                                                      
};
#include "magic/system_alarm_object_ace_t.end.hpp"
SDK_VERIFY( struct win::system_alarm_object_ace_t, 0x30 );
