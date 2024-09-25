#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IRoMetaDataLocator]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_ro_meta_data_locator_t
    {                              
                                   
        SDK_MAGIC_PROPERTIES( "IRoMetaDataLocator.$", 0x8, true, 0xd5df230efdff704d );
        SDK_FIXED_SIZE( i_ro_meta_data_locator_t, 0x8 );
    };                             
};
SDK_VERIFY( struct win::i_ro_meta_data_locator_t, 0x8 );
