#pragma once
#include <sdkgen/support_library.hpp>
#include "emergency_la_queue_type_t.hpp"

#include "magic/emergency_la_queue_entry_t.start.hpp"
namespace halp
{
    // [struct _HALP_EMERGENCY_LA_QUEUE_ENTRY]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct emergency_la_queue_entry_t                        
    {                                                        
        // Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                                                   
        _m00 nt::list_entry_t                     list_entry;  //{ +0x0000    +0x0000    +0x0000    } | .ListEntry
        _m01 enum halp::emergency_la_queue_type_t entry_type;  //{ +0x0010    +0x0010    +0x0010    } | .EntryType
                                                             
        SDK_MAGIC_PROPERTIES( "_HALP_EMERGENCY_LA_QUEUE_ENTRY.$", 0x18, true, 0x31a93b3f297284fa );           
        SDK_FIXED_SIZE( emergency_la_queue_entry_t, 0x18 );           
    };                                                       
};
#include "magic/emergency_la_queue_entry_t.end.hpp"
SDK_VERIFY( struct halp::emergency_la_queue_entry_t, 0x18 );
