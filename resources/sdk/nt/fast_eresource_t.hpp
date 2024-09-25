#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [struct _FAST_ERESOURCE]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct fast_eresource_t
    {                      
                           
        SDK_MAGIC_PROPERTIES( "_FAST_ERESOURCE.$", 0x68, true, 0x7971bddd1bdfa659 );
        SDK_FIXED_SIZE( fast_eresource_t, 0x68 );
    };                     
};
SDK_VERIFY( struct nt::fast_eresource_t, 0x68 );
