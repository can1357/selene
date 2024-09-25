#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/wdfrequest_triage_info_v1_15_t.start.hpp"
namespace wdf
{
    // [struct _WDFREQUEST_TRIAGE_INFO_V1_15]
    // => Windows 10 v1607
    //
    struct wdfrequest_triage_info_v1_15_t     
    {                                         
        // Windows 10 v1607                        
        //                                    
        _m00 uint32_t request_size;             //{ +0x0000    } | .RequestSize
        _m01 uint32_t csq_context;              //{ +0x0004    } | .CsqContext
        _m02 uint32_t fx_irp;                   //{ +0x0008    } | .FxIrp
        _m03 uint32_t list_entry_queue_owned;   //{ +0x000c    } | .ListEntryQueueOwned
        _m04 uint32_t list_entry_queue_owned2;  //{ +0x0010    } | .ListEntryQueueOwned2
        _m05 uint32_t request_list_entry;       //{ +0x0014    } | .RequestListEntry
        _m06 uint32_t fwd_progress_list;        //{ +0x0018    } | .FwdProgressList
                                              
        SDK_MAGIC_PROPERTIES( "_WDFREQUEST_TRIAGE_INFO_V1_15.$", 0x0, false, 0x44e6654690306d31 );                        
        SDK_FIXED_SIZE( wdfrequest_triage_info_v1_15_t, 0x1c );                        
    };                                        
};
#include "magic/wdfrequest_triage_info_v1_15_t.end.hpp"
SDK_VERIFY( struct wdf::wdfrequest_triage_info_v1_15_t, 0x1c );
