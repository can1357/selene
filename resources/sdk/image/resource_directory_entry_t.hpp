#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/resource_directory_entry_t.start.hpp"
namespace image
{
    // [struct _IMAGE_RESOURCE_DIRECTORY_ENTRY]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct resource_directory_entry_t     
    {                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                
        _m00 uint31_t name_offset;          //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .NameOffset
        _m01 uint1_t  name_is_string;       //{ +0x0000@31 +0x0000@31 +0x0000@31 +0x0000@31 } | .NameIsString
        _m02 uint32_t name;                 //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Name
        _m03 uint16_t id;                   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Id
        _m04 uint32_t offset_to_data;       //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .OffsetToData
        _m05 uint31_t offset_to_directory;  //{ +0x0004@0  +0x0004@0  +0x0004@0  +0x0004@0  } | .OffsetToDirectory
        _m06 uint1_t  data_is_directory;    //{ +0x0004@31 +0x0004@31 +0x0004@31 +0x0004@31 } | .DataIsDirectory
                                          
        SDK_MAGIC_PROPERTIES( "_IMAGE_RESOURCE_DIRECTORY_ENTRY.$", 0x8, true, 0x20ab106552c1f289 );                    
        SDK_FIXED_SIZE( resource_directory_entry_t, 0x8 );                    
    };                                    
};
#include "magic/resource_directory_entry_t.end.hpp"
SDK_VERIFY( struct image::resource_directory_entry_t, 0x8 );
