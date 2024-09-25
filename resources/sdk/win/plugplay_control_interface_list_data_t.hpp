#pragma once
#include <sdkgen/support_library.hpp>

namespace nt { struct guid_t; }

#include "magic/plugplay_control_interface_list_data_t.start.hpp"
namespace win
{
    // [struct _PLUGPLAY_CONTROL_INTERFACE_LIST_DATA]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct plugplay_control_interface_list_data_t   
    {                                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                          
        _m00 nt::unicode_view   device_instance;      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .DeviceInstance
        _m01 struct nt::guid_t* interface_guid;       //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .InterfaceGuid
        _m02 wchar_t*           interface_list;       //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .InterfaceList
        _m03 uint32_t           interface_list_size;  //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .InterfaceListSize
        _m04 uint32_t           flags;                //{ +0x0024    +0x0024    +0x0024    +0x0024    } | .Flags
                                                    
        SDK_MAGIC_PROPERTIES( "_PLUGPLAY_CONTROL_INTERFACE_LIST_DATA.$", 0x28, true, 0xb3f84efc9b4865a0 );                    
        SDK_FIXED_SIZE( plugplay_control_interface_list_data_t, 0x28 );                    
    };                                              
};
#include "magic/plugplay_control_interface_list_data_t.end.hpp"
SDK_VERIFY( struct win::plugplay_control_interface_list_data_t, 0x28 );
