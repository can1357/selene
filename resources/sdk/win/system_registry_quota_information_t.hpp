#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/system_registry_quota_information_t.start.hpp"
namespace win
{
    // [struct _SYSTEM_REGISTRY_QUOTA_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct system_registry_quota_information_t
    {                                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                       
        //                                   
        _m00 uint32_t registry_quota_allowed;   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .RegistryQuotaAllowed
        _m01 uint32_t registry_quota_used;      //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .RegistryQuotaUsed
        _m02 uint64_t paged_pool_size;          //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .PagedPoolSize
                                              
        SDK_MAGIC_PROPERTIES( "_SYSTEM_REGISTRY_QUOTA_INFORMATION.$", 0x10, true, 0x9260c0f499b17390 );                       
        SDK_FIXED_SIZE( system_registry_quota_information_t, 0x10 );                       
    };                                        
};
#include "magic/system_registry_quota_information_t.end.hpp"
SDK_VERIFY( struct win::system_registry_quota_information_t, 0x10 );
