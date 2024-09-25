#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/stor_identity_t.start.hpp"
namespace stor::port
{
    struct inquirydata_t;
    struct stor_ata_device_id_t;
    struct vpd_identification_page_t;
    struct stor_rich_device_description_t;

    // [struct _STOR_IDENTITY]
    // => Windows 11
    //
    struct stor_identity_t                                                         
    {                                                                              
        struct u0_flags_t                                                          
        {                                                                          
            // Windows 11                                                          
            //                                                                     
            _m02 uint1_t supports1667;                                               //{ +0x0000@0  } | .Supports1667
            _m03 uint1_t zoned_device;                                               //{ +0x0000@1  } | .ZonedDevice
            _m04 uint1_t zns_device;                                                 //{ +0x0000@2  } | .ZNSDevice
                                                                                   
            SDK_MAGIC_PROPERTIES( "_STOR_IDENTITY.Flags.$", 0x0, false, 0xf25238732a6c8117 );                                     
            SDK_FIXED_SIZE( u0_flags_t, 0x2 );                                     
        };                                                                         
                                                                                   
        using rich_device_description_t = struct stor::port::stor_rich_device_description_t*;                        
                                                                                   
        // Windows 11                                                              
        //                                                                         
        _m00 struct stor::port::inquirydata_t*             inquiry_data;             //{ +0x0000    } | .InquiryData
        _m01 nt::ascii_view                                serial_number;            //{ +0x0008    } | .SerialNumber
        _m05 u0_flags_t                                    flags;                    //{ +0x0018    } | .Flags
        _m06 struct stor::port::vpd_identification_page_t* device_id;                //{ +0x0020    } | .DeviceId
        _m07 struct stor::port::stor_ata_device_id_t*      ata_device_id;            //{ +0x0028    } | .AtaDeviceId
        _m08 rich_device_description_t                     rich_device_description;  //{ +0x0030    } | .RichDeviceDescription
                                                                                   
        SDK_MAGIC_PROPERTIES( "_STOR_IDENTITY.$", 0x0, false, 0x8ef9d840c2253c6f );                        
        SDK_FIXED_SIZE( stor_identity_t, 0x38 );                                   
    };                                                                             
};
#include "magic/stor_identity_t.end.hpp"
SDK_VERIFY( struct stor::port::stor_identity_t::u0_flags_t, 0x2 );
SDK_VERIFY( struct stor::port::stor_identity_t, 0x38 );
