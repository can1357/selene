#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/process_mitigation_image_load_policy_t.start.hpp"
namespace win
{
    // [struct _PROCESS_MITIGATION_IMAGE_LOAD_POLICY]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct process_mitigation_image_load_policy_t         
    {                                                     
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                    
        //                                                
        _m00 uint32_t flags;                                //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Flags
        _m01 uint1_t  no_remote_images;                     //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .NoRemoteImages
        _m02 uint1_t  no_low_mandatory_label_images;        //{ +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  } | .NoLowMandatoryLabelImages
        _m03 uint1_t  prefer_system32_images;               //{ +0x0000@2  +0x0000@2  +0x0000@2  +0x0000@2  +0x0000@2  } | .PreferSystem32Images
                                                          
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2                                    
        //                                                
        _m04 uint1_t  audit_no_remote_images;               //{ +0x0000@3  +0x0000@3  +0x0000@3  +0x0000@3  } | .AuditNoRemoteImages
        _m05 uint1_t  audit_no_low_mandatory_label_images;  //{ +0x0000@4  +0x0000@4  +0x0000@4  +0x0000@4  } | .AuditNoLowMandatoryLabelImages
                                                          
        SDK_NONVOL_PROPERTIES( "_PROCESS_MITIGATION_IMAGE_LOAD_POLICY.$", 0x4, true, 0xe12929eec42c7197 );                                    
        SDK_FIXED_SIZE( process_mitigation_image_load_policy_t, 0x4 );                                    
    };                                                    
};
#include "magic/process_mitigation_image_load_policy_t.end.hpp"
SDK_VERIFY( struct win::process_mitigation_image_load_policy_t, 0x4 );
