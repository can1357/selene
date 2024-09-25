#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/rid_device_info_mouse_t.start.hpp"
namespace tag
{
    // [struct tagRID_DEVICE_INFO_MOUSE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct rid_device_info_mouse_t           
    {                                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                       
        //                                   
        _m00 uint32_t dw_id;                   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .dwId
        _m01 uint32_t dw_number_of_buttons;    //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .dwNumberOfButtons
        _m02 uint32_t dw_sample_rate;          //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .dwSampleRate
        _m03 int32_t  f_has_horizontal_wheel;  //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .fHasHorizontalWheel
                                             
        SDK_MAGIC_PROPERTIES( "tagRID_DEVICE_INFO_MOUSE.$", 0x10, true, 0x49ebe26e1534141e );                       
        SDK_FIXED_SIZE( rid_device_info_mouse_t, 0x10 );                       
    };                                       
};
#include "magic/rid_device_info_mouse_t.end.hpp"
SDK_VERIFY( struct tag::rid_device_info_mouse_t, 0x10 );
