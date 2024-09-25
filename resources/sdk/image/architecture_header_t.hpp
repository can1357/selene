#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/architecture_header_t.start.hpp"
namespace image
{
    // [struct _ImageArchitectureHeader]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct architecture_header_t      
    {                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                            
        _m00 uint1_t  amask_value;      //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .AmaskValue
        _m01 uint8_t  amask_shift;      //{ +0x0000@8  +0x0000@8  +0x0000@8  +0x0000@8  } | .AmaskShift
        _m02 uint32_t first_entry_rva;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .FirstEntryRVA
                                      
        SDK_MAGIC_PROPERTIES( "_ImageArchitectureHeader.$", 0x8, true, 0xf58fe4580affe0c2 );                
        SDK_FIXED_SIZE( architecture_header_t, 0x8 );                
    };                                
};
#include "magic/architecture_header_t.end.hpp"
SDK_VERIFY( struct image::architecture_header_t, 0x8 );
