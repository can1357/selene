#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/authenticateinfo_t.start.hpp"
namespace tag
{
    // [struct _tagAUTHENTICATEINFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct authenticateinfo_t     
    {                             
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                        
        _m00 uint32_t dw_flags;     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .dwFlags
        _m01 uint32_t dw_reserved;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .dwReserved
                                  
        SDK_MAGIC_PROPERTIES( "_tagAUTHENTICATEINFO.$", 0x8, true, 0xb159df8922be7e07 );            
        SDK_FIXED_SIZE( authenticateinfo_t, 0x8 );            
    };                            
};
#include "magic/authenticateinfo_t.end.hpp"
SDK_VERIFY( struct tag::authenticateinfo_t, 0x8 );
