#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/vpd_ata_information_page_t.start.hpp"
namespace nt
{
    // [struct _VPD_ATA_INFORMATION_PAGE]
    // => WDK 10 (NV)
    //
    struct vpd_ata_information_page_t                        
    {                                                        
        // WDK 10                                            
        //                                                   
        _m00 uint5_t                  device_type;             //{ +0x0000@0  } | .DeviceType
        _m01 uint3_t                  device_type_qualifier;   //{ +0x0000@5  } | .DeviceTypeQualifier
        _m02 uint8_t                  page_code;               //{ +0x0001    } | .PageCode
        _m03 sdk::array<uint8_t, 2>   page_length;             //{ +0x0002    } | .PageLength
        _m04 sdk::array<uint8_t, 8>   vendor_id;               //{ +0x0008    } | .VendorId
        _m05 sdk::array<uint8_t, 16>  product_id;              //{ +0x0010    } | .ProductId
        _m06 sdk::array<uint8_t, 4>   product_revision_level;  //{ +0x0020    } | .ProductRevisionLevel
        _m07 sdk::array<uint8_t, 20>  device_signature;        //{ +0x0024    } | .DeviceSignature
        _m08 uint8_t                  command_code;            //{ +0x0038    } | .CommandCode
        _m09 sdk::array<uint8_t, 512> identify_device_data;    //{ +0x003c    } | .IdentifyDeviceData
                                                             
        SDK_NONVOL_PROPERTIES( "_VPD_ATA_INFORMATION_PAGE.$", 0x0, false, 0x27aa1297598e833c );                       
        SDK_FIXED_SIZE( vpd_ata_information_page_t, 0x23c );                       
    };                                                       
};
#include "magic/vpd_ata_information_page_t.end.hpp"
SDK_VERIFY( struct nt::vpd_ata_information_page_t, 0x23c );
