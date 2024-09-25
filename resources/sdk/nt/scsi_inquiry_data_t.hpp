#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/scsi_inquiry_data_t.start.hpp"
namespace nt
{
    // [struct _SCSI_INQUIRY_DATA]
    // => WDK 10 (NV)
    //
    struct scsi_inquiry_data_t                               
    {                                                        
        // WDK 10                                            
        //                                                   
        _m00 uint8_t                path_id;                   //{ +0x0000    } | .PathId
        _m01 uint8_t                target_id;                 //{ +0x0001    } | .TargetId
        _m02 uint8_t                lun;                       //{ +0x0002    } | .Lun
        _m03 uint8_t                device_claimed;            //{ +0x0003    } | .DeviceClaimed
        _m04 uint32_t               inquiry_data_length;       //{ +0x0004    } | .InquiryDataLength
        _m05 uint32_t               next_inquiry_data_offset;  //{ +0x0008    } | .NextInquiryDataOffset
        _m06 sdk::array<uint8_t, 1> inquiry_data;              //{ +0x000c    } | .InquiryData
                                                             
        SDK_NONVOL_PROPERTIES( "_SCSI_INQUIRY_DATA.$", 0x0, false, 0xedf2e77c6c8106d6 );                         
        SDK_FIXED_SIZE( scsi_inquiry_data_t, 0x10 );                         
    };                                                       
};
#include "magic/scsi_inquiry_data_t.end.hpp"
SDK_VERIFY( struct nt::scsi_inquiry_data_t, 0x10 );
