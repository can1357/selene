#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/highcontrastw_t.start.hpp"
namespace tag
{
    // [struct tagHIGHCONTRASTW]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct highcontrastw_t                
    {                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                
        _m00 uint32_t cb_size;              //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .cbSize
        _m01 uint32_t dw_flags;             //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .dwFlags
        _m02 wchar_t* lpsz_default_scheme;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .lpszDefaultScheme
                                          
        SDK_MAGIC_PROPERTIES( "tagHIGHCONTRASTW.$", 0x10, true, 0xb2f808bbd13517e5 );                    
        SDK_FIXED_SIZE( highcontrastw_t, 0x10 );                    
    };                                    
};
#include "magic/highcontrastw_t.end.hpp"
SDK_VERIFY( struct tag::highcontrastw_t, 0x10 );
