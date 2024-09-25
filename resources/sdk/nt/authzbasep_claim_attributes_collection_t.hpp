#pragma once
#include <sdkgen/support_library.hpp>
#include "sid_and_attributes_hash_t.hpp"

#include "magic/authzbasep_claim_attributes_collection_t.start.hpp"
namespace nt
{
    struct sid_and_attributes_t;
    struct authzbasep_security_attributes_information_t;

    // [struct _AUTHZBASEP_CLAIM_ATTRIBUTES_COLLECTION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct authzbasep_claim_attributes_collection_t                                             
    {                                                                                           
        using p_user_security_attributes_t =              struct nt::authzbasep_security_attributes_information_t*;                                        
        using p_device_security_attributes_t =            struct nt::authzbasep_security_attributes_information_t*;                                        
        using p_restricted_user_security_attributes_t =   struct nt::authzbasep_security_attributes_information_t*;                                        
        using p_restricted_device_security_attributes_t = struct nt::authzbasep_security_attributes_information_t*;                                        
                                                                                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                        
        //                                                                                      
        _m00 uint32_t                                   device_groups_count;                      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .DeviceGroupsCount
        _m01 struct nt::sid_and_attributes_t*           p_device_groups;                          //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pDeviceGroups
        _m02 uint32_t                                   restricted_device_groups_count;           //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .RestrictedDeviceGroupsCount
        _m03 struct nt::sid_and_attributes_t*           p_restricted_device_groups;               //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .pRestrictedDeviceGroups
        _m04 struct nt::sid_and_attributes_hash_t       device_groups_hash;                       //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .DeviceGroupsHash
        _m05 struct nt::sid_and_attributes_hash_t       restricted_device_groups_hash;            //{ +0x0130    +0x0130    +0x0130    +0x0130    } | .RestrictedDeviceGroupsHash
        _m06 p_user_security_attributes_t               p_user_security_attributes;               //{ +0x0240    +0x0240    +0x0240    +0x0240    } | .pUserSecurityAttributes
        _m07 p_device_security_attributes_t             p_device_security_attributes;             //{ +0x0248    +0x0248    +0x0248    +0x0248    } | .pDeviceSecurityAttributes
        _m08 p_restricted_user_security_attributes_t    p_restricted_user_security_attributes;    //{ +0x0250    +0x0250    +0x0250    +0x0250    } | .pRestrictedUserSecurityAttributes
        _m09 p_restricted_device_security_attributes_t  p_restricted_device_security_attributes;  //{ +0x0258    +0x0258    +0x0258    +0x0258    } | .pRestrictedDeviceSecurityAttributes
                                                                                                
        SDK_MAGIC_PROPERTIES( "_AUTHZBASEP_CLAIM_ATTRIBUTES_COLLECTION.$", 0x260, true, 0x34edf248c033154c );                                        
        SDK_FIXED_SIZE( authzbasep_claim_attributes_collection_t, 0x260 );                                        
    };                                                                                          
};
#include "magic/authzbasep_claim_attributes_collection_t.end.hpp"
SDK_VERIFY( struct nt::authzbasep_claim_attributes_collection_t, 0x260 );
