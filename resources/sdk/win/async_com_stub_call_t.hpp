#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [class AsyncComStubCall]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class async_com_stub_call_t
    {                          
                               
        SDK_MAGIC_PROPERTIES( "AsyncComStubCall.$", 0x8, true, 0xf5be5bb0a87303ec );
        SDK_FIXED_SIZE( async_com_stub_call_t, 0x8 );
    };                         
};
SDK_VERIFY( class win::async_com_stub_call_t, 0x8 );
