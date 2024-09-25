#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [struct _FLS_CALLBACK_INFO]
    // => Windows 10 v1607
    //
    struct fls_callback_info_t
    {                         
                              
        SDK_MAGIC_PROPERTIES( "_FLS_CALLBACK_INFO.$", 0x0, false, 0x61c58a5d086461fd );
        SDK_FIXED_SIZE( fls_callback_info_t, 0x0 );
    };                        
};
SDK_VERIFY( struct nt::fls_callback_info_t, 0x0 );
