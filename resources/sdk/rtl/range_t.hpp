#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/range_t.start.hpp"
namespace rtl
{
    // [struct _RTL_RANGE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct range_t               
    {                            
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                       
        _m00 uint64_t start;       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Start
        _m01 uint64_t end;         //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .End
        _m02 void*    user_data;   //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .UserData
        _m03 void*    owner;       //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .Owner
        _m04 uint8_t  attributes;  //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .Attributes
        _m05 uint8_t  flags;       //{ +0x0021    +0x0021    +0x0021    +0x0021    } | .Flags
                                 
        SDK_MAGIC_PROPERTIES( "_RTL_RANGE.$", 0x28, true, 0x806f61a83c44395a );           
        SDK_FIXED_SIZE( range_t, 0x28 );           
    };                           
};
#include "magic/range_t.end.hpp"
SDK_VERIFY( struct rtl::range_t, 0x28 );
