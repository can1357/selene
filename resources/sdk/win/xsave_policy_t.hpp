#pragma once
#include <sdkgen/support_library.hpp>
#include "xsave_feature_t.hpp"

#include "magic/xsave_policy_t.start.hpp"
namespace win
{
    // [struct _XSAVE_POLICY]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct xsave_policy_t                                                    
    {                                                                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                                                   
        _m00 uint32_t                                   version;               //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Version
        _m01 uint32_t                                   size;                  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Size
        _m02 uint32_t                                   flags;                 //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Flags
        _m03 uint32_t                                   max_save_area_length;  //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .MaxSaveAreaLength
        _m04 uint64_t                                   feature_bitmask;       //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .FeatureBitmask
        _m05 uint32_t                                   number_of_features;    //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .NumberOfFeatures
        _m06 sdk::array<struct win::xsave_feature_t, 1> features;              //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .Features
                                                                             
        SDK_MAGIC_PROPERTIES( "_XSAVE_POLICY.$", 0x30, true, 0x2b51ea66cceaa7f5 );                     
        SDK_FIXED_SIZE( xsave_policy_t, 0x30 );                              
    };                                                                       
};
#include "magic/xsave_policy_t.end.hpp"
SDK_VERIFY( struct win::xsave_policy_t, 0x30 );
