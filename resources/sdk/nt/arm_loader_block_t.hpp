#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/arm_loader_block_t.start.hpp"
namespace nt
{
    // [struct _ARM_LOADER_BLOCK]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct arm_loader_block_t      
    {                              
        // Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                         
        _m00 uint32_t place_holder;  //{ +0x0000    +0x0000    +0x0000    } | .PlaceHolder
                                   
        SDK_MAGIC_PROPERTIES( "_ARM_LOADER_BLOCK.$", 0x4, true, 0x9f2d95a58fa1b30 );             
        SDK_FIXED_SIZE( arm_loader_block_t, 0x4 );             
    };                             
};
#include "magic/arm_loader_block_t.end.hpp"
SDK_VERIFY( struct nt::arm_loader_block_t, 0x4 );
