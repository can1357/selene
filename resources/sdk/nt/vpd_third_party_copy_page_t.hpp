#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/vpd_third_party_copy_page_t.start.hpp"
namespace nt
{
    // [struct _VPD_THIRD_PARTY_COPY_PAGE]
    // => WDK 10 (NV)
    //
    struct vpd_third_party_copy_page_t                           
    {                                                            
        // WDK 10                                                
        //                                                       
        _m00 uint5_t                device_type;                   //{ +0x0000@0  } | .DeviceType
        _m01 uint3_t                device_type_qualifier;         //{ +0x0000@5  } | .DeviceTypeQualifier
        _m02 uint8_t                page_code;                     //{ +0x0001    } | .PageCode
        _m03 sdk::array<uint8_t, 2> page_length;                   //{ +0x0002    } | .PageLength
        _m04 sdk::array<uint8_t, 1> third_party_copy_descriptors;  //{ +0x0004    } | .ThirdPartyCopyDescriptors
                                                                 
        SDK_NONVOL_PROPERTIES( "_VPD_THIRD_PARTY_COPY_PAGE.$", 0x0, false, 0xbc12c9063d6e5008 );                             
        SDK_FIXED_SIZE( vpd_third_party_copy_page_t, 0x5 );                             
    };                                                           
};
#include "magic/vpd_third_party_copy_page_t.end.hpp"
SDK_VERIFY( struct nt::vpd_third_party_copy_page_t, 0x5 );
