#pragma once
#include <sdkgen/support_library.hpp>

namespace win { struct hwnd_t; }

#include "magic/s_window_data_t.start.hpp"
namespace tag
{
    // [struct tagSWindowData]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct s_window_data_t                   
    {                                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                                   
        _m00 struct win::hwnd_t* h_wnd;        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .hWnd
        _m01 uint32_t            w_first_msg;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .wFirstMsg
        _m02 uint32_t            w_last_msg;   //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .wLastMsg
                                             
        SDK_MAGIC_PROPERTIES( "tagSWindowData.$", 0x10, true, 0xd98a606f521b72d9 );            
        SDK_FIXED_SIZE( s_window_data_t, 0x10 );            
    };                                       
};
#include "magic/s_window_data_t.end.hpp"
SDK_VERIFY( struct tag::s_window_data_t, 0x10 );
