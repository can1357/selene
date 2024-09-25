#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct ILayoutStorage]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_layout_storage_t
    {                        
                             
        SDK_MAGIC_PROPERTIES( "ILayoutStorage.$", 0x8, true, 0x394e63b01f42a30c );
        SDK_FIXED_SIZE( i_layout_storage_t, 0x8 );
    };                       
};
SDK_VERIFY( struct win::i_layout_storage_t, 0x8 );
