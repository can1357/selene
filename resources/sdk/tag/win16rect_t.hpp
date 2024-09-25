#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/win16rect_t.start.hpp"
namespace tag
{
    // [struct tagWIN16RECT]
    // => Windows 10 v1607
    //
    struct win16rect_t       
    {                        
        // Windows 10 v1607       
        //                   
        _m00 uint16_t left;    //{ +0x0000    } | .left
        _m01 uint16_t top;     //{ +0x0002    } | .top
        _m02 uint16_t right;   //{ +0x0004    } | .right
        _m03 uint16_t bottom;  //{ +0x0006    } | .bottom
                             
        SDK_MAGIC_PROPERTIES( "tagWIN16RECT.$", 0x0, false, 0xda1dd0e06d14c62b );       
        SDK_FIXED_SIZE( win16rect_t, 0x8 );       
    };                       
};
#include "magic/win16rect_t.end.hpp"
SDK_VERIFY( struct tag::win16rect_t, 0x8 );
