#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/kalpc_direct_event_t.start.hpp"
namespace nt
{
    // [union _KALPC_DIRECT_EVENT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    union kalpc_direct_event_t          
    {                                   
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                              
        _m00 uint64_t value;              //{ +0x0000    +0x0000    +0x0000    } | .Value
        _m01 uint1_t  direct_type;        //{ +0x0000@0  +0x0000@0  +0x0000@0  } | .DirectType
        _m02 uint1_t  event_referenced;   //{ +0x0000@1  +0x0000@1  +0x0000@1  } | .EventReferenced
        _m03 uint62_t event_object_bits;  //{ +0x0000@2  +0x0000@2  +0x0000@2  } | .EventObjectBits
                                        
        // Windows 10 v1607                  
        //                              
        _m04 uint64_t event;              //{ +0x0000    } | .Event
        _m05 uint1_t  referenced;         //{ +0x0000@0  } | .Referenced
                                        
        SDK_MAGIC_PROPERTIES( "_KALPC_DIRECT_EVENT.$", 0x8, true, 0x5bfd616bc55bbe3a );                  
        SDK_FIXED_SIZE( kalpc_direct_event_t, 0x8 );                  
    };                                  
};
#include "magic/kalpc_direct_event_t.end.hpp"
SDK_VERIFY( union nt::kalpc_direct_event_t, 0x8 );
