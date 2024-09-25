#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [struct _DICTIONARY_HEADER]
    // => WDK 10
    //
    struct dictionary_header_t
    {                         
                              
        SDK_MAGIC_PROPERTIES( "_DICTIONARY_HEADER.$", 0x0, false, 0x7124efc2db504850 );
        SDK_FIXED_SIZE( dictionary_header_t, 0x0 );
    };                        
};
SDK_VERIFY( struct nt::dictionary_header_t, 0x0 );
