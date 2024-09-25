#pragma once
#include <sdkgen/support_library.hpp>
#include "point_t.hpp"

#include "magic/touch_hit_testing_proximity_evaluation_t.start.hpp"
namespace tag
{
    // [struct tagTOUCH_HIT_TESTING_PROXIMITY_EVALUATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct touch_hit_testing_proximity_evaluation_t
    {                                              
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                                      
        _m00 uint16_t            score;              //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .score
        _m01 struct tag::point_t adjusted_point;     //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .adjustedPoint
                                                   
        SDK_MAGIC_PROPERTIES( "tagTOUCH_HIT_TESTING_PROXIMITY_EVALUATION.$", 0xc, true, 0xeafd1b0b0a223f97 );               
        SDK_FIXED_SIZE( touch_hit_testing_proximity_evaluation_t, 0xc );               
    };                                             
};
#include "magic/touch_hit_testing_proximity_evaluation_t.end.hpp"
SDK_VERIFY( struct tag::touch_hit_testing_proximity_evaluation_t, 0xc );
