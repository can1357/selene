#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/section_image_information_t.hpp"

#include "magic/section_internal_image_information_t.start.hpp"
namespace win
{
    // [struct _SECTION_INTERNAL_IMAGE_INFORMATION]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct section_internal_image_information_t                                                      
    {                                                                                                
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                                 
        //                                                                                           
        _m00 struct nt::section_image_information_t section_information;                               //{ +0x0000    +0x0000    +0x0000    } | .SectionInformation
        _m01 uint32_t                               extended_flags;                                    //{ +0x0040    +0x0040    +0x0040    } | .ExtendedFlags
        _m02 uint1_t                                image_export_suppression_enabled;                  //{ +0x0040@0  +0x0040@0  +0x0040@0  } | .ImageExportSuppressionEnabled
        _m03 uint1_t                                image_cet_shadow_stacks_ready;                     //{ +0x0040@1  +0x0040@1  +0x0040@1  } | .ImageCetShadowStacksReady
                                                                                                     
        // Windows 11, Windows 10 v20H2                                                              
        //                                                                                           
        _m04 uint1_t                                image_xfg_enabled;                                 //{ +0x0040@2  +0x0040@2  } | .ImageXfgEnabled
        _m05 uint1_t                                image_cet_shadow_stacks_strict_mode;               //{ +0x0040@3  +0x0040@3  } | .ImageCetShadowStacksStrictMode
        _m06 uint1_t                                image_cet_set_context_ip_validation_relaxed_mode;  //{ +0x0040@4  +0x0040@4  } | .ImageCetSetContextIpValidationRelaxedMode
        _m07 uint1_t                                image_cet_dynamic_apis_allow_in_proc;              //{ +0x0040@5  +0x0040@5  } | .ImageCetDynamicApisAllowInProc
        _m08 uint1_t                                image_cet_downgrade_reserved1;                     //{ +0x0040@6  +0x0040@6  } | .ImageCetDowngradeReserved1
        _m09 uint1_t                                image_cet_downgrade_reserved2;                     //{ +0x0040@7  +0x0040@7  } | .ImageCetDowngradeReserved2
                                                                                                     
        SDK_MAGIC_PROPERTIES( "_SECTION_INTERNAL_IMAGE_INFORMATION.$", 0x48, true, 0x97783181abbce901 );                                                 
        SDK_FIXED_SIZE( section_internal_image_information_t, 0x48 );                                                 
    };                                                                                               
};
#include "magic/section_internal_image_information_t.end.hpp"
SDK_VERIFY( struct win::section_internal_image_information_t, 0x48 );
