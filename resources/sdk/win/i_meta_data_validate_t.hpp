#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IMetaDataValidate]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_meta_data_validate_t
    {                            
                                 
        SDK_MAGIC_PROPERTIES( "IMetaDataValidate.$", 0x8, true, 0x115133361603302 );
        SDK_FIXED_SIZE( i_meta_data_validate_t, 0x8 );
    };                           
};
SDK_VERIFY( struct win::i_meta_data_validate_t, 0x8 );
