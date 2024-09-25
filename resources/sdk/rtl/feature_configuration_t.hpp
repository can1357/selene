#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/feature_configuration_t.start.hpp"
namespace rtl
{
    // [struct _RTL_FEATURE_CONFIGURATION]
    // => WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct feature_configuration_t          
    {                                       
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                  
        _m00 uint32_t feature_id;             //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .FeatureId
        _m01 uint4_t  priority;               //{ +0x0004@0  +0x0004@0  +0x0004@0  +0x0004@0  } | .Priority
        _m02 uint2_t  enabled_state;          //{ +0x0004@4  +0x0004@4  +0x0004@4  +0x0004@4  } | .EnabledState
        _m03 uint1_t  is_wexp_configuration;  //{ +0x0004@6  +0x0004@6  +0x0004@6  +0x0004@6  } | .IsWexpConfiguration
        _m04 uint1_t  has_subscriptions;      //{ +0x0004@7  +0x0004@7  +0x0004@7  +0x0004@7  } | .HasSubscriptions
        _m05 uint6_t  variant;                //{ +0x0004@8  +0x0004@8  +0x0004@8  +0x0004@8  } | .Variant
        _m06 uint2_t  variant_payload_kind;   //{ +0x0004@14 +0x0004@14 +0x0004@14 +0x0004@14 } | .VariantPayloadKind
        _m07 uint32_t variant_payload;        //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .VariantPayload
                                            
        // WDK 10                           
        //                                  
        _m08 uint32_t flags;                  //{ +0x0004    } | .Flags
                                            
        SDK_NONVOL_PROPERTIES( "_RTL_FEATURE_CONFIGURATION.$", 0xc, true, 0xa97d249b6f08a968 );                      
        SDK_FIXED_SIZE( feature_configuration_t, 0xc );                      
    };                                      
};
#include "magic/feature_configuration_t.end.hpp"
SDK_VERIFY( struct rtl::feature_configuration_t, 0xc );
