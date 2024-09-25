#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [class EncodeSizingIncrementalHandle]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class encode_sizing_incremental_handle_t
    {                                       
                                            
        SDK_MAGIC_PROPERTIES( "EncodeSizingIncrementalHandle.$", 0x38, true, 0x3cc0123efd25b110 );
        SDK_FIXED_SIZE( encode_sizing_incremental_handle_t, 0x38 );
    };                                      
};
SDK_VERIFY( class win::encode_sizing_incremental_handle_t, 0x38 );
