#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/push_lock_cache_aware_legacy_t.start.hpp"
namespace ex
{
    struct push_lock_t;

    // [struct _EX_PUSH_LOCK_CACHE_AWARE_LEGACY]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct push_lock_cache_aware_legacy_t
    {                                    
        using locks_t = sdk::variant<sdk::array<uint64_t*, 32>, sdk::array<struct ex::push_lock_t*, 32>>;      
                                         
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2      
        //                  
        _m00 locks_t  locks;               //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Locks
                                         
        SDK_NONVOL_PROPERTIES( "_EX_PUSH_LOCK_CACHE_AWARE_LEGACY.$", 0x100, true, 0x361ec3b28755db7c );      
        SDK_FIXED_SIZE( push_lock_cache_aware_legacy_t, 0x100 );      
    };                                   
};
#include "magic/push_lock_cache_aware_legacy_t.end.hpp"
SDK_VERIFY( struct ex::push_lock_cache_aware_legacy_t, 0x100 );
