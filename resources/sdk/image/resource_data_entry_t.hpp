#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/resource_data_entry_t.start.hpp"
namespace image
{
    // [struct _IMAGE_RESOURCE_DATA_ENTRY]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct resource_data_entry_t     
    {                                
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                           
        _m00 uint32_t offset_to_data;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .OffsetToData
        _m01 uint32_t size;            //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .Size
        _m02 uint32_t code_page;       //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .CodePage
                                     
        SDK_NONVOL_PROPERTIES( "_IMAGE_RESOURCE_DATA_ENTRY.$", 0x10, true, 0x3f6bf8c0d2251241 );               
        SDK_FIXED_SIZE( resource_data_entry_t, 0x10 );               
    };                               
};
#include "magic/resource_data_entry_t.end.hpp"
SDK_VERIFY( struct image::resource_data_entry_t, 0x10 );
