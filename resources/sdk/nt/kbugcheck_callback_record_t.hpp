#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/kbugcheck_callback_record_t.start.hpp"
namespace nt
{
    // [struct _KBUGCHECK_CALLBACK_RECORD]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct kbugcheck_callback_record_t                              
    {                                                               
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                                                          
        _m00 nt::list_entry_t                      entry;             //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Entry
        _m01 sdk::function<void(void*, uint32_t)>* callback_routine;  //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .CallbackRoutine
        _m02 void*                                 buffer;            //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .Buffer
        _m03 uint32_t                              length;            //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | .Length
        _m04 uint8_t*                              component;         //{ +0x0028    +0x0028    +0x0028    +0x0028    +0x0028    } | .Component
        _m05 uint64_t                              checksum;          //{ +0x0030    +0x0030    +0x0030    +0x0030    +0x0030    } | .Checksum
        _m06 uint8_t                               state;             //{ +0x0038    +0x0038    +0x0038    +0x0038    +0x0038    } | .State
                                                                    
        SDK_NONVOL_PROPERTIES( "_KBUGCHECK_CALLBACK_RECORD.$", 0x40, true, 0xa1ac2e15c0828f38 );                 
        SDK_FIXED_SIZE( kbugcheck_callback_record_t, 0x40 );                 
    };                                                              
};
#include "magic/kbugcheck_callback_record_t.end.hpp"
SDK_VERIFY( struct nt::kbugcheck_callback_record_t, 0x40 );
