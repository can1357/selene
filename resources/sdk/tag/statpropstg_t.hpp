#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/statpropstg_t.start.hpp"
namespace tag
{
    // [struct tagSTATPROPSTG]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct statpropstg_t          
    {                             
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                        
        _m00 wchar_t* lpwstr_name;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .lpwstrName
        _m01 uint32_t propid;       //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .propid
        _m02 uint16_t vt;           //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .vt
                                  
        SDK_MAGIC_PROPERTIES( "tagSTATPROPSTG.$", 0x10, true, 0x981aa885efbfdb41 );            
        SDK_FIXED_SIZE( statpropstg_t, 0x10 );            
    };                            
};
#include "magic/statpropstg_t.end.hpp"
SDK_VERIFY( struct tag::statpropstg_t, 0x10 );
