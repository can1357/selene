#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"

#include "magic/file_storage_tier_region_t.start.hpp"
namespace win
{
    // [struct _FILE_STORAGE_TIER_REGION]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct file_storage_tier_region_t  
    {                                  
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2        
        //                             
        _m00 struct nt::guid_t tier_id;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .TierId
        _m01 uint64_t          offset;   //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .Offset
        _m02 uint64_t          length;   //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .Length
                                       
        SDK_NONVOL_PROPERTIES( "_FILE_STORAGE_TIER_REGION.$", 0x20, true, 0x2d936469107168d );        
        SDK_FIXED_SIZE( file_storage_tier_region_t, 0x20 );        
    };                                 
};
#include "magic/file_storage_tier_region_t.end.hpp"
SDK_VERIFY( struct win::file_storage_tier_region_t, 0x20 );
