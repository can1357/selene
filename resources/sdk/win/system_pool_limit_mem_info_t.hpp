#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/system_pool_limit_mem_info_t.start.hpp"
namespace win
{
    // [struct _SYSTEM_POOL_LIMIT_MEM_INFO]
    // => Windows 11
    //
    struct system_pool_limit_mem_info_t  
    {                                    
        // Windows 11                    
        //                               
        _m00 uint64_t memory_limit;        //{ +0x0000    } | .MemoryLimit
        _m01 uint64_t notification_limit;  //{ +0x0008    } | .NotificationLimit
                                         
        SDK_MAGIC_PROPERTIES( "_SYSTEM_POOL_LIMIT_MEM_INFO.$", 0x0, false, 0x3405296097cf40e9 );                   
        SDK_FIXED_SIZE( system_pool_limit_mem_info_t, 0x10 );                   
    };                                   
};
#include "magic/system_pool_limit_mem_info_t.end.hpp"
SDK_VERIFY( struct win::system_pool_limit_mem_info_t, 0x10 );
