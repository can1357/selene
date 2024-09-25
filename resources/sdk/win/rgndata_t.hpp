#pragma once
#include <sdkgen/support_library.hpp>
#include "rgndataheader_t.hpp"

#include "magic/rgndata_t.start.hpp"
namespace win
{
    // [struct _RGNDATA]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct rgndata_t                            
    {                                           
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2       
        //                                      
        _m00 struct win::rgndataheader_t rdh;     //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .rdh
        _m01 sdk::array<char, 1>         buffer;  //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | .Buffer
                                                
        SDK_NONVOL_PROPERTIES( "_RGNDATA.$", 0x24, true, 0x16ab6b2bc3b4f6a8 );       
        SDK_FIXED_SIZE( rgndata_t, 0x24 );       
    };                                          
};
#include "magic/rgndata_t.end.hpp"
SDK_VERIFY( struct win::rgndata_t, 0x24 );
