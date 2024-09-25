#pragma once
#include <sdkgen/support_library.hpp>
#include "image_mitigation_policy_t.hpp"

#include "magic/image_mitigation_aslr_policy_t.start.hpp"
namespace rtl
{
    // [struct _RTL_IMAGE_MITIGATION_ASLR_POLICY]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct image_mitigation_aslr_policy_t                                    
    {                                                                        
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                           
        //                                                                   
        _m00 union rtl::image_mitigation_policy_t force_relocate_images;       //{ +0x0000    +0x0000    +0x0000    } | .ForceRelocateImages
        _m01 union rtl::image_mitigation_policy_t bottom_up_randomization;     //{ +0x0008    +0x0008    +0x0008    } | .BottomUpRandomization
        _m02 union rtl::image_mitigation_policy_t high_entropy_randomization;  //{ +0x0010    +0x0010    +0x0010    } | .HighEntropyRandomization
                                                                             
        SDK_MAGIC_PROPERTIES( "_RTL_IMAGE_MITIGATION_ASLR_POLICY.$", 0x18, true, 0xeed2bffe9d2d4520 );                           
        SDK_FIXED_SIZE( image_mitigation_aslr_policy_t, 0x18 );                           
    };                                                                       
};
#include "magic/image_mitigation_aslr_policy_t.end.hpp"
SDK_VERIFY( struct rtl::image_mitigation_aslr_policy_t, 0x18 );
