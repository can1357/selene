#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/hp_queue_lock_handle_t.start.hpp"
namespace rtlp
{
    // [struct _RTLP_HP_QUEUE_LOCK_HANDLE]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct hp_queue_lock_handle_t 
    {                             
        // Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                        
        _m00 uint64_t lock_ptr;     //{ +0x0008    +0x0008    +0x0008    } | .LockPtr
        _m01 uint64_t handle_data;  //{ +0x0010    +0x0010    +0x0010    } | .HandleData
                                  
        SDK_MAGIC_PROPERTIES( "_RTLP_HP_QUEUE_LOCK_HANDLE.$", 0x18, true, 0x82378744a0b4a97a );            
        SDK_FIXED_SIZE( hp_queue_lock_handle_t, 0x18 );            
    };                            
};
#include "magic/hp_queue_lock_handle_t.end.hpp"
SDK_VERIFY( struct rtlp::hp_queue_lock_handle_t, 0x18 );
