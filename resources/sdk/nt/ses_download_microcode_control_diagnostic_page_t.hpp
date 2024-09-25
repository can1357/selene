#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/ses_download_microcode_control_diagnostic_page_t.start.hpp"
namespace nt
{
    // [struct _SES_DOWNLOAD_MICROCODE_CONTROL_DIAGNOSTIC_PAGE]
    // => WDK 10 (NV)
    //
    struct ses_download_microcode_control_diagnostic_page_t  
    {                                                        
        // WDK 10                                            
        //                                                   
        _m00 uint8_t                page_code;                 //{ +0x0000    } | .PageCode
        _m01 uint8_t                sub_enclosure_id;          //{ +0x0001    } | .SubEnclosureId
        _m02 sdk::array<uint8_t, 2> page_length;               //{ +0x0002    } | .PageLength
        _m03 sdk::array<uint8_t, 4> expected_generation_code;  //{ +0x0004    } | .ExpectedGenerationCode
        _m04 uint8_t                mode;                      //{ +0x0008    } | .Mode
        _m05 uint8_t                buffer_id;                 //{ +0x000b    } | .BufferID
        _m06 sdk::array<uint8_t, 4> buffer_offset;             //{ +0x000c    } | .BufferOffset
        _m07 sdk::array<uint8_t, 4> image_length;              //{ +0x0010    } | .ImageLength
        _m08 sdk::array<uint8_t, 4> data_length;               //{ +0x0014    } | .DataLength
        _m09 sdk::array<uint8_t, 1> data;                      //{ +0x0018    } | .Data
                                                             
        SDK_NONVOL_PROPERTIES( "_SES_DOWNLOAD_MICROCODE_CONTROL_DIAGNOSTIC_PAGE.$", 0x0, false, 0x91bf439e27e09c81 );                         
        SDK_FIXED_SIZE( ses_download_microcode_control_diagnostic_page_t, 0x19 );                         
    };                                                       
};
#include "magic/ses_download_microcode_control_diagnostic_page_t.end.hpp"
SDK_VERIFY( struct nt::ses_download_microcode_control_diagnostic_page_t, 0x19 );
