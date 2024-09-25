#pragma once
#include <sdkgen/support_library.hpp>
#include "../wnf/state_name_t.hpp"
#include "system_pool_limit_mem_info_t.hpp"

#include "magic/system_pool_limit_info_t.start.hpp"
namespace win
{
    // [struct _SYSTEM_POOL_LIMIT_INFO]
    // => Windows 11
    //
    struct system_pool_limit_info_t                       
    {                                                     
        using mem_limits_t = sdk::array<struct win::system_pool_limit_mem_info_t, 2>;                    
                                                          
        // Windows 11                                     
        //                                                
        _m00 uint32_t                 pool_tag;             //{ +0x0000    } | .PoolTag
        _m01 mem_limits_t             mem_limits;           //{ +0x0008    } | .MemLimits
        _m02 struct wnf::state_name_t notification_handle;  //{ +0x0028    } | .NotificationHandle
                                                          
        SDK_MAGIC_PROPERTIES( "_SYSTEM_POOL_LIMIT_INFO.$", 0x0, false, 0x2b16c847d5dc5136 );                    
        SDK_FIXED_SIZE( system_pool_limit_info_t, 0x30 );                    
    };                                                    
};
#include "magic/system_pool_limit_info_t.end.hpp"
SDK_VERIFY( struct win::system_pool_limit_info_t, 0x30 );
