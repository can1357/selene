#pragma once
#include <sdkgen/support_library.hpp>
#include "report_hw_error_device_driver_flags_t.hpp"

#include "magic/packet_log_data_t.start.hpp"
namespace whea
{
    // [struct _WHEA_PACKET_LOG_DATA]
    // => WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct packet_log_data_t                         
    {                                                
        using flags_t = union whea::report_hw_error_device_driver_flags_t;                
                                                     
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                                           
        _m00 sdk::array<uint8_t, 36> log_data;         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .LogData
        _m01 sdk::array<uint8_t, 36> extra_bytes;      //{ +0x0024    +0x0024    +0x0024    +0x0024    } | .ExtraBytes
        _m02 uint64_t                bc_param3;        //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .BcParam3
        _m03 uint64_t                bc_param4;        //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .BcParam4
        _m04 uint32_t                log_data_length;  //{ +0x0058    +0x0058    +0x0058    +0x0058    } | .LogDataLength
        _m05 uint16_t                log_tag;          //{ +0x005c    +0x005c    +0x005c    +0x005c    } | .LogTag
        _m06 flags_t                 flags;            //{ +0x0060    +0x0060    +0x0060    +0x0060    } | .Flags
                                                     
        SDK_NONVOL_PROPERTIES( "_WHEA_PACKET_LOG_DATA.$", 0x68, true, 0x92ed123303ab8243 );                
        SDK_FIXED_SIZE( packet_log_data_t, 0x68 );                
    };                                               
};
#include "magic/packet_log_data_t.end.hpp"
SDK_VERIFY( struct whea::packet_log_data_t, 0x68 );
