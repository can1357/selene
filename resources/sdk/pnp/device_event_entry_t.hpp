#pragma once
#include <sdkgen/support_library.hpp>
#include "veto_type_t.hpp"
#include "../nt/guid_t.hpp"
#include "../nt/plugplay_event_block_t.hpp"

namespace nt { struct kevent_t; }

#include "magic/device_event_entry_t.start.hpp"
namespace pnp
{
    struct watchdog_t;
    struct device_event_entry_t;

    // [struct _PNP_DEVICE_EVENT_ENTRY]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct device_event_entry_t                                
    {                                                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                                                     
        _m00 nt::list_entry_t                  list_entry;       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ListEntry
        _m01 uint32_t                          argument;         //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Argument
        _m02 int32_t                           argument_status;  //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .ArgumentStatus
        _m03 struct nt::kevent_t*              caller_event;     //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .CallerEvent
        _m04 sdk::function<void(void*)>*       callback;         //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .Callback
        _m05 void*                             context;          //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .Context
        _m06 enum pnp::veto_type_t*            veto_type;        //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .VetoType
        _m07 nt::unicode_view*                 veto_name;        //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .VetoName
        _m08 uint32_t                          ref_count;        //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .RefCount
        _m09 uint32_t                          lock;             //{ +0x0044    +0x0044    +0x0044    +0x0044    } | .Lock
        _m10 uint8_t                           cancel;           //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .Cancel
        _m11 struct pnp::device_event_entry_t* parent;           //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .Parent
        _m12 struct nt::guid_t                 activity_id;      //{ +0x0058    +0x0058    +0x0058    +0x0058    } | .ActivityId
        _m13 struct nt::plugplay_event_block_t data;             //{ +0x0068    +0x0070    +0x0070    +0x0070    } | .Data
                                                               
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                                                     
        _m14 struct pnp::watchdog_t*           watchdog;         //{ +0x0068    +0x0068    +0x0068    } | .Watchdog
                                                               
        SDK_MAGIC_PROPERTIES( "_PNP_DEVICE_EVENT_ENTRY.$", 0xc0, true, 0x69465349567230a9 );                
        SDK_DYNAMIC_SIZE( device_event_entry_t );                
    };                                                         
};
#include "magic/device_event_entry_t.end.hpp"
