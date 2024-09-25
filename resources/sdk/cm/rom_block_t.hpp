#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/rom_block_t.start.hpp"
namespace cm
{
    // [struct _CM_ROM_BLOCK]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct rom_block_t        
    {                         
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2        
        //                    
        _m00 uint32_t address;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Address
        _m01 uint32_t size;     //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .Size
                              
        SDK_NONVOL_PROPERTIES( "_CM_ROM_BLOCK.$", 0x8, true, 0xe0ca4db15418d860 );        
        SDK_FIXED_SIZE( rom_block_t, 0x8 );        
    };                        
};
#include "magic/rom_block_t.end.hpp"
SDK_VERIFY( struct cm::rom_block_t, 0x8 );
