#pragma once
#include <sdkgen/support_library.hpp>
#include "rid_device_info_hid_t.hpp"
#include "rid_device_info_mouse_t.hpp"
#include "rid_device_info_keyboard_t.hpp"

#include "magic/rid_device_info_t.start.hpp"
namespace tag
{
    // [struct tagRID_DEVICE_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct rid_device_info_t                                 
    {                                                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2         
        //                                                   
        _m00 uint32_t                               cb_size;   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .cbSize
        _m01 uint32_t                               dw_type;   //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .dwType
        _m02 struct tag::rid_device_info_mouse_t    mouse;     //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .mouse
        _m03 struct tag::rid_device_info_keyboard_t keyboard;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .keyboard
        _m04 struct tag::rid_device_info_hid_t      hid;       //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .hid
                                                             
        SDK_MAGIC_PROPERTIES( "tagRID_DEVICE_INFO.$", 0x20, true, 0x43b3fdef62a7ac23 );         
        SDK_FIXED_SIZE( rid_device_info_t, 0x20 );           
    };                                                       
};
#include "magic/rid_device_info_t.end.hpp"
SDK_VERIFY( struct tag::rid_device_info_t, 0x20 );
