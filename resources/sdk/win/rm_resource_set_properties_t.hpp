#pragma once
#include <sdkgen/support_library.hpp>
#include "rm_resource_limits_t.hpp"
#include "rm_resource_request_t.hpp"
#include "rm_activity_importance_t.hpp"
#include "rm_common_policy_flags_t.hpp"
#include "rm_appmodel_policy_flags_t.hpp"

#include "magic/rm_resource_set_properties_t.start.hpp"
namespace win
{
    // [struct _RM_RESOURCE_SET_PROPERTIES]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct rm_resource_set_properties_t                                             
    {                                                                               
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                 
        //                                                                          
        _m00 struct win::rm_resource_request_t     resources_requested;               //{ +0x0000    +0x0000    +0x0000    } | .ResourcesRequested
        _m01 union win::rm_activity_importance_t   importance;                        //{ +0x0020    +0x0020    +0x0020    } | .Importance
        _m02 uint8_t                               over_target_priority;              //{ +0x0024    +0x0024    +0x0024    } | .OverTargetPriority
        _m03 struct win::rm_resource_limits_t      resource_limits;                   //{ +0x0028    +0x0028    +0x0028    } | .ResourceLimits
        _m04 union win::rm_common_policy_flags_t   common_policy_flags;               //{ +0x0060    +0x0060    +0x0060    } | .CommonPolicyFlags
        _m05 union win::rm_appmodel_policy_flags_t app_model_policy_flags;            //{ +0x0062    +0x0062    +0x0062    } | .AppModelPolicyFlags
        _m06 uint32_t                              external_resource_priority_count;  //{ +0x0064    +0x0064    +0x0064    } | .ExternalResourcePriorityCount
                                                                                    
        SDK_MAGIC_PROPERTIES( "_RM_RESOURCE_SET_PROPERTIES.$", 0x68, true, 0x1eae97604d56b7c2 );                                 
        SDK_FIXED_SIZE( rm_resource_set_properties_t, 0x68 );                                 
    };                                                                              
};
#include "magic/rm_resource_set_properties_t.end.hpp"
SDK_VERIFY( struct win::rm_resource_set_properties_t, 0x68 );
