#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IMetaDataError]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_meta_data_error_t
    {                         
                              
        SDK_MAGIC_PROPERTIES( "IMetaDataError.$", 0x8, true, 0x9a85af3461dd1ed2 );
        SDK_FIXED_SIZE( i_meta_data_error_t, 0x8 );
    };                        
};
SDK_VERIFY( struct win::i_meta_data_error_t, 0x8 );
