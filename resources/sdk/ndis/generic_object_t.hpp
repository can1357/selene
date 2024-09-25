#pragma once
#include <sdkgen/support_library.hpp>
#include "object_header_t.hpp"

namespace nt { struct driver_object_t; }

#include "magic/generic_object_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_GENERIC_OBJECT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct generic_object_t                              
    {                                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                                               
        _m00 struct ndis::object_header_t header;          //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m01 void*                        caller;          //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Caller
        _m02 void*                        callers_caller;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .CallersCaller
        _m03 struct nt::driver_object_t*  driver_object;   //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .DriverObject
                                                         
        SDK_MAGIC_PROPERTIES( "_NDIS_GENERIC_OBJECT.$", 0x20, true, 0x870255f6e0b982a2 );               
        SDK_FIXED_SIZE( generic_object_t, 0x20 );               
    };                                                   
};
#include "magic/generic_object_t.end.hpp"
SDK_VERIFY( struct ndis::generic_object_t, 0x20 );
