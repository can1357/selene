#pragma once
#include <sdkgen/support_library.hpp>
#include "storage_reserve_id_t.hpp"

#include "magic/delete_storage_reserve_input_t.start.hpp"
namespace win
{
    // [struct _DELETE_STORAGE_RESERVE_INPUT]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct delete_storage_reserve_input_t                                 
    {                                                                     
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                                                                
        _m00 uint32_t                                      version;         //{ +0x0000    +0x0000    +0x0000    } | .Version
        _m01 uint32_t                                      flags;           //{ +0x0004    +0x0004    +0x0004    } | .Flags
        _m02 uint32_t                                      area_id_offset;  //{ +0x0008    +0x0008    +0x0008    } | .AreaIdOffset
        _m03 uint32_t                                      area_id_count;   //{ +0x000c    +0x000c    +0x000c    } | .AreaIdCount
        _m04 sdk::array<enum win::storage_reserve_id_t, 1> area_id;         //{ +0x0010    +0x0010    +0x0010    } | .AreaId
                                                                          
        SDK_MAGIC_PROPERTIES( "_DELETE_STORAGE_RESERVE_INPUT.$", 0x14, true, 0x333385a6d808b8d0 );               
        SDK_FIXED_SIZE( delete_storage_reserve_input_t, 0x14 );               
    };                                                                    
};
#include "magic/delete_storage_reserve_input_t.end.hpp"
SDK_VERIFY( struct win::delete_storage_reserve_input_t, 0x14 );
