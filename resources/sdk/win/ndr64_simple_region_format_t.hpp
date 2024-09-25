#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/ndr64_simple_region_format_t.start.hpp"
namespace win
{
    // [struct _NDR64_SIMPLE_REGION_FORMAT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ndr64_simple_region_format_t
    {                                  
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                        
        _m00 uint8_t  format_code;       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .FormatCode
        _m01 uint8_t  alignment;         //{ +0x0001    +0x0001    +0x0001    +0x0001    } | .Alignment
        _m02 uint16_t region_size;       //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .RegionSize
                                       
        SDK_MAGIC_PROPERTIES( "_NDR64_SIMPLE_REGION_FORMAT.$", 0x8, true, 0x407a5cc5d449f173 );            
        SDK_FIXED_SIZE( ndr64_simple_region_format_t, 0x8 );            
    };                                 
};
#include "magic/ndr64_simple_region_format_t.end.hpp"
SDK_VERIFY( struct win::ndr64_simple_region_format_t, 0x8 );
