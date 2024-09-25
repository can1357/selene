#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/ndr_string_ptr_header_t.start.hpp"
namespace win
{
    // [struct NdrStringPtrHeader]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ndr_string_ptr_header_t
    {                             
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2          
        //                      
        _m00 uint32_t dw_unique;    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .dwUnique
        _m01 uint32_t dw_max;       //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .dwMax
        _m02 uint32_t dw_offset;    //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .dwOffset
        _m03 uint32_t dw_actual;    //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .dwActual
                                  
        SDK_MAGIC_PROPERTIES( "NdrStringPtrHeader.$", 0x10, true, 0x835fa7d5911aa4aa );          
        SDK_FIXED_SIZE( ndr_string_ptr_header_t, 0x10 );          
    };                            
};
#include "magic/ndr_string_ptr_header_t.end.hpp"
SDK_VERIFY( struct win::ndr_string_ptr_header_t, 0x10 );
