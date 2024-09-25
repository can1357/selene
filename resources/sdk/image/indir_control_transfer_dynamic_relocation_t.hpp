#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/indir_control_transfer_dynamic_relocation_t.start.hpp"
namespace image
{
    // [struct _IMAGE_INDIR_CONTROL_TRANSFER_DYNAMIC_RELOCATION]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct indir_control_transfer_dynamic_relocation_t
    {                                                 
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                 
        _m00 uint12_t page_relative_offset;             //{ +0x0000@0  +0x0000@0  +0x0000@0  } | .PageRelativeOffset
        _m01 uint1_t  indirect_call;                    //{ +0x0000@12 +0x0000@12 +0x0000@12 } | .IndirectCall
        _m02 uint1_t  rex_w_prefix;                     //{ +0x0000@13 +0x0000@13 +0x0000@13 } | .RexWPrefix
        _m03 uint1_t  cfg_check;                        //{ +0x0000@14 +0x0000@14 +0x0000@14 } | .CfgCheck
                                                      
        SDK_MAGIC_PROPERTIES( "_IMAGE_INDIR_CONTROL_TRANSFER_DYNAMIC_RELOCATION.$", 0x2, true, 0x2828436cd5182383 );                     
        SDK_FIXED_SIZE( indir_control_transfer_dynamic_relocation_t, 0x2 );                     
    };                                                
};
#include "magic/indir_control_transfer_dynamic_relocation_t.end.hpp"
SDK_VERIFY( struct image::indir_control_transfer_dynamic_relocation_t, 0x2 );
