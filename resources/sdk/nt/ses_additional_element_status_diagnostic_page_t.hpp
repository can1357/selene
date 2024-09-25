#pragma once
#include <sdkgen/support_library.hpp>
#include "ses_additional_element_status_descriptor_t.hpp"

#include "magic/ses_additional_element_status_diagnostic_page_t.start.hpp"
namespace nt
{
    // [struct _SES_ADDITIONAL_ELEMENT_STATUS_DIAGNOSTIC_PAGE]
    // => WDK 10 (NV)
    //
    struct ses_additional_element_status_diagnostic_page_t
    {                                                     
        using descriptors_t = sdk::array<struct nt::ses_additional_element_status_descriptor_t, 1>;                
                                                          
        // WDK 10                                   
        //                                          
        _m00 uint8_t                page_code;              //{ +0x0000    } | .PageCode
        _m01 sdk::array<uint8_t, 2> page_length;            //{ +0x0002    } | .PageLength
        _m02 sdk::array<uint8_t, 4> generation_code;        //{ +0x0004    } | .GenerationCode
        _m03 descriptors_t          descriptors;            //{ +0x0008    } | .Descriptors
                                                          
        SDK_NONVOL_PROPERTIES( "_SES_ADDITIONAL_ELEMENT_STATUS_DIAGNOSTIC_PAGE.$", 0x0, false, 0x5cd210baa60ef8ea );                
        SDK_FIXED_SIZE( ses_additional_element_status_diagnostic_page_t, 0x2c );                
    };                                                    
};
#include "magic/ses_additional_element_status_diagnostic_page_t.end.hpp"
SDK_VERIFY( struct nt::ses_additional_element_status_diagnostic_page_t, 0x2c );
