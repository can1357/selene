#pragma once
#include <sdkgen/support_library.hpp>

namespace nt { struct device_object_t; }

#include "magic/conflict_info_t.start.hpp"
namespace arbiter
{
    // [struct _ARBITER_CONFLICT_INFO]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct conflict_info_t                             
    {                                                  
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                                             
        _m00 struct nt::device_object_t* owning_object;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .OwningObject
        _m01 uint64_t                    start;          //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .Start
        _m02 uint64_t                    end;            //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .End
                                                       
        SDK_NONVOL_PROPERTIES( "_ARBITER_CONFLICT_INFO.$", 0x18, true, 0xb1577363ffb86a5a );              
        SDK_FIXED_SIZE( conflict_info_t, 0x18 );              
    };                                                 
};
#include "magic/conflict_info_t.end.hpp"
SDK_VERIFY( struct arbiter::conflict_info_t, 0x18 );
