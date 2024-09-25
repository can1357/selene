#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/scsi_request_block_t.start.hpp"
namespace nt
{
    struct scsi_request_block_t;

    // [struct _SCSI_REQUEST_BLOCK]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct scsi_request_block_t                                        
    {                                                                  
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                         
        //                                                             
        _m00 uint16_t                         length;                    //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Length
        _m01 uint8_t                          function;                  //{ +0x0002    +0x0002    +0x0002    +0x0002    +0x0002    } | .Function
        _m02 uint8_t                          srb_status;                //{ +0x0003    +0x0003    +0x0003    +0x0003    +0x0003    } | .SrbStatus
        _m03 uint8_t                          scsi_status;               //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .ScsiStatus
        _m04 uint8_t                          path_id;                   //{ +0x0005    +0x0005    +0x0005    +0x0005    +0x0005    } | .PathId
        _m05 uint8_t                          target_id;                 //{ +0x0006    +0x0006    +0x0006    +0x0006    +0x0006    } | .TargetId
        _m06 uint8_t                          lun;                       //{ +0x0007    +0x0007    +0x0007    +0x0007    +0x0007    } | .Lun
        _m07 uint8_t                          queue_tag;                 //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .QueueTag
        _m08 uint8_t                          queue_action;              //{ +0x0009    +0x0009    +0x0009    +0x0009    +0x0009    } | .QueueAction
        _m09 uint8_t                          cdb_length;                //{ +0x000a    +0x000a    +0x000a    +0x000a    +0x000a    } | .CdbLength
        _m10 uint8_t                          sense_info_buffer_length;  //{ +0x000b    +0x000b    +0x000b    +0x000b    +0x000b    } | .SenseInfoBufferLength
        _m11 uint32_t                         srb_flags;                 //{ +0x000c    +0x000c    +0x000c    +0x000c    +0x000c    } | .SrbFlags
        _m12 uint32_t                         data_transfer_length;      //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .DataTransferLength
        _m13 uint32_t                         time_out_value;            //{ +0x0014    +0x0014    +0x0014    +0x0014    +0x0014    } | .TimeOutValue
        _m14 void*                            data_buffer;               //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .DataBuffer
        _m15 void*                            sense_info_buffer;         //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | .SenseInfoBuffer
        _m16 struct nt::scsi_request_block_t* next_srb;                  //{ +0x0028    +0x0028    +0x0028    +0x0028    +0x0028    } | .NextSrb
        _m17 void*                            original_request;          //{ +0x0030    +0x0030    +0x0030    +0x0030    +0x0030    } | .OriginalRequest
        _m18 void*                            srb_extension;             //{ +0x0038    +0x0038    +0x0038    +0x0038    +0x0038    } | .SrbExtension
        _m19 uint32_t                         internal_status;           //{ +0x0040    +0x0040    +0x0040    +0x0040    +0x0040    } | .InternalStatus
        _m20 uint32_t                         queue_sort_key;            //{ +0x0040    +0x0040    +0x0040    +0x0040    +0x0040    } | .QueueSortKey
        _m21 uint32_t                         link_timeout_value;        //{ +0x0040    +0x0040    +0x0040    +0x0040    +0x0040    } | .LinkTimeoutValue
        _m22 sdk::array<uint8_t, 16>          cdb;                       //{ +0x0048    +0x0048    +0x0048    +0x0048    +0x0048    } | .Cdb
                                                                       
        SDK_NONVOL_PROPERTIES( "_SCSI_REQUEST_BLOCK.$", 0x58, true, 0x6e7d3fd6cc0201c0 );                         
        SDK_FIXED_SIZE( scsi_request_block_t, 0x58 );                         
    };                                                                 
};
#include "magic/scsi_request_block_t.end.hpp"
SDK_VERIFY( struct nt::scsi_request_block_t, 0x58 );
