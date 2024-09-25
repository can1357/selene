#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/shared_or_exclusive_lock_t.start.hpp"
namespace win
{
    // [class SharedOrExclusiveLock]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class shared_or_exclusive_lock_t                        
    {                                                       
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                       
        //                                                  
        _m00 sdk::array<uint64_t, 1> shared_lock_storage;     //{ +0x0010    +0x0010    +0x0010    } | ._sharedLockStorage
        _m01 sdk::array<uint64_t, 1> exclusive_lock_storage;  //{ +0x0018    +0x0018    +0x0018    } | ._exclusiveLockStorage
                                                            
        SDK_MAGIC_PROPERTIES( "SharedOrExclusiveLock.$", 0x20, true, 0x72f4235430cc1896 );                       
        SDK_FIXED_SIZE( shared_or_exclusive_lock_t, 0x20 );                       
    };                                                      
};
#include "magic/shared_or_exclusive_lock_t.end.hpp"
SDK_VERIFY( class win::shared_or_exclusive_lock_t, 0x20 );
