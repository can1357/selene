#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct DPI_AWARENESS_CONTEXT__]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct dpi_awareness_context_t
    {                             
                                  
        SDK_NONVOL_PROPERTIES( "DPI_AWARENESS_CONTEXT__.$", 0x4, true, 0xcd698cff3a402dfb );
        SDK_FIXED_SIZE( dpi_awareness_context_t, 0x4 );
    };                            
};
SDK_VERIFY( struct win::dpi_awareness_context_t, 0x4 );
