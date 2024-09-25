#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/registerwordw_t.start.hpp"
namespace tag
{
    // [struct tagREGISTERWORDW]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct registerwordw_t       
    {                            
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                       
        _m00 wchar_t* lp_reading;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .lpReading
        _m01 wchar_t* lp_word;     //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .lpWord
                                 
        SDK_MAGIC_PROPERTIES( "tagREGISTERWORDW.$", 0x10, true, 0x8ba5e2be9bedadb0 );           
        SDK_FIXED_SIZE( registerwordw_t, 0x10 );           
    };                           
};
#include "magic/registerwordw_t.end.hpp"
SDK_VERIFY( struct tag::registerwordw_t, 0x10 );
