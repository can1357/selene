#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/rid_device_info_keyboard_t.start.hpp"
namespace tag
{
    // [struct tagRID_DEVICE_INFO_KEYBOARD]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct rid_device_info_keyboard_t            
    {                                            
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                           
        //                                       
        _m00 uint32_t dw_type;                     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .dwType
        _m01 uint32_t dw_sub_type;                 //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .dwSubType
        _m02 uint32_t dw_keyboard_mode;            //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .dwKeyboardMode
        _m03 uint32_t dw_number_of_function_keys;  //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .dwNumberOfFunctionKeys
        _m04 uint32_t dw_number_of_indicators;     //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .dwNumberOfIndicators
        _m05 uint32_t dw_number_of_keys_total;     //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .dwNumberOfKeysTotal
                                                 
        SDK_MAGIC_PROPERTIES( "tagRID_DEVICE_INFO_KEYBOARD.$", 0x18, true, 0x53b6c584fb858b94 );                           
        SDK_FIXED_SIZE( rid_device_info_keyboard_t, 0x18 );                           
    };                                           
};
#include "magic/rid_device_info_keyboard_t.end.hpp"
SDK_VERIFY( struct tag::rid_device_info_keyboard_t, 0x18 );
