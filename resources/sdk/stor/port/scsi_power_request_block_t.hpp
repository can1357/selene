#pragma once
#include <sdkgen/support_library.hpp>
#include "stor_power_action_t.hpp"
#include "stor_device_power_state_t.hpp"

namespace nt { struct scsi_request_block_t; }

#include "magic/scsi_power_request_block_t.start.hpp"
namespace stor::port
{
    // [struct _SCSI_POWER_REQUEST_BLOCK]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct scsi_power_request_block_t                                        
    {                                                                        
        enum class u0_power_action_t : int32_t                               
        {                                                                    
            none =           0x0,                                              // WDK 10
            reserved =       0x1,                                              // WDK 10
            sleep =          0x2,                                              // WDK 10
            hibernate =      0x3,                                              // WDK 10
            shutdown =       0x4,                                              // WDK 10
            shutdown_reset = 0x5,                                              // WDK 10
            shutdown_off =   0x6,                                              // WDK 10
            warm_eject =     0x7,                                              // WDK 10
        };                                                                   
                                                                             
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                                                   
        _m00 uint16_t                                   length;                //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Length
        _m01 uint8_t                                    function;              //{ +0x0002    +0x0002    +0x0002    +0x0002    +0x0002    } | .Function
        _m02 uint8_t                                    srb_status;            //{ +0x0003    +0x0003    +0x0003    +0x0003    +0x0003    } | .SrbStatus
        _m03 uint8_t                                    srb_power_flags;       //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .SrbPowerFlags
        _m04 uint8_t                                    path_id;               //{ +0x0005    +0x0005    +0x0005    +0x0005    +0x0005    } | .PathId
        _m05 uint8_t                                    target_id;             //{ +0x0006    +0x0006    +0x0006    +0x0006    +0x0006    } | .TargetId
        _m06 uint8_t                                    lun;                   //{ +0x0007    +0x0007    +0x0007    +0x0007    +0x0007    } | .Lun
        _m07 enum stor::port::stor_device_power_state_t device_power_state;    //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .DevicePowerState
        _m08 uint32_t                                   srb_flags;             //{ +0x000c    +0x000c    +0x000c    +0x000c    +0x000c    } | .SrbFlags
        _m09 uint32_t                                   data_transfer_length;  //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .DataTransferLength
        _m10 uint32_t                                   time_out_value;        //{ +0x0014    +0x0014    +0x0014    +0x0014    +0x0014    } | .TimeOutValue
        _m11 void*                                      data_buffer;           //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .DataBuffer
        _m12 void*                                      sense_info_buffer;     //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | .SenseInfoBuffer
        _m13 struct nt::scsi_request_block_t*           next_srb;              //{ +0x0028    +0x0028    +0x0028    +0x0028    +0x0028    } | .NextSrb
        _m14 void*                                      original_request;      //{ +0x0030    +0x0030    +0x0030    +0x0030    +0x0030    } | .OriginalRequest
        _m15 void*                                      srb_extension;         //{ +0x0038    +0x0038    +0x0038    +0x0038    +0x0038    } | .SrbExtension
        _m16 int32_t                                    power_action;          //{ +0x0040    +0x0040    +0x0040    +0x0040    +0x0040    } | .PowerAction
                                                                             
        SDK_NONVOL_PROPERTIES( "_SCSI_POWER_REQUEST_BLOCK.$", 0x58, true, 0x5fd6729aa8cc4f88 );                     
        SDK_FIXED_SIZE( scsi_power_request_block_t, 0x58 );                     
    };                                                                       
};
#include "magic/scsi_power_request_block_t.end.hpp"
SDK_VERIFY( struct stor::port::scsi_power_request_block_t, 0x58 );
