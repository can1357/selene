#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/msf_t.start.hpp"
namespace stor::port
{
    // [struct _MSF]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct msf_t                
    {                           
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                      
        _m00 uint8_t starting_m;  //{ +0x0001    +0x0001    +0x0001    +0x0001    +0x0001    } | .StartingM
        _m01 uint8_t starting_s;  //{ +0x0002    +0x0002    +0x0002    +0x0002    +0x0002    } | .StartingS
        _m02 uint8_t starting_f;  //{ +0x0003    +0x0003    +0x0003    +0x0003    +0x0003    } | .StartingF
        _m03 uint8_t ending_m;    //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .EndingM
        _m04 uint8_t ending_s;    //{ +0x0005    +0x0005    +0x0005    +0x0005    +0x0005    } | .EndingS
        _m05 uint8_t ending_f;    //{ +0x0006    +0x0006    +0x0006    +0x0006    +0x0006    } | .EndingF
                                
        SDK_NONVOL_PROPERTIES( "_MSF.$", 0x8, true, 0x204077a733e445d1 );           
        SDK_FIXED_SIZE( msf_t, 0x8 );           
    };                          
};
#include "magic/msf_t.end.hpp"
SDK_VERIFY( struct stor::port::msf_t, 0x8 );
