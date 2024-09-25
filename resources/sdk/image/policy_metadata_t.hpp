#pragma once
#include <sdkgen/support_library.hpp>
#include "policy_entry_t.hpp"

#include "magic/policy_metadata_t.start.hpp"
namespace image
{
    // [struct _IMAGE_POLICY_METADATA]
    // => WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct policy_metadata_t                                         
    {                                                                
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                                                           
        _m00 uint8_t                                  version;         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Version
        _m01 uint64_t                                 application_id;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ApplicationId
        _m02 sdk::array<struct image::policy_entry_t> policies;        //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Policies
                                                                     
        SDK_NONVOL_PROPERTIES( "_IMAGE_POLICY_METADATA.$", 0x10, true, 0x1ca90b42bbba4ec1 );               
        SDK_FIXED_SIZE( policy_metadata_t, 0x10 );                   
    };                                                               
};
#include "magic/policy_metadata_t.end.hpp"
SDK_VERIFY( struct image::policy_metadata_t, 0x10 );
