#pragma once
#include <sdkgen/support_library.hpp>
#include "keybdinput_t.hpp"
#include "mouseinput_t.hpp"
#include "hardwareinput_t.hpp"

#include "magic/input_t.start.hpp"
namespace tag
{
    // [struct tagINPUT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct input_t                            
    {                                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2     
        //                                    
        _m00 uint32_t                    type;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .type
        _m01 struct tag::mouseinput_t    mi;    //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .mi
        _m02 struct tag::keybdinput_t    ki;    //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ki
        _m03 struct tag::hardwareinput_t hi;    //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .hi
                                              
        SDK_MAGIC_PROPERTIES( "tagINPUT.$", 0x28, true, 0x2c0f2eefd1f4f627 );     
        SDK_FIXED_SIZE( input_t, 0x28 );      
    };                                        
};
#include "magic/input_t.end.hpp"
SDK_VERIFY( struct tag::input_t, 0x28 );
