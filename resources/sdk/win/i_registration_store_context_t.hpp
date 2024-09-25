#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IRegistrationStoreContext]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_registration_store_context_t
    {                                    
                                         
        SDK_MAGIC_PROPERTIES( "IRegistrationStoreContext.$", 0x8, true, 0x3cfdd5339415ecd6 );
        SDK_FIXED_SIZE( i_registration_store_context_t, 0x8 );
    };                                   
};
SDK_VERIFY( struct win::i_registration_store_context_t, 0x8 );
