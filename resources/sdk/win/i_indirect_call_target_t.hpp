#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IIndirectCallTarget]
    // => Windows 11
    //
    struct i_indirect_call_target_t
    {                              
                                   
        SDK_MAGIC_PROPERTIES( "IIndirectCallTarget.$", 0x0, false, 0xe4fc5c1aab3f5635 );
        SDK_FIXED_SIZE( i_indirect_call_target_t, 0x8 );
    };                             
};
SDK_VERIFY( struct win::i_indirect_call_target_t, 0x8 );
