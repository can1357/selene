#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/pdc_activity_type_t.hpp"
#include "ham_activity_start_flags_t.hpp"
#include "ham_activity_revoke_flags_t.hpp"
#include "ham_external_resource_mask_t.hpp"
#include "rm_resource_set_properties_t.hpp"
#include "ham_activity_properties_flags_t.hpp"

#include "magic/ham_activity_properties_t.start.hpp"
namespace win
{
    // [struct _HAM_ACTIVITY_PROPERTIES]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ham_activity_properties_t                                                   
    {                                                                                  
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                               
        //                                                                             
        _m00 union win::ham_activity_properties_flags_t flags;                           //{ +0x0000    +0x0000    +0x0000    } | .Flags
        _m01 union win::ham_activity_start_flags_t      start_flags;                     //{ +0x0004    +0x0004    +0x0004    } | .StartFlags
        _m02 union win::ham_activity_revoke_flags_t     revoke_flags;                    //{ +0x0008    +0x0008    +0x0008    } | .RevokeFlags
        _m03 sdk::array<wchar_t, 64>                    description;                     //{ +0x000c    +0x000c    +0x000c    } | .Description
        _m04 sdk::array<wchar_t, 64>                    resource_policy_name;            //{ +0x008c    +0x008c    +0x008c    } | .ResourcePolicyName
        _m05 enum nt::pdc_activity_type_t               pdc_activity_type;               //{ +0x010c    +0x010c    +0x010c    } | .PdcActivityType
        _m06 uint32_t                                   pdc_expected_duration_seconds;   //{ +0x0110    +0x0110    +0x0110    } | .PdcExpectedDurationSeconds
        _m07 uint32_t                                   cache_duration_ms;               //{ +0x0114    +0x0114    +0x0114    } | .CacheDurationMs
        _m08 struct win::rm_resource_set_properties_t   custom_resource_set_properties;  //{ +0x0118    +0x0118    +0x0118    } | .CustomResourceSetProperties
        _m09 struct win::ham_external_resource_mask_t   external_resource_mask_data;     //{ +0x0180    +0x0180    +0x0180    } | .ExternalResourceMaskData
                                                                                       
        SDK_MAGIC_PROPERTIES( "_HAM_ACTIVITY_PROPERTIES.$", 0x188, true, 0xddcf74ec10bff18f );                               
        SDK_FIXED_SIZE( ham_activity_properties_t, 0x188 );                               
    };                                                                                 
};
#include "magic/ham_activity_properties_t.end.hpp"
SDK_VERIFY( struct win::ham_activity_properties_t, 0x188 );
