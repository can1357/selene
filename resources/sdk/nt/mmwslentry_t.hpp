#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/mmwslentry_t.start.hpp"
namespace nt
{
    // [struct _MMWSLENTRY]
    // => Windows 10 v1607
    //
    struct mmwslentry_t                   
    {                                     
        // Windows 10 v1607                    
        //                                
        _m00 uint1_t  valid;                //{ +0x0000@0  } | .Valid
        _m01 uint1_t  hashed;               //{ +0x0000@2  } | .Hashed
        _m02 uint1_t  direct;               //{ +0x0000@3  } | .Direct
        _m03 uint5_t  protection;           //{ +0x0000@4  } | .Protection
        _m04 uint3_t  age;                  //{ +0x0000@9  } | .Age
        _m05 uint36_t virtual_page_number;  //{ +0x0000@12 } | .VirtualPageNumber
        _m06 uint4_t  high_active_flink;    //{ +0x0000@48 } | .HighActiveFlink
        _m07 uint4_t  high_active_blink;    //{ +0x0000@52 } | .HighActiveBlink
                                          
        SDK_MAGIC_PROPERTIES( "_MMWSLENTRY.$", 0x0, false, 0xc9af1e02bd8c0da6 );                    
        SDK_FIXED_SIZE( mmwslentry_t, 0x8 );                    
    };                                    
};
#include "magic/mmwslentry_t.end.hpp"
SDK_VERIFY( struct nt::mmwslentry_t, 0x8 );
