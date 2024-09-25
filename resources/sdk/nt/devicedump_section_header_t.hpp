#pragma once
#include <sdkgen/support_library.hpp>
#include "guid_t.hpp"

#include "magic/devicedump_section_header_t.start.hpp"
namespace nt
{
    // [struct _DEVICEDUMP_SECTION_HEADER]
    // => WDK 10 (NV)
    //
    struct devicedump_section_header_t                                  
    {                                                                   
        // WDK 10                                                       
        //                                                              
        _m00 struct nt::guid_t        guid_device_data_id;                //{ +0x0000    } | .guidDeviceDataId
        _m01 sdk::array<uint8_t, 16>  s_organization_id;                  //{ +0x0010    } | .sOrganizationID
        _m02 uint32_t                 dw_firmware_revision;               //{ +0x0020    } | .dwFirmwareRevision
        _m03 sdk::array<uint8_t, 32>  s_model_number;                     //{ +0x0024    } | .sModelNumber
        _m04 sdk::array<uint8_t, 32>  sz_device_manufacturing_id;         //{ +0x0044    } | .szDeviceManufacturingID
        _m05 uint32_t                 dw_flags;                           //{ +0x0064    } | .dwFlags
        _m06 uint32_t                 b_restricted_private_data_version;  //{ +0x0068    } | .bRestrictedPrivateDataVersion
        _m07 uint32_t                 dw_firmware_issue_id;               //{ +0x006c    } | .dwFirmwareIssueId
        _m08 sdk::array<uint8_t, 132> sz_issue_description_string;        //{ +0x0070    } | .szIssueDescriptionString
                                                                        
        SDK_NONVOL_PROPERTIES( "_DEVICEDUMP_SECTION_HEADER.$", 0x0, false, 0xa2adc396c94b3349 );                                  
        SDK_FIXED_SIZE( devicedump_section_header_t, 0xf4 );                                  
    };                                                                  
};
#include "magic/devicedump_section_header_t.end.hpp"
SDK_VERIFY( struct nt::devicedump_section_header_t, 0xf4 );
