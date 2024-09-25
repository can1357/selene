#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/context_chunk_t.start.hpp"
namespace win
{
    // [struct _CONTEXT_CHUNK]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct context_chunk_t   
    {                        
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2       
        //                   
        _m00 int32_t  offset;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Offset
        _m01 uint32_t length;  //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .Length
                             
        SDK_NONVOL_PROPERTIES( "_CONTEXT_CHUNK.$", 0x8, true, 0x6f04192be6b6102a );       
        SDK_FIXED_SIZE( context_chunk_t, 0x8 );       
    };                       
};
#include "magic/context_chunk_t.end.hpp"
SDK_VERIFY( struct win::context_chunk_t, 0x8 );
