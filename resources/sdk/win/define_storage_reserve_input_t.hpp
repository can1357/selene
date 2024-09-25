#pragma once
#include <sdkgen/support_library.hpp>
#include "storage_reserve_area_definition_t.hpp"

#include "magic/define_storage_reserve_input_t.start.hpp"
namespace win
{
    // [struct _DEFINE_STORAGE_RESERVE_INPUT]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct define_storage_reserve_input_t              
    {                                                  
        using area_definition_t = sdk::array<struct win::storage_reserve_area_definition_t, 1>;                       
                                                       
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                       
        //                                             
        _m00 uint32_t           version;                 //{ +0x0000    +0x0000    +0x0000    } | .Version
        _m01 uint32_t           flags;                   //{ +0x0004    +0x0004    +0x0004    } | .Flags
        _m02 uint32_t           area_definition_offset;  //{ +0x0008    +0x0008    +0x0008    } | .AreaDefinitionOffset
        _m03 uint32_t           area_definition_count;   //{ +0x000c    +0x000c    +0x000c    } | .AreaDefinitionCount
        _m04 area_definition_t  area_definition;         //{ +0x0010    +0x0010    +0x0010    } | .AreaDefinition
                                                       
        SDK_MAGIC_PROPERTIES( "_DEFINE_STORAGE_RESERVE_INPUT.$", 0x20, true, 0x981844bd56899ccb );                       
        SDK_FIXED_SIZE( define_storage_reserve_input_t, 0x20 );                       
    };                                                 
};
#include "magic/define_storage_reserve_input_t.end.hpp"
SDK_VERIFY( struct win::define_storage_reserve_input_t, 0x20 );
