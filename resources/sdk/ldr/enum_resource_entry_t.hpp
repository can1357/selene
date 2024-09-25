#pragma once
#include <sdkgen/support_library.hpp>

namespace image { struct resource_directory_string_t; }

#include "magic/enum_resource_entry_t.start.hpp"
namespace ldr
{
    // [struct _LDR_ENUM_RESOURCE_ENTRY]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct enum_resource_entry_t                                                 
    {                                                                            
        union u0_path_t                                                          
        {                                                                        
            // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
            //                                                                   
            _m00 uint64_t                                   name_or_id;            //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .NameOrId
            _m01 struct image::resource_directory_string_t* name;                  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Name
            _m02 uint16_t                                   id;                    //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Id
            _m03 uint16_t                                   name_is_present;       //{ +0x0002    +0x0002    +0x0002    +0x0002    +0x0002    } | .NameIsPresent
                                                                                 
            SDK_NONVOL_PROPERTIES( "_LDR_ENUM_RESOURCE_ENTRY.Path.$", 0x8, true, 0x864c2101cf6c40e5 );                     
            SDK_FIXED_SIZE( u0_path_t, 0x8 );                                    
        };                                                                       
                                                                                 
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2     
        //                                                                       
        _m04 sdk::array<u0_path_t, 3>                                       path;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Path
        _m05 void*                                                          data;  //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .Data
        _m06 uint32_t                                                       size;  //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | .Size
                                                                                 
        SDK_NONVOL_PROPERTIES( "_LDR_ENUM_RESOURCE_ENTRY.$", 0x28, true, 0xed18717532d15fc0 );     
        SDK_FIXED_SIZE( enum_resource_entry_t, 0x28 );                           
    };                                                                           
};
#include "magic/enum_resource_entry_t.end.hpp"
SDK_VERIFY( union ldr::enum_resource_entry_t::u0_path_t, 0x8 );
SDK_VERIFY( struct ldr::enum_resource_entry_t, 0x28 );
