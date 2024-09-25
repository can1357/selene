#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IWeakReferenceSource]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_weak_reference_source_t
    {                               
                                    
        SDK_MAGIC_PROPERTIES( "IWeakReferenceSource.$", 0x8, true, 0xb25ec4da593fd87a );
        SDK_FIXED_SIZE( i_weak_reference_source_t, 0x8 );
    };                              
};
SDK_VERIFY( struct win::i_weak_reference_source_t, 0x8 );
