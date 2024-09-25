#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/ace_data_t.start.hpp"
namespace rtl
{
    // [struct RTL_ACE_DATA]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ace_data_t               
    {                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                          
        _m00 uint8_t  ace_type;       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .AceType
        _m01 uint8_t  inherit_flags;  //{ +0x0001    +0x0001    +0x0001    +0x0001    } | .InheritFlags
        _m02 uint8_t  ace_flags;      //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .AceFlags
        _m03 uint32_t mask;           //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Mask
        _m04 void**   sid;            //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Sid
                                    
        SDK_MAGIC_PROPERTIES( "RTL_ACE_DATA.$", 0x10, true, 0x476c29de35afabd1 );              
        SDK_FIXED_SIZE( ace_data_t, 0x10 );              
    };                              
};
#include "magic/ace_data_t.end.hpp"
SDK_VERIFY( struct rtl::ace_data_t, 0x10 );
