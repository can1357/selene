#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/ses_enclosure_descriptor_t.start.hpp"
namespace nt
{
    // [struct _SES_ENCLOSURE_DESCRIPTOR]
    // => WDK 10 (NV)
    //
    struct ses_enclosure_descriptor_t                                  
    {                                                                  
        // WDK 10                                                      
        //                                                             
        _m00 uint3_t                 number_of_enclosure_services;       //{ +0x0000@0  } | .NumberOfEnclosureServices
        _m01 uint3_t                 relative_enclosure_services_id;     //{ +0x0000@4  } | .RelativeEnclosureServicesId
        _m02 uint8_t                 sub_enclosure_id;                   //{ +0x0001    } | .SubEnclosureId
        _m03 uint8_t                 number_of_type_descriptor_headers;  //{ +0x0002    } | .NumberOfTypeDescriptorHeaders
        _m04 uint8_t                 enclosure_descriptor_length;        //{ +0x0003    } | .EnclosureDescriptorLength
        _m05 sdk::array<uint8_t, 8>  identifier;                         //{ +0x0004    } | .Identifier
        _m06 sdk::array<uint8_t, 8>  vendor_id;                          //{ +0x000c    } | .VendorId
        _m07 sdk::array<uint8_t, 16> product_id;                         //{ +0x0014    } | .ProductId
        _m08 sdk::array<uint8_t, 4>  product_revision_level;             //{ +0x0024    } | .ProductRevisionLevel
        _m09 sdk::array<uint8_t, 1>  vendor_specific;                    //{ +0x0028    } | .VendorSpecific
                                                                       
        SDK_NONVOL_PROPERTIES( "_SES_ENCLOSURE_DESCRIPTOR.$", 0x0, false, 0xda03cae92f2a486e );                                  
        SDK_FIXED_SIZE( ses_enclosure_descriptor_t, 0x29 );                                  
    };                                                                 
};
#include "magic/ses_enclosure_descriptor_t.end.hpp"
SDK_VERIFY( struct nt::ses_enclosure_descriptor_t, 0x29 );
