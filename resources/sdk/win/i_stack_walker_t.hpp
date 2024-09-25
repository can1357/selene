#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IStackWalker]
    // => Windows 10 v1607
    //
    struct i_stack_walker_t
    {                      
                           
        SDK_MAGIC_PROPERTIES( "IStackWalker.$", 0x0, false, 0x8bd2d719e7e229ef );
        SDK_FIXED_SIZE( i_stack_walker_t, 0x8 );
    };                     
};
SDK_VERIFY( struct win::i_stack_walker_t, 0x8 );
