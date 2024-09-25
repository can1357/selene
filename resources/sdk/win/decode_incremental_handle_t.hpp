#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [class DecodeIncrementalHandle]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class decode_incremental_handle_t
    {                                
                                     
        SDK_MAGIC_PROPERTIES( "DecodeIncrementalHandle.$", 0x40, true, 0xf8c958f8d2bfc3bf );
        SDK_FIXED_SIZE( decode_incremental_handle_t, 0x40 );
    };                               
};
SDK_VERIFY( class win::decode_incremental_handle_t, 0x40 );
