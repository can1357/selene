#pragma once
#include <sdkgen/support_library.hpp>
#include "guid_t.hpp"

#include "magic/storage_tier_region_t.start.hpp"
namespace nt
{
    // [struct _STORAGE_TIER_REGION]
    // => WDK 10 (NV)
    //
    struct storage_tier_region_t       
    {                                  
        // WDK 10                      
        //                             
        _m00 struct nt::guid_t tier_id;  //{ +0x0000    } | .TierId
        _m01 uint64_t          offset;   //{ +0x0010    } | .Offset
        _m02 uint64_t          length;   //{ +0x0018    } | .Length
                                       
        SDK_NONVOL_PROPERTIES( "_STORAGE_TIER_REGION.$", 0x0, false, 0x2e478b479cb63cc9 );        
        SDK_FIXED_SIZE( storage_tier_region_t, 0x20 );        
    };                                 
};
#include "magic/storage_tier_region_t.end.hpp"
SDK_VERIFY( struct nt::storage_tier_region_t, 0x20 );
