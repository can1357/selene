#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/plugplay_control_property_data_t.start.hpp"
namespace win
{
    // [struct _PLUGPLAY_CONTROL_PROPERTY_DATA]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct plugplay_control_property_data_t   
    {                                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                                    
        _m00 nt::unicode_view device_instance;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .DeviceInstance
        _m01 uint32_t         property_type;    //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .PropertyType
        _m02 void*            buffer;           //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .Buffer
        _m03 uint32_t         buffer_size;      //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .BufferSize
                                              
        SDK_MAGIC_PROPERTIES( "_PLUGPLAY_CONTROL_PROPERTY_DATA.$", 0x28, true, 0x8b38c95680c9e4f5 );                
        SDK_FIXED_SIZE( plugplay_control_property_data_t, 0x28 );                
    };                                        
};
#include "magic/plugplay_control_property_data_t.end.hpp"
SDK_VERIFY( struct win::plugplay_control_property_data_t, 0x28 );
