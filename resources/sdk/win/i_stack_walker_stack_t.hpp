#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IStackWalkerStack]
    // => Windows 10 v1607
    //
    struct i_stack_walker_stack_t
    {                            
                                 
        SDK_MAGIC_PROPERTIES( "IStackWalkerStack.$", 0x0, false, 0x5624ad72cad6b5e8 );
        SDK_FIXED_SIZE( i_stack_walker_stack_t, 0x8 );
    };                           
};
SDK_VERIFY( struct win::i_stack_walker_stack_t, 0x8 );
