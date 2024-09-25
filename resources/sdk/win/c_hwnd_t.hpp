#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/c_hwnd_t.start.hpp"
namespace win
{
    struct hwnd_t;

    // [class CHwnd]
    // => Windows 10 v1607
    //
    class c_hwnd_t                      
    {                                   
        // Windows 10 v1607             
        //                              
        _m00 struct win::hwnd_t* m_hwnd;  //{ +0x0000    } | .m_hwnd
                                        
        SDK_MAGIC_PROPERTIES( "CHwnd.$", 0x0, false, 0x51fdb2d4a88af5aa );       
        SDK_FIXED_SIZE( c_hwnd_t, 0x8 );       
    };                                  
};
#include "magic/c_hwnd_t.end.hpp"
SDK_VERIFY( class win::c_hwnd_t, 0x8 );
