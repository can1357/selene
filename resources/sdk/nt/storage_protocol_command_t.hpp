#pragma once
#include <sdkgen/support_library.hpp>
#include "storage_protocol_type_t.hpp"

#include "magic/storage_protocol_command_t.start.hpp"
namespace nt
{
    // [struct _STORAGE_PROTOCOL_COMMAND]
    // => WDK 10 (NV)
    //
    struct storage_protocol_command_t                                          
    {                                                                          
        // WDK 10                                                              
        //                                                                     
        _m00 uint32_t                         version;                           //{ +0x0000    } | .Version
        _m01 uint32_t                         length;                            //{ +0x0004    } | .Length
        _m02 enum nt::storage_protocol_type_t protocol_type;                     //{ +0x0008    } | .ProtocolType
        _m03 uint32_t                         flags;                             //{ +0x000c    } | .Flags
        _m04 uint32_t                         return_status;                     //{ +0x0010    } | .ReturnStatus
        _m05 uint32_t                         error_code;                        //{ +0x0014    } | .ErrorCode
        _m06 uint32_t                         command_length;                    //{ +0x0018    } | .CommandLength
        _m07 uint32_t                         error_info_length;                 //{ +0x001c    } | .ErrorInfoLength
        _m08 uint32_t                         data_to_device_transfer_length;    //{ +0x0020    } | .DataToDeviceTransferLength
        _m09 uint32_t                         data_from_device_transfer_length;  //{ +0x0024    } | .DataFromDeviceTransferLength
        _m10 uint32_t                         time_out_value;                    //{ +0x0028    } | .TimeOutValue
        _m11 uint32_t                         error_info_offset;                 //{ +0x002c    } | .ErrorInfoOffset
        _m12 uint32_t                         data_to_device_buffer_offset;      //{ +0x0030    } | .DataToDeviceBufferOffset
        _m13 uint32_t                         data_from_device_buffer_offset;    //{ +0x0034    } | .DataFromDeviceBufferOffset
        _m14 uint32_t                         command_specific;                  //{ +0x0038    } | .CommandSpecific
        _m15 uint32_t                         fixed_protocol_return_data;        //{ +0x0040    } | .FixedProtocolReturnData
        _m16 sdk::array<uint8_t, 1>           command;                           //{ +0x0050    } | .Command
                                                                               
        SDK_NONVOL_PROPERTIES( "_STORAGE_PROTOCOL_COMMAND.$", 0x0, false, 0x7e6285bd2c6d3d97 );                                 
        SDK_FIXED_SIZE( storage_protocol_command_t, 0x54 );                                 
    };                                                                         
};
#include "magic/storage_protocol_command_t.end.hpp"
SDK_VERIFY( struct nt::storage_protocol_command_t, 0x54 );
