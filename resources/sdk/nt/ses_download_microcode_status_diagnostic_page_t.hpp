#pragma once
#include <sdkgen/support_library.hpp>
#include "ses_download_microcode_status_descriptor_t.hpp"

#include "magic/ses_download_microcode_status_diagnostic_page_t.start.hpp"
namespace nt
{
    // [struct _SES_DOWNLOAD_MICROCODE_STATUS_DIAGNOSTIC_PAGE]
    // => WDK 10 (NV)
    //
    struct ses_download_microcode_status_diagnostic_page_t             
    {                                                                  
        using descriptors_t = sdk::array<struct nt::ses_download_microcode_status_descriptor_t, 1>;                                   
                                                                       
        // WDK 10                                                      
        //                                                             
        _m00 uint8_t                page_code;                           //{ +0x0000    } | .PageCode
        _m01 uint8_t                number_of_secondary_sub_enclosures;  //{ +0x0001    } | .NumberOfSecondarySubEnclosures
        _m02 sdk::array<uint8_t, 2> page_length;                         //{ +0x0002    } | .PageLength
        _m03 sdk::array<uint8_t, 4> generation_code;                     //{ +0x0004    } | .GenerationCode
        _m04 descriptors_t          descriptors;                         //{ +0x0008    } | .Descriptors
                                                                       
        SDK_NONVOL_PROPERTIES( "_SES_DOWNLOAD_MICROCODE_STATUS_DIAGNOSTIC_PAGE.$", 0x0, false, 0xd663c9ad9d3eef0d );                                   
        SDK_FIXED_SIZE( ses_download_microcode_status_diagnostic_page_t, 0x15 );                                   
    };                                                                 
};
#include "magic/ses_download_microcode_status_diagnostic_page_t.end.hpp"
SDK_VERIFY( struct nt::ses_download_microcode_status_diagnostic_page_t, 0x15 );
