#pragma once
#include <sdkgen/support_library.hpp>
#include "storage_reserve_id_t.hpp"

#include "magic/query_storage_reserve_input_t.start.hpp"
namespace win
{
    // [struct _QUERY_STORAGE_RESERVE_INPUT]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct query_storage_reserve_input_t                                  
    {                                                                     
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                                                                
        _m00 uint32_t                                      version;         //{ +0x0000    +0x0000    +0x0000    } | .Version
        _m01 uint32_t                                      flags;           //{ +0x0004    +0x0004    +0x0004    } | .Flags
        _m02 uint32_t                                      area_id_offset;  //{ +0x0008    +0x0008    +0x0008    } | .AreaIdOffset
        _m03 uint32_t                                      area_id_count;   //{ +0x000c    +0x000c    +0x000c    } | .AreaIdCount
        _m04 sdk::array<enum win::storage_reserve_id_t, 1> area_id;         //{ +0x0010    +0x0010    +0x0010    } | .AreaId
                                                                          
        SDK_MAGIC_PROPERTIES( "_QUERY_STORAGE_RESERVE_INPUT.$", 0x14, true, 0x91fc856aeed28e1d );               
        SDK_FIXED_SIZE( query_storage_reserve_input_t, 0x14 );               
    };                                                                    
};
#include "magic/query_storage_reserve_input_t.end.hpp"
SDK_VERIFY( struct win::query_storage_reserve_input_t, 0x14 );
