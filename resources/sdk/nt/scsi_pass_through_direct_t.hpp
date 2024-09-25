#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/scsi_pass_through_direct_t.start.hpp"
namespace nt
{
    // [struct _SCSI_PASS_THROUGH_DIRECT]
    // => WDK 10 (NV)
    //
    struct scsi_pass_through_direct_t                     
    {                                                     
        // WDK 10                                         
        //                                                
        _m00 uint16_t                length;                //{ +0x0000    } | .Length
        _m01 uint8_t                 scsi_status;           //{ +0x0002    } | .ScsiStatus
        _m02 uint8_t                 path_id;               //{ +0x0003    } | .PathId
        _m03 uint8_t                 target_id;             //{ +0x0004    } | .TargetId
        _m04 uint8_t                 lun;                   //{ +0x0005    } | .Lun
        _m05 uint8_t                 cdb_length;            //{ +0x0006    } | .CdbLength
        _m06 uint8_t                 sense_info_length;     //{ +0x0007    } | .SenseInfoLength
        _m07 uint8_t                 data_in;               //{ +0x0008    } | .DataIn
        _m08 uint32_t                data_transfer_length;  //{ +0x000c    } | .DataTransferLength
        _m09 uint32_t                time_out_value;        //{ +0x0010    } | .TimeOutValue
        _m10 void*                   data_buffer;           //{ +0x0018    } | .DataBuffer
        _m11 uint32_t                sense_info_offset;     //{ +0x0020    } | .SenseInfoOffset
        _m12 sdk::array<uint8_t, 16> cdb;                   //{ +0x0024    } | .Cdb
                                                          
        SDK_NONVOL_PROPERTIES( "_SCSI_PASS_THROUGH_DIRECT.$", 0x0, false, 0x37ccede9ab023664 );                     
        SDK_FIXED_SIZE( scsi_pass_through_direct_t, 0x38 );                     
    };                                                    
};
#include "magic/scsi_pass_through_direct_t.end.hpp"
SDK_VERIFY( struct nt::scsi_pass_through_direct_t, 0x38 );
