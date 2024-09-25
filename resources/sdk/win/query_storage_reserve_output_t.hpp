#pragma once
#include <sdkgen/support_library.hpp>
#include "storage_reserve_area_info_t.hpp"

#include "magic/query_storage_reserve_output_t.start.hpp"
namespace win
{
    // [struct _QUERY_STORAGE_RESERVE_OUTPUT]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct query_storage_reserve_output_t 
    {                                     
        using area_info_t = sdk::array<struct win::storage_reserve_area_info_t, 1>;                
                                          
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                                
        _m00 uint32_t     version;          //{ +0x0000    +0x0000    +0x0000    } | .Version
        _m01 uint32_t     area_info_count;  //{ +0x0004    +0x0004    +0x0004    } | .AreaInfoCount
        _m02 area_info_t  area_info;        //{ +0x0008    +0x0008    +0x0008    } | .AreaInfo
                                          
        SDK_MAGIC_PROPERTIES( "_QUERY_STORAGE_RESERVE_OUTPUT.$", 0x20, true, 0x1ca5fd6be70bef6 );                
        SDK_FIXED_SIZE( query_storage_reserve_output_t, 0x20 );                
    };                                    
};
#include "magic/query_storage_reserve_output_t.end.hpp"
SDK_VERIFY( struct win::query_storage_reserve_output_t, 0x20 );
