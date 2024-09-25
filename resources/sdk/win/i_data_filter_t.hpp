#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IDataFilter]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_data_filter_t
    {                     
                          
        SDK_MAGIC_PROPERTIES( "IDataFilter.$", 0x8, true, 0x1fd8771d43bb5e57 );
        SDK_FIXED_SIZE( i_data_filter_t, 0x8 );
    };                    
};
SDK_VERIFY( struct win::i_data_filter_t, 0x8 );
