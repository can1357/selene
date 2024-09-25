#pragma once
#include <sdkgen/support_library.hpp>
#include "rw_lock_refcount_t.hpp"

#include "magic/rw_lock_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_RW_LOCK]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct rw_lock_t                                                         
    {                                                                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                                                                   
        _m00 uint64_t                                       spin_lock;         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .SpinLock
        _m01 void*                                          context;           //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Context
        _m02 sdk::array<union ndis::rw_lock_refcount_t, 64> ref_count;         //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .RefCount
        _m03 sdk::array<uint32_t, 256>                      ref_count_ex;      //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .RefCountEx
        _m04 uint64_t                                       ref_count_lock;    //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .RefCountLock
        _m05 volatile uint32_t                              shared_ref_count;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .SharedRefCount
        _m06 volatile uint8_t                               writer_waiting;    //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .WriterWaiting
                                                                             
        SDK_MAGIC_PROPERTIES( "_NDIS_RW_LOCK.$", 0x410, true, 0xf56fe8e255d5065 );                 
        SDK_FIXED_SIZE( rw_lock_t, 0x410 );                                  
    };                                                                       
};
#include "magic/rw_lock_t.end.hpp"
SDK_VERIFY( struct ndis::rw_lock_t, 0x410 );
