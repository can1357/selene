#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/registerworda_t.start.hpp"
namespace tag
{
    // [struct tagREGISTERWORDA]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct registerworda_t    
    {                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                    
        _m00 char* lp_reading;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .lpReading
        _m01 char* lp_word;     //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .lpWord
                              
        SDK_MAGIC_PROPERTIES( "tagREGISTERWORDA.$", 0x10, true, 0xad44975c22909dd3 );           
        SDK_FIXED_SIZE( registerworda_t, 0x10 );           
    };                        
};
#include "magic/registerworda_t.end.hpp"
SDK_VERIFY( struct tag::registerworda_t, 0x10 );
