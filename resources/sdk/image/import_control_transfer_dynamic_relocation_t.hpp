#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/import_control_transfer_dynamic_relocation_t.start.hpp"
namespace image
{
    // [struct _IMAGE_IMPORT_CONTROL_TRANSFER_DYNAMIC_RELOCATION]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct import_control_transfer_dynamic_relocation_t
    {                                                  
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                 
        _m00 uint12_t page_relative_offset;              //{ +0x0000@0  +0x0000@0  +0x0000@0  } | .PageRelativeOffset
        _m01 uint1_t  indirect_call;                     //{ +0x0000@12 +0x0000@12 +0x0000@12 } | .IndirectCall
        _m02 uint19_t iat_index;                         //{ +0x0000@13 +0x0000@13 +0x0000@13 } | .IATIndex
                                                       
        SDK_MAGIC_PROPERTIES( "_IMAGE_IMPORT_CONTROL_TRANSFER_DYNAMIC_RELOCATION.$", 0x4, true, 0xbb844f30d3354128 );                     
        SDK_FIXED_SIZE( import_control_transfer_dynamic_relocation_t, 0x4 );                     
    };                                                 
};
#include "magic/import_control_transfer_dynamic_relocation_t.end.hpp"
SDK_VERIFY( struct image::import_control_transfer_dynamic_relocation_t, 0x4 );
