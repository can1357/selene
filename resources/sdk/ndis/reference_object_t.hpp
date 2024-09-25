#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/reference_object_t.start.hpp"
namespace ndis
{
    // [union _REFERENCE_OBJECT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    union reference_object_t          
    {                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                            
        _m00 uint1_t  deleting;         //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .Deleting
        _m01 uint30_t reference_count;  //{ +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  } | .ReferenceCount
        _m02 uint1_t  overflow;         //{ +0x0000@31 +0x0000@31 +0x0000@31 +0x0000@31 } | .Overflow
        _m03 int32_t  value;            //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Value
                                      
        SDK_MAGIC_PROPERTIES( "_REFERENCE_OBJECT.$", 0x4, true, 0xbf81f4d87661263e );                
        SDK_FIXED_SIZE( reference_object_t, 0x4 );                
    };                                
};
#include "magic/reference_object_t.end.hpp"
SDK_VERIFY( union ndis::reference_object_t, 0x4 );
