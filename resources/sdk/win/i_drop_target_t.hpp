#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IDropTarget]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_drop_target_t
    {                     
                          
        SDK_MAGIC_PROPERTIES( "IDropTarget.$", 0x8, true, 0x5ff27dd92529044c );
        SDK_FIXED_SIZE( i_drop_target_t, 0x8 );
    };                    
};
SDK_VERIFY( struct win::i_drop_target_t, 0x8 );
