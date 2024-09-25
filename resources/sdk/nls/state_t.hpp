#pragma once
#include <sdkgen/support_library.hpp>

namespace nls
{
    // [struct _NLS_STATE]
    // => Windows 11
    //
    struct state_t
    {             
                  
        SDK_MAGIC_PROPERTIES( "_NLS_STATE.$", 0x0, false, 0xe316787af9ea2875 );
        SDK_FIXED_SIZE( state_t, 0x0 );
    };            
};
SDK_VERIFY( struct nls::state_t, 0x0 );
