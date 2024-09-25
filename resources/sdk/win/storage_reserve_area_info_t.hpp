#pragma once
#include <sdkgen/support_library.hpp>
#include "storage_reserve_id_t.hpp"

#include "magic/storage_reserve_area_info_t.start.hpp"
namespace win
{
    // [struct _STORAGE_RESERVE_AREA_INFO]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct storage_reserve_area_info_t                      
    {                                                       
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                                                  
        _m00 enum win::storage_reserve_id_t id;               //{ +0x0000    +0x0000    +0x0000    } | .Id
        _m01 uint32_t                       flags;            //{ +0x0004    +0x0004    +0x0004    } | .Flags
        _m02 int64_t                        space_guarantee;  //{ +0x0008    +0x0008    +0x0008    } | .SpaceGuarantee
        _m03 int64_t                        space_used;       //{ +0x0010    +0x0010    +0x0010    } | .SpaceUsed
                                                            
        SDK_MAGIC_PROPERTIES( "_STORAGE_RESERVE_AREA_INFO.$", 0x18, true, 0x804406b5231de75c );                
        SDK_FIXED_SIZE( storage_reserve_area_info_t, 0x18 );                
    };                                                      
};
#include "magic/storage_reserve_area_info_t.end.hpp"
SDK_VERIFY( struct win::storage_reserve_area_info_t, 0x18 );
