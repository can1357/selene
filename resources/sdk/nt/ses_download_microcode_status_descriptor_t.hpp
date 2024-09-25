#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/ses_download_microcode_status_descriptor_t.start.hpp"
namespace nt
{
    // [struct _SES_DOWNLOAD_MICROCODE_STATUS_DESCRIPTOR]
    // => WDK 10 (NV)
    //
    struct ses_download_microcode_status_descriptor_t      
    {                                                      
        // WDK 10                                          
        //                                                 
        _m00 uint8_t                sub_enclosure_id;        //{ +0x0001    } | .SubEnclosureId
        _m01 uint8_t                status;                  //{ +0x0002    } | .Status
        _m02 uint8_t                additional_status;       //{ +0x0003    } | .AdditionalStatus
        _m03 sdk::array<uint8_t, 4> maximum_image_size;      //{ +0x0004    } | .MaximumImageSize
        _m04 uint8_t                expected_buffer_id;      //{ +0x000b    } | .ExpectedBufferId
        _m05 uint8_t                expected_buffer_offset;  //{ +0x000c    } | .ExpectedBufferOffset
                                                           
        SDK_NONVOL_PROPERTIES( "_SES_DOWNLOAD_MICROCODE_STATUS_DESCRIPTOR.$", 0x0, false, 0xbb4be44d1bbbf4da );                       
        SDK_FIXED_SIZE( ses_download_microcode_status_descriptor_t, 0xd );                       
    };                                                     
};
#include "magic/ses_download_microcode_status_descriptor_t.end.hpp"
SDK_VERIFY( struct nt::ses_download_microcode_status_descriptor_t, 0xd );
