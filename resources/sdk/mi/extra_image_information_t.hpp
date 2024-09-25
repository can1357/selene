#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/extra_image_information_t.start.hpp"
namespace mi
{
    // [struct _MI_EXTRA_IMAGE_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct extra_image_information_t                                   
    {                                                                  
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                 
        //                                                             
        _m00 uint32_t size_of_headers;                                   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .SizeOfHeaders
        _m01 uint32_t size_of_image;                                     //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .SizeOfImage
                                                                       
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                                 
        //                                                             
        _m02 uint32_t time_date_stamp;                                   //{ +0x0008    +0x0008    +0x0008    } | .TimeDateStamp
                                                                       
        // Windows 11, Windows 10 v20H2                                                 
        //                                                             
        _m03 uint1_t  image_cet_shadow_stacks_ready;                     //{ +0x000c@0  +0x000c@0  } | .ImageCetShadowStacksReady
        _m04 uint1_t  image_cet_shadow_stacks_strict_mode;               //{ +0x000c@1  +0x000c@1  } | .ImageCetShadowStacksStrictMode
        _m05 uint1_t  image_cet_set_context_ip_validation_relaxed_mode;  //{ +0x000c@2  +0x000c@2  } | .ImageCetSetContextIpValidationRelaxedMode
        _m06 uint1_t  image_cet_dynamic_apis_allow_in_proc;              //{ +0x000c@3  +0x000c@3  } | .ImageCetDynamicApisAllowInProc
        _m07 uint1_t  image_cet_downgrade_reserved1;                     //{ +0x000c@4  +0x000c@4  } | .ImageCetDowngradeReserved1
        _m08 uint1_t  image_cet_downgrade_reserved2;                     //{ +0x000c@5  +0x000c@5  } | .ImageCetDowngradeReserved2
                                                                       
        SDK_MAGIC_PROPERTIES( "_MI_EXTRA_IMAGE_INFORMATION.$", 0x10, true, 0x2f4b5e3bf2daf036 );                                                 
        SDK_DYNAMIC_SIZE( extra_image_information_t );                                                 
    };                                                                 
};
#include "magic/extra_image_information_t.end.hpp"
