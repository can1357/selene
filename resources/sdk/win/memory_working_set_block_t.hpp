#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/memory_working_set_block_t.start.hpp"
namespace win
{
    // [struct _MEMORY_WORKING_SET_BLOCK]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct memory_working_set_block_t
    {                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                         
        _m00 uint5_t  protection;      //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .Protection
        _m01 uint3_t  share_count;     //{ +0x0000@5  +0x0000@5  +0x0000@5  +0x0000@5  } | .ShareCount
        _m02 uint1_t  shared;          //{ +0x0000@8  +0x0000@8  +0x0000@8  +0x0000@8  } | .Shared
        _m03 uint3_t  node;            //{ +0x0000@9  +0x0000@9  +0x0000@9  +0x0000@9  } | .Node
        _m04 uint52_t virtual_page;    //{ +0x0000@12 +0x0000@12 +0x0000@12 +0x0000@12 } | .VirtualPage
                                     
        SDK_MAGIC_PROPERTIES( "_MEMORY_WORKING_SET_BLOCK.$", 0x8, true, 0xc5c4191ef14b1621 );             
        SDK_FIXED_SIZE( memory_working_set_block_t, 0x8 );             
    };                               
};
#include "magic/memory_working_set_block_t.end.hpp"
SDK_VERIFY( struct win::memory_working_set_block_t, 0x8 );
