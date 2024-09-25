#pragma once
#include <sdkgen/support_library.hpp>
#include "rect_t.hpp"
#include "point_t.hpp"

#include "magic/touch_hit_testing_input_t.start.hpp"
namespace tag
{
    // [struct tagTOUCH_HIT_TESTING_INPUT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct touch_hit_testing_input_t                       
    {                                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                          
        //                                                 
        _m00 uint32_t            pointer_id;                 //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .pointerId
        _m01 struct tag::point_t point;                      //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .point
        _m02 struct tag::rect_t  bounding_box;               //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .boundingBox
        _m03 struct tag::rect_t  non_occluded_bounding_box;  //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .nonOccludedBoundingBox
        _m04 uint32_t            orientation;                //{ +0x002c    +0x002c    +0x002c    +0x002c    } | .orientation
                                                           
        SDK_MAGIC_PROPERTIES( "tagTOUCH_HIT_TESTING_INPUT.$", 0x30, true, 0xf8d93b6a18986003 );                          
        SDK_FIXED_SIZE( touch_hit_testing_input_t, 0x30 );                          
    };                                                     
};
#include "magic/touch_hit_testing_input_t.end.hpp"
SDK_VERIFY( struct tag::touch_hit_testing_input_t, 0x30 );
