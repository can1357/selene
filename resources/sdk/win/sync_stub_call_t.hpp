#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [class SyncStubCall]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class sync_stub_call_t
    {                     
                          
        SDK_MAGIC_PROPERTIES( "SyncStubCall.$", 0x8, true, 0xbba69ede108370be );
        SDK_FIXED_SIZE( sync_stub_call_t, 0x8 );
    };                    
};
SDK_VERIFY( class win::sync_stub_call_t, 0x8 );
