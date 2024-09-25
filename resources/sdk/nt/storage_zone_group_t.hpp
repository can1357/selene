#pragma once
#include <sdkgen/support_library.hpp>
#include "storage_zone_types_t.hpp"

#include "magic/storage_zone_group_t.start.hpp"
namespace nt
{
    // [struct _STORAGE_ZONE_GROUP]
    // => WDK 10 (NV)
    //
    struct storage_zone_group_t                       
    {                                                 
        // WDK 10                                     
        //                                            
        _m00 uint32_t                      zone_count;  //{ +0x0000    } | .ZoneCount
        _m01 enum nt::storage_zone_types_t zone_type;   //{ +0x0004    } | .ZoneType
        _m02 uint64_t                      zone_size;   //{ +0x0008    } | .ZoneSize
                                                      
        SDK_NONVOL_PROPERTIES( "_STORAGE_ZONE_GROUP.$", 0x0, false, 0xde946dbb970bf423 );           
        SDK_FIXED_SIZE( storage_zone_group_t, 0x10 );           
    };                                                
};
#include "magic/storage_zone_group_t.end.hpp"
SDK_VERIFY( struct nt::storage_zone_group_t, 0x10 );
