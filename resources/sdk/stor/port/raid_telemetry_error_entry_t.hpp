#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/raid_telemetry_error_entry_t.start.hpp"
namespace stor::port
{
    // [struct _RAID_TELEMETRY_ERROR_ENTRY]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct raid_telemetry_error_entry_t               
    {                                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                
        //                                            
        _m00 uint8_t  srb_status;                       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .SrbStatus
        _m01 uint8_t  scsi_status;                      //{ +0x0001    +0x0001    +0x0001    +0x0001    } | .ScsiStatus
        _m02 uint8_t  sense_key;                        //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .SenseKey
        _m03 uint8_t  additional_sense_code;            //{ +0x0003    +0x0003    +0x0003    +0x0003    } | .AdditionalSenseCode
        _m04 uint8_t  additional_sense_code_qualifier;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .AdditionalSenseCodeQualifier
        _m05 uint8_t  cdb_op_code;                      //{ +0x0005    +0x0005    +0x0005    +0x0005    } | .CdbOpCode
        _m06 uint32_t io_size;                          //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .IoSize
        _m07 uint32_t io_latency;                       //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .IoLatency
        _m08 uint32_t wait_duration;                    //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .WaitDuration
        _m09 uint32_t queue_depth;                      //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .QueueDepth
        _m10 uint64_t lba;                              //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .LBA
        _m11 uint32_t quantity;                         //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .Quantity
        _m12 uint32_t position;                         //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .Position
                                                      
        SDK_MAGIC_PROPERTIES( "_RAID_TELEMETRY_ERROR_ENTRY.$", 0x28, true, 0x828c9777271ea734 );                                
        SDK_FIXED_SIZE( raid_telemetry_error_entry_t, 0x28 );                                
    };                                                
};
#include "magic/raid_telemetry_error_entry_t.end.hpp"
SDK_VERIFY( struct stor::port::raid_telemetry_error_entry_t, 0x28 );
