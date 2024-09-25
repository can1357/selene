#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/object_header_quota_info_t.start.hpp"
namespace nt
{
    // [struct _OBJECT_HEADER_QUOTA_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct object_header_quota_info_t                 
    {                                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                
        //                                            
        _m00 uint32_t paged_pool_charge;                //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .PagedPoolCharge
        _m01 uint32_t non_paged_pool_charge;            //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .NonPagedPoolCharge
        _m02 uint32_t security_descriptor_charge;       //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .SecurityDescriptorCharge
        _m03 void*    security_descriptor_quota_block;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .SecurityDescriptorQuotaBlock
                                                      
        SDK_MAGIC_PROPERTIES( "_OBJECT_HEADER_QUOTA_INFO.$", 0x20, true, 0xefa81bd0796664b2 );                                
        SDK_FIXED_SIZE( object_header_quota_info_t, 0x20 );                                
    };                                                
};
#include "magic/object_header_quota_info_t.end.hpp"
SDK_VERIFY( struct nt::object_header_quota_info_t, 0x20 );
