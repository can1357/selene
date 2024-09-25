#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/cvdd_t.hpp"

#include "magic/debugid_tracking_entry_t.start.hpp"
namespace etw
{
    // [struct _ETW_DEBUGID_TRACKING_ENTRY]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct debugid_tracking_entry_t              
    {                                            
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                                       
        _m00 nt::list_entry_t list_entry;          //{ +0x0000    +0x0000    +0x0000    } | .ListEntry
        _m01 uint8_t          consumers_notified;  //{ +0x0010    +0x0010    +0x0010    } | .ConsumersNotified
        _m02 uint32_t         debug_id_size;       //{ +0x0014    +0x0014    +0x0014    } | .DebugIdSize
        _m03 union nt::cvdd_t debug_id;            //{ +0x0018    +0x0018    +0x0018    } | .DebugId
                                                 
        SDK_MAGIC_PROPERTIES( "_ETW_DEBUGID_TRACKING_ENTRY.$", 0x38, true, 0xa8416ef088156328 );                   
        SDK_FIXED_SIZE( debugid_tracking_entry_t, 0x38 );                   
    };                                           
};
#include "magic/debugid_tracking_entry_t.end.hpp"
SDK_VERIFY( struct etw::debugid_tracking_entry_t, 0x38 );
