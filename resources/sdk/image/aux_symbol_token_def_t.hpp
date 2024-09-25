#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/aux_symbol_token_def_t.start.hpp"
namespace image
{
    // [struct IMAGE_AUX_SYMBOL_TOKEN_DEF]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct aux_symbol_token_def_t                       
    {                                                   
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                                              
        _m00 uint8_t                 b_aux_type;          //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .bAuxType
        _m01 uint8_t                 b_reserved;          //{ +0x0001    +0x0001    +0x0001    +0x0001    } | .bReserved
        _m02 uint32_t                symbol_table_index;  //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .SymbolTableIndex
        _m03 sdk::array<uint8_t, 12> rgb_reserved;        //{ +0x0006    +0x0006    +0x0006    +0x0006    } | .rgbReserved
                                                        
        SDK_MAGIC_PROPERTIES( "IMAGE_AUX_SYMBOL_TOKEN_DEF.$", 0x12, true, 0xdeefdca8454ff9f4 );                   
        SDK_FIXED_SIZE( aux_symbol_token_def_t, 0x12 );                   
    };                                                  
};
#include "magic/aux_symbol_token_def_t.end.hpp"
SDK_VERIFY( struct image::aux_symbol_token_def_t, 0x12 );
