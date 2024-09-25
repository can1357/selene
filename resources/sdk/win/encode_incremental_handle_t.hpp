#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [class EncodeIncrementalHandle]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class encode_incremental_handle_t
    {                                
                                     
        SDK_MAGIC_PROPERTIES( "EncodeIncrementalHandle.$", 0x38, true, 0x63e87ca3ded33188 );
        SDK_FIXED_SIZE( encode_incremental_handle_t, 0x38 );
    };                               
};
SDK_VERIFY( class win::encode_incremental_handle_t, 0x38 );
