#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/highcontrasta_t.start.hpp"
namespace tag
{
    // [struct tagHIGHCONTRASTA]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct highcontrasta_t                
    {                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                
        _m00 uint32_t cb_size;              //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .cbSize
        _m01 uint32_t dw_flags;             //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .dwFlags
        _m02 char*    lpsz_default_scheme;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .lpszDefaultScheme
                                          
        SDK_MAGIC_PROPERTIES( "tagHIGHCONTRASTA.$", 0x10, true, 0x633f55303e7707c4 );                    
        SDK_FIXED_SIZE( highcontrasta_t, 0x10 );                    
    };                                    
};
#include "magic/highcontrasta_t.end.hpp"
SDK_VERIFY( struct tag::highcontrasta_t, 0x10 );
