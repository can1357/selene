#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/extended_parameter_t.start.hpp"
namespace cm
{
    // [struct CM_EXTENDED_PARAMETER]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct extended_parameter_t   
    {                             
        // Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                        
        _m00 uint8_t  type;         //{ +0x0000@0  +0x0000@0  +0x0000@0  } | .Type
        _m01 uint64_t u_long64;     //{ +0x0008    +0x0008    +0x0008    } | .ULong64
        _m02 void*    pointer;      //{ +0x0008    +0x0008    +0x0008    } | .Pointer
        _m03 uint64_t size;         //{ +0x0008    +0x0008    +0x0008    } | .Size
        _m04 void*    handle;       //{ +0x0008    +0x0008    +0x0008    } | .Handle
        _m05 uint32_t u_long;       //{ +0x0008    +0x0008    +0x0008    } | .ULong
        _m06 uint32_t access_mask;  //{ +0x0008    +0x0008    +0x0008    } | .AccessMask
                                  
        SDK_MAGIC_PROPERTIES( "CM_EXTENDED_PARAMETER.$", 0x10, true, 0x33998618522add69 );            
        SDK_FIXED_SIZE( extended_parameter_t, 0x10 );            
    };                            
};
#include "magic/extended_parameter_t.end.hpp"
SDK_VERIFY( struct cm::extended_parameter_t, 0x10 );
