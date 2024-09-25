#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/pool_limit_info_t.start.hpp"
namespace nt
{
    // [struct _POOL_LIMIT_INFO]
    // => Windows 11
    //
    struct pool_limit_info_t             
    {                                    
        // Windows 11                    
        //                               
        _m00 uint64_t hard_memory_limit;   //{ +0x0000    } | .HardMemoryLimit
        _m01 uint64_t notification_limit;  //{ +0x0008    } | .NotificationLimit
        _m02 uint64_t memory_issued;       //{ +0x0010    } | .MemoryIssued
                                         
        SDK_MAGIC_PROPERTIES( "_POOL_LIMIT_INFO.$", 0x0, false, 0xe56d90268d5e0636 );                   
        SDK_FIXED_SIZE( pool_limit_info_t, 0x18 );                   
    };                                   
};
#include "magic/pool_limit_info_t.end.hpp"
SDK_VERIFY( struct nt::pool_limit_info_t, 0x18 );
