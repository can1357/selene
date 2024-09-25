#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/load_config_code_integrity_t.start.hpp"
namespace image
{
    // [struct _IMAGE_LOAD_CONFIG_CODE_INTEGRITY]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct load_config_code_integrity_t
    {                                  
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                           
        _m00 uint16_t flags;             //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Flags
        _m01 uint16_t catalog;           //{ +0x0002    +0x0002    +0x0002    +0x0002    +0x0002    } | .Catalog
        _m02 uint32_t catalog_offset;    //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .CatalogOffset
                                       
        SDK_NONVOL_PROPERTIES( "_IMAGE_LOAD_CONFIG_CODE_INTEGRITY.$", 0xc, true, 0x356cf3f9af4cc43a );               
        SDK_FIXED_SIZE( load_config_code_integrity_t, 0xc );               
    };                                 
};
#include "magic/load_config_code_integrity_t.end.hpp"
SDK_VERIFY( struct image::load_config_code_integrity_t, 0xc );
