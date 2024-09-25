#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/driver_tracker_cache_aware_t.start.hpp"
namespace fx
{
    // [struct _FX_DRIVER_TRACKER_CACHE_AWARE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct driver_tracker_cache_aware_t
    {                                  
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                           
        _m00 void*    m_pool_to_free;    //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .m_PoolToFree
        _m01 uint32_t m_entry_size;      //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .m_EntrySize
        _m02 uint32_t m_number;          //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .m_Number
                                       
        SDK_MAGIC_PROPERTIES( "_FX_DRIVER_TRACKER_CACHE_AWARE.$", 0x18, true, 0x80f2a8ded600c6ab );               
        SDK_FIXED_SIZE( driver_tracker_cache_aware_t, 0x18 );               
    };                                 
};
#include "magic/driver_tracker_cache_aware_t.end.hpp"
SDK_VERIFY( struct fx::driver_tracker_cache_aware_t, 0x18 );
