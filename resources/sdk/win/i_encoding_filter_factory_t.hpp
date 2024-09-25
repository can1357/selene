#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IEncodingFilterFactory]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_encoding_filter_factory_t
    {                                 
                                      
        SDK_MAGIC_PROPERTIES( "IEncodingFilterFactory.$", 0x8, true, 0xf3130edc646fc34a );
        SDK_FIXED_SIZE( i_encoding_filter_factory_t, 0x8 );
    };                                
};
SDK_VERIFY( struct win::i_encoding_filter_factory_t, 0x8 );
