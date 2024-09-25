#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IDestInfo]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_dest_info_t
    {                   
                        
        SDK_MAGIC_PROPERTIES( "IDestInfo.$", 0x8, true, 0xc0b04f670f146b03 );
        SDK_FIXED_SIZE( i_dest_info_t, 0x8 );
    };                  
};
SDK_VERIFY( struct win::i_dest_info_t, 0x8 );
