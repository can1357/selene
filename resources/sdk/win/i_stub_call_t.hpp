#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IStubCall]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_stub_call_t
    {                   
                        
        SDK_MAGIC_PROPERTIES( "IStubCall.$", 0x8, true, 0x92d0b54198684b68 );
        SDK_FIXED_SIZE( i_stub_call_t, 0x8 );
    };                  
};
SDK_VERIFY( struct win::i_stub_call_t, 0x8 );
