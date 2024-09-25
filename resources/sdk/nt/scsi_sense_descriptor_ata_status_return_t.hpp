#pragma once
#include <sdkgen/support_library.hpp>
#include "../stor/port/scsi_sense_descriptor_header_t.hpp"

#include "magic/scsi_sense_descriptor_ata_status_return_t.start.hpp"
namespace nt
{
    // [struct _SCSI_SENSE_DESCRIPTOR_ATA_STATUS_RETURN]
    // => WDK 10 (NV)
    //
    struct scsi_sense_descriptor_ata_status_return_t
    {                                               
        using header_t = struct stor::port::scsi_sense_descriptor_header_t;                 
                                                    
        // WDK 10                       
        //                              
        _m00 header_t  header;                        //{ +0x0000    } | .Header
        _m01 uint1_t   extend;                        //{ +0x0002@0  } | .Extend
        _m02 uint8_t   error;                         //{ +0x0003    } | .Error
        _m03 uint8_t   sector_count15_8;              //{ +0x0004    } | .SectorCount15_8
        _m04 uint8_t   sector_count7_0;               //{ +0x0005    } | .SectorCount7_0
        _m05 uint8_t   lba_low15_8;                   //{ +0x0006    } | .LbaLow15_8
        _m06 uint8_t   lba_low7_0;                    //{ +0x0007    } | .LbaLow7_0
        _m07 uint8_t   lba_mid15_8;                   //{ +0x0008    } | .LbaMid15_8
        _m08 uint8_t   lba_mid7_0;                    //{ +0x0009    } | .LbaMid7_0
        _m09 uint8_t   lba_high15_8;                  //{ +0x000a    } | .LbaHigh15_8
        _m10 uint8_t   lba_high7_0;                   //{ +0x000b    } | .LbaHigh7_0
        _m11 uint8_t   device;                        //{ +0x000c    } | .Device
        _m12 uint8_t   status;                        //{ +0x000d    } | .Status
                                                    
        SDK_NONVOL_PROPERTIES( "_SCSI_SENSE_DESCRIPTOR_ATA_STATUS_RETURN.$", 0x0, false, 0xbe7840f88744e13d );                 
        SDK_FIXED_SIZE( scsi_sense_descriptor_ata_status_return_t, 0xe );                 
    };                                              
};
#include "magic/scsi_sense_descriptor_ata_status_return_t.end.hpp"
SDK_VERIFY( struct nt::scsi_sense_descriptor_ata_status_return_t, 0xe );
