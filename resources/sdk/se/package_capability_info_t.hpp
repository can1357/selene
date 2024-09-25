#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/package_capability_info_t.start.hpp"
namespace se
{
    // [struct _SE_PACKAGE_CAPABILITY_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct package_capability_info_t                  
    {                                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                
        //                                            
        _m00 uint32_t remaining;                        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Remaining
        _m01 uint32_t package_granted_access;           //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .PackageGrantedAccess
        _m02 uint32_t capability_granted_access;        //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .CapabilityGrantedAccess
        _m03 uint32_t user_groups_remaining;            //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .UserGroupsRemaining
        _m04 uint8_t  packages_present;                 //{ +0x0010    +0x0014    +0x0014    +0x0014    } | .PackagesPresent
        _m05 uint8_t  package_match;                    //{ +0x0011    +0x0015    +0x0015    +0x0015    } | .PackageMatch
        _m06 uint8_t  capability_match;                 //{ +0x0012    +0x0016    +0x0016    +0x0016    } | .CapabilityMatch
        _m07 uint8_t  log_permissive_failure;           //{ +0x0013    +0x0017    +0x0017    +0x0017    } | .LogPermissiveFailure
                                                      
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                
        //                                            
        _m08 uint32_t all_app_packages_skipped_access;  //{ +0x0010    +0x0010    +0x0010    } | .AllAppPackagesSkippedAccess
        _m09 uint8_t  all_app_packages_skipped;         //{ +0x0018    +0x0018    +0x0018    } | .AllAppPackagesSkipped
                                                      
        SDK_MAGIC_PROPERTIES( "_SE_PACKAGE_CAPABILITY_INFO.$", 0x1c, true, 0x4008e549fedd3698 );                                
        SDK_DYNAMIC_SIZE( package_capability_info_t );                                
    };                                                
};
#include "magic/package_capability_info_t.end.hpp"
