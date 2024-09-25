#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/i386_loader_block_t.start.hpp"
namespace nt
{
    // [struct _I386_LOADER_BLOCK]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i386_loader_block_t         
    {                                  
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                             
        _m00 void*    common_data_area;  //{ +0x0000    +0x0000    +0x0000    } | .CommonDataArea
        _m01 uint32_t machine_type;      //{ +0x0008    +0x0008    +0x0008    } | .MachineType
        _m02 uint32_t virtual_bias;      //{ +0x000c    +0x000c    +0x000c    } | .VirtualBias
                                       
        SDK_MAGIC_PROPERTIES( "_I386_LOADER_BLOCK.$", 0x10, true, 0x696c5a7c2f3ad04 );                 
        SDK_FIXED_SIZE( i386_loader_block_t, 0x10 );                 
    };                                 
};
#include "magic/i386_loader_block_t.end.hpp"
SDK_VERIFY( struct nt::i386_loader_block_t, 0x10 );
