#pragma once
#include <sdkgen/support_library.hpp>
#include "event_log_entry_t.hpp"

#include "magic/srar_detail_event_t.start.hpp"
namespace whea
{
    // [struct _WHEA_SRAR_DETAIL_EVENT]
    // => Windows 11
    //
    struct srar_detail_event_t                                     
    {                                                              
        // Windows 11                                              
        //                                                         
        _m00 struct whea::event_log_entry_t whea_event_log_entry;    //{ +0x0000    } | .WheaEventLogEntry
        _m01 uint32_t                       recovery_context_flags;  //{ +0x0020    } | .RecoveryContextFlags
        _m02 uint64_t                       recovery_context_pa;     //{ +0x0024    } | .RecoveryContextPa
        _m03 int32_t                        page_offline_status;     //{ +0x002c    } | .PageOfflineStatus
        _m04 uint8_t                        kernel_consumer_error;   //{ +0x0030    } | .KernelConsumerError
                                                                   
        SDK_MAGIC_PROPERTIES( "_WHEA_SRAR_DETAIL_EVENT.$", 0x0, false, 0xcc42ce9eff9268b3 );                       
        SDK_FIXED_SIZE( srar_detail_event_t, 0x31 );                       
    };                                                             
};
#include "magic/srar_detail_event_t.end.hpp"
SDK_VERIFY( struct whea::srar_detail_event_t, 0x31 );
