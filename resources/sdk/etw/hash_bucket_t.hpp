#pragma once
#include <sdkgen/support_library.hpp>
#include "../ex/push_lock_t.hpp"

#include "magic/hash_bucket_t.start.hpp"
namespace etw
{
    // [struct _ETW_HASH_BUCKET]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct hash_bucket_t                                 
    {                                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                                               
        _m00 sdk::array<nt::list_entry_t, 3> list_head;    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ListHead
        _m01 struct ex::push_lock_t          bucket_lock;  //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .BucketLock
                                                         
        SDK_MAGIC_PROPERTIES( "_ETW_HASH_BUCKET.$", 0x38, true, 0x26f36467d5ac8157 );            
        SDK_FIXED_SIZE( hash_bucket_t, 0x38 );            
    };                                                   
};
#include "magic/hash_bucket_t.end.hpp"
SDK_VERIFY( struct etw::hash_bucket_t, 0x38 );
