#pragma once
#include <sdkgen/support_library.hpp>

namespace wdf
{
    // [class IFxMemory]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class i_fx_memory_t
    {                  
                       
        SDK_MAGIC_PROPERTIES( "IFxMemory.$", 0x8, true, 0xe2ee2fbdc04e5806 );
        SDK_FIXED_SIZE( i_fx_memory_t, 0x8 );
    };                 
};
SDK_VERIFY( class wdf::i_fx_memory_t, 0x8 );
