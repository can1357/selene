#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/ndr_string_header_t.start.hpp"
namespace win
{
    // [struct NdrStringHeader]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ndr_string_header_t  
    {                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2          
        //                      
        _m00 uint32_t dw_max;     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .dwMax
        _m01 uint32_t dw_offset;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .dwOffset
        _m02 uint32_t dw_actual;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .dwActual
                                
        SDK_MAGIC_PROPERTIES( "NdrStringHeader.$", 0xc, true, 0xea076c85db5ffaa2 );          
        SDK_FIXED_SIZE( ndr_string_header_t, 0xc );          
    };                          
};
#include "magic/ndr_string_header_t.end.hpp"
SDK_VERIFY( struct win::ndr_string_header_t, 0xc );
