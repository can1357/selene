#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct CallEntryBuffer]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct call_entry_buffer_t
    {                         
                              
        SDK_MAGIC_PROPERTIES( "CallEntryBuffer.$", 0x18, true, 0x6e2328b28ee2bf4f );
        SDK_FIXED_SIZE( call_entry_buffer_t, 0x18 );
    };                        
};
SDK_VERIFY( struct win::call_entry_buffer_t, 0x18 );
