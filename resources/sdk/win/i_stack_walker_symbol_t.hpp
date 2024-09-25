#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IStackWalkerSymbol]
    // => Windows 10 v1607
    //
    struct i_stack_walker_symbol_t
    {                             
                                  
        SDK_MAGIC_PROPERTIES( "IStackWalkerSymbol.$", 0x0, false, 0x81654db36ffe8666 );
        SDK_FIXED_SIZE( i_stack_walker_symbol_t, 0x8 );
    };                            
};
SDK_VERIFY( struct win::i_stack_walker_symbol_t, 0x8 );
