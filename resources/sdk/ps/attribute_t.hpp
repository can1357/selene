#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/attribute_t.start.hpp"
namespace ps
{
    // [struct _PS_ATTRIBUTE]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct attribute_t               
    {                                
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                           
        _m00 uint64_t  attribute;      //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Attribute
        _m01 uint64_t  size;           //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .Size
        _m02 uint64_t  value;          //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .Value
        _m03 void*     value_ptr;      //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .ValuePtr
        _m04 uint64_t* return_length;  //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .ReturnLength
                                     
        SDK_NONVOL_PROPERTIES( "_PS_ATTRIBUTE.$", 0x20, true, 0xfeff5c20112487fc );              
        SDK_FIXED_SIZE( attribute_t, 0x20 );              
    };                               
};
#include "magic/attribute_t.end.hpp"
SDK_VERIFY( struct ps::attribute_t, 0x20 );
