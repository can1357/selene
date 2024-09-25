#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/input_transform_t.start.hpp"
namespace tag
{
    // [struct tagINPUT_TRANSFORM]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct input_transform_t                        
    {                                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2   
        //                                          
        _m00 float                               11;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | ._11
        _m01 float                               12;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | ._12
        _m02 float                               13;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | ._13
        _m03 float                               14;  //{ +0x000c    +0x000c    +0x000c    +0x000c    } | ._14
        _m04 float                               21;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | ._21
        _m05 float                               22;  //{ +0x0014    +0x0014    +0x0014    +0x0014    } | ._22
        _m06 float                               23;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | ._23
        _m07 float                               24;  //{ +0x001c    +0x001c    +0x001c    +0x001c    } | ._24
        _m08 float                               31;  //{ +0x0020    +0x0020    +0x0020    +0x0020    } | ._31
        _m09 float                               32;  //{ +0x0024    +0x0024    +0x0024    +0x0024    } | ._32
        _m10 float                               33;  //{ +0x0028    +0x0028    +0x0028    +0x0028    } | ._33
        _m11 float                               34;  //{ +0x002c    +0x002c    +0x002c    +0x002c    } | ._34
        _m12 float                               41;  //{ +0x0030    +0x0030    +0x0030    +0x0030    } | ._41
        _m13 float                               42;  //{ +0x0034    +0x0034    +0x0034    +0x0034    } | ._42
        _m14 float                               43;  //{ +0x0038    +0x0038    +0x0038    +0x0038    } | ._43
        _m15 float                               44;  //{ +0x003c    +0x003c    +0x003c    +0x003c    } | ._44
        _m16 sdk::array<sdk::array<float, 4>, 4> m;   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .m
                                                    
        SDK_MAGIC_PROPERTIES( "tagINPUT_TRANSFORM.$", 0x40, true, 0x8d76e144518fd8ee );   
        SDK_FIXED_SIZE( input_transform_t, 0x40 );   
    };                                              
};
#include "magic/input_transform_t.end.hpp"
SDK_VERIFY( struct tag::input_transform_t, 0x40 );
