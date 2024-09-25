#pragma once
#include <sdkgen/support_library.hpp>

namespace nt { struct ejob_t;                  }
namespace nt { struct eprocess_t;              }
namespace nt { struct ethread_t;               }
namespace nt { struct event_data_descriptor_t; }
namespace nt { struct guid_t;                  }

#include "magic/fileio_notify_routines_t.start.hpp"
namespace wmi
{
    // [struct _WMI_FILEIO_NOTIFY_ROUTINES]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct fileio_notify_routines_t                                 
    {                                                               
        using file_name_rundown_routine_t = sdk::variant<sdk::function<void(void*, nt::unicode_view*, uint32_t, uint16_t)>*, sdk::function<void(struct nt::eprocess_t*, void*, nt::unicode_view*, struct nt::ejob_t*, uint32_t, uint16_t)>*>;                          
        using file_name_notify_routine_t =  sdk::variant<sdk::function<void(void*, nt::unicode_view*, uint32_t, uint16_t)>*, sdk::function<void(struct nt::eprocess_t*, void*, nt::unicode_view*, struct nt::ejob_t*, uint32_t, uint16_t)>*>;                          
        using initiation_notify_routine_t = sdk::variant<sdk::function<void(struct nt::event_data_descriptor_t*, uint32_t, uint32_t, uint16_t, struct nt::guid_t*)>*, sdk::function<void(struct nt::ethread_t*, struct nt::event_data_descriptor_t*, uint32_t, uint32_t, uint16_t, struct nt::guid_t*)>*>;                          
        using completion_notify_routine_t = sdk::variant<sdk::function<void(struct nt::event_data_descriptor_t*, uint32_t, uint32_t, uint16_t, struct nt::guid_t*)>*, sdk::function<void(struct nt::ethread_t*, struct nt::event_data_descriptor_t*, uint32_t, uint32_t, uint16_t, struct nt::guid_t*)>*>;                          
                                                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                          
        //                                                          
        _m00 file_name_rundown_routine_t  file_name_rundown_routine;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .FileNameRundownRoutine
        _m01 file_name_notify_routine_t   file_name_notify_routine;   //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .FileNameNotifyRoutine
        _m02 initiation_notify_routine_t  initiation_notify_routine;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .InitiationNotifyRoutine
        _m03 completion_notify_routine_t  completion_notify_routine;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .CompletionNotifyRoutine
                                                                    
        SDK_MAGIC_PROPERTIES( "_WMI_FILEIO_NOTIFY_ROUTINES.$", 0x20, true, 0x5f3856563a200661 );                          
        SDK_FIXED_SIZE( fileio_notify_routines_t, 0x20 );                          
    };                                                              
};
#include "magic/fileio_notify_routines_t.end.hpp"
SDK_VERIFY( struct wmi::fileio_notify_routines_t, 0x20 );
