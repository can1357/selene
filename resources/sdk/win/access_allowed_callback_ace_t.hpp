#pragma once
#include <sdkgen/support_library.hpp>
#include "ace_header_t.hpp"

#include "magic/access_allowed_callback_ace_t.start.hpp"
namespace win
{
    // [struct _ACCESS_ALLOWED_CALLBACK_ACE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct access_allowed_callback_ace_t        
    {                                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2          
        //                                      
        _m00 struct win::ace_header_t header;     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m01 uint32_t                 mask;       //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Mask
        _m02 uint32_t                 sid_start;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .SidStart
                                                
        SDK_MAGIC_PROPERTIES( "_ACCESS_ALLOWED_CALLBACK_ACE.$", 0xc, true, 0x6217aa94860edddb );          
        SDK_FIXED_SIZE( access_allowed_callback_ace_t, 0xc );          
    };                                          
};
#include "magic/access_allowed_callback_ace_t.end.hpp"
SDK_VERIFY( struct win::access_allowed_callback_ace_t, 0xc );
