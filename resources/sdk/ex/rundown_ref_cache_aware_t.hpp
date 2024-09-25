#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/rundown_ref_cache_aware_t.start.hpp"
namespace ex
{
    struct rundown_ref_t;

    // [struct _EX_RUNDOWN_REF_CACHE_AWARE]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct rundown_ref_cache_aware_t                
    {                                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                                          
        _m00 struct ex::rundown_ref_t* run_refs;      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .RunRefs
        _m01 void*                     pool_to_free;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .PoolToFree
        _m02 uint32_t                  run_ref_size;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .RunRefSize
        _m03 uint32_t                  number;        //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .Number
                                                    
        SDK_MAGIC_PROPERTIES( "_EX_RUNDOWN_REF_CACHE_AWARE.$", 0x18, true, 0xcf0cef5424e2ca2f );             
        SDK_DYNAMIC_SIZE( rundown_ref_cache_aware_t );             
    };                                              
};
#include "magic/rundown_ref_cache_aware_t.end.hpp"
