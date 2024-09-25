#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/wdfrequest_triage_info_t.start.hpp"
namespace wdf
{
    // [struct _WDFREQUEST_TRIAGE_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct wdfrequest_triage_info_t           
    {                                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                        
        //                                    
        _m00 uint32_t request_size;             //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .RequestSize
        _m01 uint32_t csq_context;              //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .CsqContext
        _m02 uint32_t fx_irp;                   //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .FxIrp
        _m03 uint32_t list_entry_queue_owned;   //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .ListEntryQueueOwned
        _m04 uint32_t list_entry_queue_owned2;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .ListEntryQueueOwned2
        _m05 uint32_t request_list_entry;       //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .RequestListEntry
        _m06 uint32_t fwd_progress_list;        //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .FwdProgressList
                                              
        SDK_MAGIC_PROPERTIES( "_WDFREQUEST_TRIAGE_INFO.$", 0x1c, true, 0x871a2f8500349ef8 );                        
        SDK_FIXED_SIZE( wdfrequest_triage_info_t, 0x1c );                        
    };                                        
};
#include "magic/wdfrequest_triage_info_t.end.hpp"
SDK_VERIFY( struct wdf::wdfrequest_triage_info_t, 0x1c );
