#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/error_record_section_descriptor_flags_t.start.hpp"
namespace whea
{
    // [union _WHEA_ERROR_RECORD_SECTION_DESCRIPTOR_FLAGS]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    union error_record_section_descriptor_flags_t
    {                                            
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                       
        //                                   
        _m00 uint1_t  primary;                     //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .Primary
        _m01 uint1_t  containment_warning;         //{ +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  } | .ContainmentWarning
        _m02 uint1_t  reset;                       //{ +0x0000@2  +0x0000@2  +0x0000@2  +0x0000@2  +0x0000@2  } | .Reset
        _m03 uint1_t  threshold_exceeded;          //{ +0x0000@3  +0x0000@3  +0x0000@3  +0x0000@3  +0x0000@3  } | .ThresholdExceeded
        _m04 uint1_t  resource_not_available;      //{ +0x0000@4  +0x0000@4  +0x0000@4  +0x0000@4  +0x0000@4  } | .ResourceNotAvailable
        _m05 uint1_t  latent_error;                //{ +0x0000@5  +0x0000@5  +0x0000@5  +0x0000@5  +0x0000@5  } | .LatentError
        _m06 uint1_t  propagated;                  //{ +0x0000@6  +0x0000@6  +0x0000@6  +0x0000@6  +0x0000@6  } | .Propagated
        _m07 uint32_t as_ulong;                    //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .AsULONG
                                                 
        // Windows 11                        
        //                                   
        _m08 uint1_t  fru_text_by_plugin;          //{ +0x0000@7  } | .FruTextByPlugin
                                                 
        SDK_NONVOL_PROPERTIES( "_WHEA_ERROR_RECORD_SECTION_DESCRIPTOR_FLAGS.$", 0x4, true, 0x692b9bd911111a9d );                       
        SDK_FIXED_SIZE( error_record_section_descriptor_flags_t, 0x4 );                       
    };                                           
};
#include "magic/error_record_section_descriptor_flags_t.end.hpp"
SDK_VERIFY( union whea::error_record_section_descriptor_flags_t, 0x4 );
