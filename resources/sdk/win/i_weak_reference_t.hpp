#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IWeakReference]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_weak_reference_t
    {                        
                             
        SDK_MAGIC_PROPERTIES( "IWeakReference.$", 0x8, true, 0xbbf6a4bcfb4a72e4 );
        SDK_FIXED_SIZE( i_weak_reference_t, 0x8 );
    };                       
};
SDK_VERIFY( struct win::i_weak_reference_t, 0x8 );
