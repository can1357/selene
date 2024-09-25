#pragma once
#include <sdkgen/support_library.hpp>
#include "kbugcheck_callback_reason_t.hpp"

#include "magic/kbugcheck_reason_callback_record_t.start.hpp"
namespace nt
{
    struct kbugcheck_reason_callback_record_t;

    // [struct _KBUGCHECK_REASON_CALLBACK_RECORD]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct kbugcheck_reason_callback_record_t                       
    {                                                               
        using pkbugcheck_reason_callback_routine_t = sdk::function<void(enum nt::kbugcheck_callback_reason_t, struct nt::kbugcheck_reason_callback_record_t*, void*, uint32_t)>*;                 
                                                                    
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                                                          
        _m00 nt::list_entry_t                      entry;             //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Entry
        _m01 pkbugcheck_reason_callback_routine_t  callback_routine;  //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .CallbackRoutine
        _m02 uint8_t*                              component;         //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .Component
        _m03 uint64_t                              checksum;          //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | .Checksum
        _m04 enum nt::kbugcheck_callback_reason_t  reason;            //{ +0x0028    +0x0028    +0x0028    +0x0028    +0x0028    } | .Reason
        _m05 uint8_t                               state;             //{ +0x002c    +0x002c    +0x002c    +0x002c    +0x002c    } | .State
                                                                    
        SDK_NONVOL_PROPERTIES( "_KBUGCHECK_REASON_CALLBACK_RECORD.$", 0x30, true, 0x1d87a4895d6b521a );                 
        SDK_FIXED_SIZE( kbugcheck_reason_callback_record_t, 0x30 );                 
    };                                                              
};
#include "magic/kbugcheck_reason_callback_record_t.end.hpp"
SDK_VERIFY( struct nt::kbugcheck_reason_callback_record_t, 0x30 );
