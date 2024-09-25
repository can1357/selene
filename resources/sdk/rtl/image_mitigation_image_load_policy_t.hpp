#pragma once
#include <sdkgen/support_library.hpp>
#include "image_mitigation_policy_t.hpp"

#include "magic/image_mitigation_image_load_policy_t.start.hpp"
namespace rtl
{
    // [struct _RTL_IMAGE_MITIGATION_IMAGE_LOAD_POLICY]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct image_mitigation_image_load_policy_t                               
    {                                                                         
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                            
        //                                                                    
        _m00 union rtl::image_mitigation_policy_t block_remote_image_loads;     //{ +0x0000    +0x0000    +0x0000    } | .BlockRemoteImageLoads
        _m01 union rtl::image_mitigation_policy_t block_low_label_image_loads;  //{ +0x0008    +0x0008    +0x0008    } | .BlockLowLabelImageLoads
        _m02 union rtl::image_mitigation_policy_t prefer_system32;              //{ +0x0010    +0x0010    +0x0010    } | .PreferSystem32
                                                                              
        SDK_MAGIC_PROPERTIES( "_RTL_IMAGE_MITIGATION_IMAGE_LOAD_POLICY.$", 0x18, true, 0x99e4e5ee4c6ff611 );                            
        SDK_FIXED_SIZE( image_mitigation_image_load_policy_t, 0x18 );                            
    };                                                                        
};
#include "magic/image_mitigation_image_load_policy_t.end.hpp"
SDK_VERIFY( struct rtl::image_mitigation_image_load_policy_t, 0x18 );
