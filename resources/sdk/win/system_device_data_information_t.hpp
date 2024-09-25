#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/system_device_data_information_t.start.hpp"
namespace win
{
    // [struct _SYSTEM_DEVICE_DATA_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct system_device_data_information_t      
    {                                            
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                                       
        _m00 nt::unicode_view device_id;           //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .DeviceId
        _m01 nt::unicode_view data_name;           //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .DataName
        _m02 uint32_t         data_type;           //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .DataType
        _m03 uint32_t         data_buffer_length;  //{ +0x0024    +0x0024    +0x0024    +0x0024    } | .DataBufferLength
        _m04 void*            data_buffer;         //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .DataBuffer
                                                 
        SDK_MAGIC_PROPERTIES( "_SYSTEM_DEVICE_DATA_INFORMATION.$", 0x30, true, 0x2a3cbd8d48bdd0ce );                   
        SDK_FIXED_SIZE( system_device_data_information_t, 0x30 );                   
    };                                           
};
#include "magic/system_device_data_information_t.end.hpp"
SDK_VERIFY( struct win::system_device_data_information_t, 0x30 );
