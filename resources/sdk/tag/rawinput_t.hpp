#pragma once
#include <sdkgen/support_library.hpp>
#include "rawhid_t.hpp"
#include "rawmouse_t.hpp"
#include "rawkeyboard_t.hpp"
#include "rawinputheader_t.hpp"

#include "magic/rawinput_t.start.hpp"
namespace tag
{
    // [struct tagRAWINPUT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct rawinput_t                                      
    {                                                      
        union u0_data_t                                    
        {                                                  
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
            //                                             
            _m01 struct tag::rawmouse_t    mouse;            //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .mouse
            _m02 struct tag::rawkeyboard_t keyboard;         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .keyboard
            _m03 struct tag::rawhid_t      hid;              //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .hid
                                                           
            SDK_MAGIC_PROPERTIES( "tagRAWINPUT.data.$", 0x18, true, 0x418c7adf0ed72f45 );                
            SDK_FIXED_SIZE( u0_data_t, 0x18 );                
        };                                                 
                                                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2       
        //                                                 
        _m00 struct tag::rawinputheader_t           header;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .header
        _m04 u0_data_t                              data;    //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .data
                                                           
        SDK_MAGIC_PROPERTIES( "tagRAWINPUT.$", 0x30, true, 0x7abcf007411cbb5f );       
        SDK_FIXED_SIZE( rawinput_t, 0x30 );                
    };                                                     
};
#include "magic/rawinput_t.end.hpp"
SDK_VERIFY( union tag::rawinput_t::u0_data_t, 0x18 );
SDK_VERIFY( struct tag::rawinput_t, 0x30 );
