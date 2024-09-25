#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/arm64ec_code_range_entry_point_t.start.hpp"
namespace image
{
    // [struct _IMAGE_ARM64EC_CODE_RANGE_ENTRY_POINT]
    // => Windows 11
    //
    struct arm64ec_code_range_entry_point_t
    {                                      
        // Windows 11             
        //                        
        _m00 uint32_t start_rva;             //{ +0x0000    } | .StartRva
        _m01 uint32_t end_rva;               //{ +0x0004    } | .EndRva
        _m02 uint32_t entry_point;           //{ +0x0008    } | .EntryPoint
                                           
        SDK_MAGIC_PROPERTIES( "_IMAGE_ARM64EC_CODE_RANGE_ENTRY_POINT.$", 0x0, false, 0x749d0fff1e61f9c9 );            
        SDK_FIXED_SIZE( arm64ec_code_range_entry_point_t, 0xc );            
    };                                     
};
#include "magic/arm64ec_code_range_entry_point_t.end.hpp"
SDK_VERIFY( struct image::arm64ec_code_range_entry_point_t, 0xc );
