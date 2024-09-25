#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/switchtable_branch_dynamic_relocation_t.start.hpp"
namespace image
{
    // [struct _IMAGE_SWITCHTABLE_BRANCH_DYNAMIC_RELOCATION]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct switchtable_branch_dynamic_relocation_t
    {                                             
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                 
        _m00 uint12_t page_relative_offset;         //{ +0x0000@0  +0x0000@0  +0x0000@0  } | .PageRelativeOffset
        _m01 uint4_t  register_number;              //{ +0x0000@12 +0x0000@12 +0x0000@12 } | .RegisterNumber
                                                  
        SDK_MAGIC_PROPERTIES( "_IMAGE_SWITCHTABLE_BRANCH_DYNAMIC_RELOCATION.$", 0x2, true, 0x9b8ba9950981cae2 );                     
        SDK_FIXED_SIZE( switchtable_branch_dynamic_relocation_t, 0x2 );                     
    };                                            
};
#include "magic/switchtable_branch_dynamic_relocation_t.end.hpp"
SDK_VERIFY( struct image::switchtable_branch_dynamic_relocation_t, 0x2 );
