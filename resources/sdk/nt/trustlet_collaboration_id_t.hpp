#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/trustlet_collaboration_id_t.start.hpp"
namespace nt
{
    // [struct _TRUSTLET_COLLABORATION_ID]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct trustlet_collaboration_id_t     
    {                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2      
        //                                 
        _m00 sdk::array<uint64_t, 2> value;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Value
                                           
        SDK_MAGIC_PROPERTIES( "_TRUSTLET_COLLABORATION_ID.$", 0x10, true, 0x8d80254c9e048a17 );      
        SDK_FIXED_SIZE( trustlet_collaboration_id_t, 0x10 );      
    };                                     
};
#include "magic/trustlet_collaboration_id_t.end.hpp"
SDK_VERIFY( struct nt::trustlet_collaboration_id_t, 0x10 );
