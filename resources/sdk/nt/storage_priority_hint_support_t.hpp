#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/storage_priority_hint_support_t.start.hpp"
namespace nt
{
    // [struct _STORAGE_PRIORITY_HINT_SUPPORT]
    // => WDK 10 (NV)
    //
    struct storage_priority_hint_support_t
    {                                     
        // WDK 10                   
        //                          
        _m00 uint32_t support_flags;        //{ +0x0000    } | .SupportFlags
                                          
        SDK_NONVOL_PROPERTIES( "_STORAGE_PRIORITY_HINT_SUPPORT.$", 0x0, false, 0xf1368313e366a94a );              
        SDK_FIXED_SIZE( storage_priority_hint_support_t, 0x4 );              
    };                                    
};
#include "magic/storage_priority_hint_support_t.end.hpp"
SDK_VERIFY( struct nt::storage_priority_hint_support_t, 0x4 );
