#pragma once
#include <sdkgen/support_library.hpp>

namespace mx
{
    // [class MxMemory]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class memory_t
    {             
                  
        SDK_MAGIC_PROPERTIES( "MxMemory.$", 0x1, true, 0x9f3dde065f0e4bb7 );
        SDK_FIXED_SIZE( memory_t, 0x1 );
    };            
};
SDK_VERIFY( class mx::memory_t, 0x1 );
