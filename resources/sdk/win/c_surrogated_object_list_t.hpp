#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/c_surrogated_object_list_t.start.hpp"
namespace win
{
    struct hwnd_t;
    class c_surrogated_object_list_t;
    struct i_ole_in_place_active_object_t;

    // [class CSurrogatedObjectList]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class c_surrogated_object_list_t                                      
    {                                                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                                                                
        _m00 struct win::i_ole_in_place_active_object_t* p_inplace_object;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | ._pInplaceObject
        _m01 struct win::hwnd_t*                         h_wnd;             //{ +0x0008    +0x0008    +0x0008    +0x0008    } | ._hWnd
        _m02 class win::c_surrogated_object_list_t*      p_next;            //{ +0x0010    +0x0010    +0x0010    +0x0010    } | ._pNext
                                                                          
        SDK_MAGIC_PROPERTIES( "CSurrogatedObjectList.$", 0x18, true, 0xdf1b15857344fab0 );                 
        SDK_FIXED_SIZE( c_surrogated_object_list_t, 0x18 );                 
    };                                                                    
};
#include "magic/c_surrogated_object_list_t.end.hpp"
SDK_VERIFY( class win::c_surrogated_object_list_t, 0x18 );
