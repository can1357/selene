#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct __crt_fast_encoded_nullptr_t]
    // => Windows 10 v1607
    //
    struct crt_fast_encoded_nullptr_t
    {                                
                                     
        SDK_MAGIC_PROPERTIES( "__crt_fast_encoded_nullptr_t.$", 0x0, false, 0x2ad76c3113a485b );
        SDK_FIXED_SIZE( crt_fast_encoded_nullptr_t, 0x1 );
    };                               
};
SDK_VERIFY( struct win::crt_fast_encoded_nullptr_t, 0x1 );
