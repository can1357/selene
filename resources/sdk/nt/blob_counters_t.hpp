#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/blob_counters_t.start.hpp"
namespace nt
{
    // [struct _BLOB_COUNTERS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct blob_counters_t            
    {                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                            
        _m00 uint32_t created_objects;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .CreatedObjects
        _m01 uint32_t deleted_objects;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .DeletedObjects
                                      
        SDK_MAGIC_PROPERTIES( "_BLOB_COUNTERS.$", 0x8, true, 0x263e2ebb60910639 );                
        SDK_FIXED_SIZE( blob_counters_t, 0x8 );                
    };                                
};
#include "magic/blob_counters_t.end.hpp"
SDK_VERIFY( struct nt::blob_counters_t, 0x8 );
