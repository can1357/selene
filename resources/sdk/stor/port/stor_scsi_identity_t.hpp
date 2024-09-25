#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/stor_scsi_identity_t.start.hpp"
namespace stor::port
{
    struct inquirydata_t;
    struct stor_ata_device_id_t;
    struct vpd_identification_page_t;
    struct stor_rich_device_description_t;

    // [struct _STOR_SCSI_IDENTITY]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    //
    struct stor_scsi_identity_t                                                    
    {                                                                              
        using rich_device_description_t = struct stor::port::stor_rich_device_description_t*;                        
                                                                                   
        // Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2                        
        //                                                                         
        _m00 struct stor::port::inquirydata_t*             inquiry_data;             //{ +0x0000    +0x0000    +0x0000    } | .InquiryData
        _m01 nt::ascii_view                                serial_number;            //{ +0x0008    +0x0008    +0x0008    } | .SerialNumber
        _m02 uint8_t                                       supports1667;             //{ +0x0018    +0x0018    +0x0018    } | .Supports1667
        _m03 struct stor::port::vpd_identification_page_t* device_id;                //{ +0x0020    +0x0020    +0x0020    } | .DeviceId
        _m04 struct stor::port::stor_ata_device_id_t*      ata_device_id;            //{ +0x0028    +0x0028    +0x0028    } | .AtaDeviceId
        _m05 rich_device_description_t                     rich_device_description;  //{ +0x0030    +0x0030    +0x0030    } | .RichDeviceDescription
                                                                                   
        // Windows 10 v2004, Windows 10 v20H2                                      
        //                                                                         
        _m06 uint8_t                                       zoned_device;             //{ +0x0019    +0x0019    } | .ZonedDevice
                                                                                   
        SDK_MAGIC_PROPERTIES( "_STOR_SCSI_IDENTITY.$", 0x38, true, 0x19ed10d13e50d738 );                        
        SDK_FIXED_SIZE( stor_scsi_identity_t, 0x38 );                              
    };                                                                             
};
#include "magic/stor_scsi_identity_t.end.hpp"
SDK_VERIFY( struct stor::port::stor_scsi_identity_t, 0x38 );
