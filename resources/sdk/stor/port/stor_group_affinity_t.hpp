#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/stor_group_affinity_t.start.hpp"
namespace stor::port
{
    // [struct _STOR_GROUP_AFFINITY]
    // => Windows 11
    //
    struct stor_group_affinity_t
    {                           
        // Windows 11       
        //                  
        _m00 uint64_t mask;       //{ +0x0000    } | .Mask
        _m01 uint16_t group;      //{ +0x0008    } | .Group
                                
        SDK_MAGIC_PROPERTIES( "_STOR_GROUP_AFFINITY.$", 0x0, false, 0x59dceeb3927f4ee3 );      
        SDK_FIXED_SIZE( stor_group_affinity_t, 0x10 );      
    };                          
};
#include "magic/stor_group_affinity_t.end.hpp"
SDK_VERIFY( struct stor::port::stor_group_affinity_t, 0x10 );
