#pragma once
#include <sdkgen/support_library.hpp>
#include "device_io_type_t.hpp"

#include "magic/io_type_config_v1_17_t.start.hpp"
namespace wdf
{
    // [struct _WDF_IO_TYPE_CONFIG_V1_17]
    // => Windows 10 v1607
    //
    struct io_type_config_v1_17_t                                 
    {                                                             
        // Windows 10 v1607                                       
        //                                                        
        _m00 uint32_t                   size;                       //{ +0x0000    } | .Size
        _m01 enum wdf::device_io_type_t read_write_io_type;         //{ +0x0004    } | .ReadWriteIoType
        _m02 enum wdf::device_io_type_t device_control_io_type;     //{ +0x0008    } | .DeviceControlIoType
        _m03 uint32_t                   direct_transfer_threshold;  //{ +0x000c    } | .DirectTransferThreshold
                                                                  
        SDK_MAGIC_PROPERTIES( "_WDF_IO_TYPE_CONFIG_V1_17.$", 0x0, false, 0xae375bb75492f66b );                          
        SDK_FIXED_SIZE( io_type_config_v1_17_t, 0x10 );                          
    };                                                            
};
#include "magic/io_type_config_v1_17_t.end.hpp"
SDK_VERIFY( struct wdf::io_type_config_v1_17_t, 0x10 );
