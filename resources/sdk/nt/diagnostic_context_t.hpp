#pragma once
#include <sdkgen/support_library.hpp>
#include "requester_type_t.hpp"

#include "magic/diagnostic_context_t.start.hpp"
namespace nt
{
    struct eprocess_t;
    struct device_object_t;

    // [struct _DIAGNOSTIC_CONTEXT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct diagnostic_context_t                        
    {                                                  
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                                             
        _m00 enum nt::requester_type_t   caller_type;    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .CallerType
        _m01 struct nt::eprocess_t*      process;        //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Process
        _m02 uint32_t                    service_tag;    //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .ServiceTag
        _m03 struct nt::device_object_t* device_object;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .DeviceObject
        _m04 uint64_t                    reason_size;    //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .ReasonSize
                                                       
        SDK_MAGIC_PROPERTIES( "_DIAGNOSTIC_CONTEXT.$", 0x20, true, 0x7bb2e3f3927da21b );              
        SDK_FIXED_SIZE( diagnostic_context_t, 0x20 );              
    };                                                 
};
#include "magic/diagnostic_context_t.end.hpp"
SDK_VERIFY( struct nt::diagnostic_context_t, 0x20 );
