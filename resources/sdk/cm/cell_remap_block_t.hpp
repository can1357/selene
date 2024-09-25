#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/cell_remap_block_t.start.hpp"
namespace cm
{
    // [struct _CM_CELL_REMAP_BLOCK]
    // => Windows 10 v1607
    //
    struct cell_remap_block_t  
    {                          
        // Windows 10 v1607         
        //                     
        _m00 uint32_t old_cell;  //{ +0x0000    } | .OldCell
        _m01 uint32_t new_cell;  //{ +0x0004    } | .NewCell
                               
        SDK_MAGIC_PROPERTIES( "_CM_CELL_REMAP_BLOCK.$", 0x0, false, 0x25918b3267970f96 );         
        SDK_FIXED_SIZE( cell_remap_block_t, 0x8 );         
    };                         
};
#include "magic/cell_remap_block_t.end.hpp"
SDK_VERIFY( struct cm::cell_remap_block_t, 0x8 );
