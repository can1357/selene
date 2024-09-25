#pragma once
#include <sdkgen/support_library.hpp>
#include "device_io_type_t.hpp"

#include "magic/io_type_config_t.start.hpp"
namespace wdf
{
    // [struct _WDF_IO_TYPE_CONFIG]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct io_type_config_t                                       
    {                                                             
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                          
        //                                                        
        _m00 uint32_t                   size;                       //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Size
        _m01 enum wdf::device_io_type_t read_write_io_type;         //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .ReadWriteIoType
        _m02 enum wdf::device_io_type_t device_control_io_type;     //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .DeviceControlIoType
        _m03 uint32_t                   direct_transfer_threshold;  //{ +0x000c    +0x000c    +0x000c    +0x000c    +0x000c    } | .DirectTransferThreshold
                                                                  
        SDK_NONVOL_PROPERTIES( "_WDF_IO_TYPE_CONFIG.$", 0x10, true, 0x2cfea5d4fd575965 );                          
        SDK_FIXED_SIZE( io_type_config_t, 0x10 );                          
    };                                                            
};
#include "magic/io_type_config_t.end.hpp"
SDK_VERIFY( struct wdf::io_type_config_t, 0x10 );
