#pragma once
#include <sdkgen/support_library.hpp>
#include "file_lock_info_t.hpp"

#include "magic/file_lock_t.start.hpp"
namespace nt
{
    struct irp_t;

    // [struct _FILE_LOCK]
    // => WDK 10 (NV)
    //
    struct file_lock_t                                               
    {                                                                
        using pcomplete_lock_irp_routine_t = sdk::function<int32_t(void*, struct nt::irp_t*)>*;                          
        using punlock_routine_t =            sdk::function<void(void*, struct nt::file_lock_info_t*)>*;                          
                                                                     
        // WDK 10                                                    
        //                                                           
        _m00 pcomplete_lock_irp_routine_t  complete_lock_irp_routine;  //{ +0x0000    } | .CompleteLockIrpRoutine
        _m01 punlock_routine_t             unlock_routine;             //{ +0x0008    } | .UnlockRoutine
        _m02 uint8_t                       fast_io_is_questionable;    //{ +0x0010    } | .FastIoIsQuestionable
        _m03 sdk::array<uint8_t, 3>        spare_c;                    //{ +0x0011    } | .SpareC
        _m04 void*                         lock_information;           //{ +0x0018    } | .LockInformation
        _m05 struct nt::file_lock_info_t   last_returned_lock_info;    //{ +0x0020    } | .LastReturnedLockInfo
        _m06 void*                         last_returned_lock;         //{ +0x0050    } | .LastReturnedLock
        _m07 volatile int32_t              lock_requests_in_progress;  //{ +0x0058    } | .LockRequestsInProgress
                                                                     
        SDK_NONVOL_PROPERTIES( "_FILE_LOCK.$", 0x0, false, 0xe1b2561f0d7db2c9 );                          
        SDK_FIXED_SIZE( file_lock_t, 0x60 );                          
    };                                                               
};
#include "magic/file_lock_t.end.hpp"
SDK_VERIFY( struct nt::file_lock_t, 0x60 );
