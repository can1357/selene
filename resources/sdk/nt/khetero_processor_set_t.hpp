#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/khetero_processor_set_t.start.hpp"
namespace nt
{
    // [struct _KHETERO_PROCESSOR_SET]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct khetero_processor_set_t   
    {                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                           
        _m00 uint64_t ideal_mask;      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .IdealMask
        _m01 uint64_t preferred_mask;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .PreferredMask
        _m02 uint64_t available_mask;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .AvailableMask
                                     
        SDK_MAGIC_PROPERTIES( "_KHETERO_PROCESSOR_SET.$", 0x18, true, 0x779aa5e0a5996877 );               
        SDK_FIXED_SIZE( khetero_processor_set_t, 0x18 );               
    };                               
};
#include "magic/khetero_processor_set_t.end.hpp"
SDK_VERIFY( struct nt::khetero_processor_set_t, 0x18 );
