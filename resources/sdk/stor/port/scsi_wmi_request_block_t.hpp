#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/scsi_wmi_request_block_t.start.hpp"
namespace stor::port
{
    // [struct _SCSI_WMI_REQUEST_BLOCK]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct scsi_wmi_request_block_t        
    {                                      
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                 
        _m00 uint16_t length;                //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Length
        _m01 uint8_t  function;              //{ +0x0002    +0x0002    +0x0002    +0x0002    +0x0002    } | .Function
        _m02 uint8_t  srb_status;            //{ +0x0003    +0x0003    +0x0003    +0x0003    +0x0003    } | .SrbStatus
        _m03 uint8_t  wmi_sub_function;      //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .WMISubFunction
        _m04 uint8_t  path_id;               //{ +0x0005    +0x0005    +0x0005    +0x0005    +0x0005    } | .PathId
        _m05 uint8_t  target_id;             //{ +0x0006    +0x0006    +0x0006    +0x0006    +0x0006    } | .TargetId
        _m06 uint8_t  lun;                   //{ +0x0007    +0x0007    +0x0007    +0x0007    +0x0007    } | .Lun
        _m07 uint8_t  wmi_flags;             //{ +0x0009    +0x0009    +0x0009    +0x0009    +0x0009    } | .WMIFlags
        _m08 uint32_t srb_flags;             //{ +0x000c    +0x000c    +0x000c    +0x000c    +0x000c    } | .SrbFlags
        _m09 uint32_t data_transfer_length;  //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .DataTransferLength
        _m10 uint32_t time_out_value;        //{ +0x0014    +0x0014    +0x0014    +0x0014    +0x0014    } | .TimeOutValue
        _m11 void*    data_buffer;           //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .DataBuffer
        _m12 void*    data_path;             //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | .DataPath
        _m13 void*    original_request;      //{ +0x0030    +0x0030    +0x0030    +0x0030    +0x0030    } | .OriginalRequest
        _m14 void*    srb_extension;         //{ +0x0038    +0x0038    +0x0038    +0x0038    +0x0038    } | .SrbExtension
                                           
        SDK_NONVOL_PROPERTIES( "_SCSI_WMI_REQUEST_BLOCK.$", 0x58, true, 0xd253bee05e64b89c );                     
        SDK_FIXED_SIZE( scsi_wmi_request_block_t, 0x58 );                     
    };                                     
};
#include "magic/scsi_wmi_request_block_t.end.hpp"
SDK_VERIFY( struct stor::port::scsi_wmi_request_block_t, 0x58 );
