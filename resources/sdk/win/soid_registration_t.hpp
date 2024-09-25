#pragma once
#include <sdkgen/support_library.hpp>
#include "suuid_hash_node_t.hpp"

#include "magic/soid_registration_t.start.hpp"
namespace win
{
    class c_ref_cache_t;
    struct soid_registration_t;

    // [struct SOIDRegistration]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct soid_registration_t                                              
    {                                                                       
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                              
        //                                                                  
        _m00 struct win::suuid_hash_node_t    node;                           //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Node
        _m01 uint16_t                         c_refs;                         //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .cRefs
        _m02 uint16_t                         flags;                          //{ +0x0022    +0x0022    +0x0022    +0x0022    } | .flags
        _m03 uint64_t                         mid;                            //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .mid
        _m04 uint64_t                         oxid;                           //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .oxid
        _m05 struct win::soid_registration_t* p_prev_list;                    //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .pPrevList
        _m06 struct win::soid_registration_t* p_next_list;                    //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .pNextList
        _m07 class win::c_ref_cache_t*        p_ref_cache;                    //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .pRefCache
                                                                            
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                              
        //                                                                  
        _m08 bool                             is_fast_rundown;                //{ +0x0050    +0x0050    +0x0050    } | .isFastRundown
        _m09 bool                             is_rundown_object_of_interest;  //{ +0x0051    +0x0051    +0x0051    } | .isRundownObjectOfInterest
                                                                            
        SDK_MAGIC_PROPERTIES( "SOIDRegistration.$", 0x58, true, 0xb43881e58271888c );                              
        SDK_DYNAMIC_SIZE( soid_registration_t );                              
    };                                                                      
};
#include "magic/soid_registration_t.end.hpp"
