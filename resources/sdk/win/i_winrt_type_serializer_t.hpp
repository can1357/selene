#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IWinrtTypeSerializer]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_winrt_type_serializer_t
    {                               
                                    
        SDK_MAGIC_PROPERTIES( "IWinrtTypeSerializer.$", 0x8, true, 0x3490b3fd7f36f059 );
        SDK_FIXED_SIZE( i_winrt_type_serializer_t, 0x8 );
    };                              
};
SDK_VERIFY( struct win::i_winrt_type_serializer_t, 0x8 );
