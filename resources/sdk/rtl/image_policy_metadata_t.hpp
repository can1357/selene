#pragma once
#include <sdkgen/support_library.hpp>

namespace image { struct policy_metadata_t; }

#include "magic/image_policy_metadata_t.start.hpp"
namespace rtl
{
    // [struct _RTL_IMAGE_POLICY_METADATA]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct image_policy_metadata_t                                  
    {                                                               
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                                                          
        _m00 const struct image::policy_metadata_t* policy_metadata;  //{ +0x0000    +0x0000    +0x0000    } | .PolicyMetadata
        _m01 uint64_t                               l_bound;          //{ +0x0008    +0x0008    +0x0008    } | .LBound
        _m02 uint64_t                               u_bound;          //{ +0x0010    +0x0010    +0x0010    } | .UBound
                                                                    
        SDK_MAGIC_PROPERTIES( "_RTL_IMAGE_POLICY_METADATA.$", 0x18, true, 0x77eed97c3f3630a8 );                
        SDK_FIXED_SIZE( image_policy_metadata_t, 0x18 );                
    };                                                              
};
#include "magic/image_policy_metadata_t.end.hpp"
SDK_VERIFY( struct rtl::image_policy_metadata_t, 0x18 );
