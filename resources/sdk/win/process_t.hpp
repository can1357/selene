#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [class ProcessT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class process_t
    {              
                   
        SDK_MAGIC_PROPERTIES( "ProcessT.$", 0x10, true, 0x43778dfe3870c18c );
        SDK_FIXED_SIZE( process_t, 0x10 );
    };             
};
SDK_VERIFY( class win::process_t, 0x10 );
