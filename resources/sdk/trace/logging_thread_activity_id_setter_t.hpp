#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"

#include "magic/logging_thread_activity_id_setter_t.start.hpp"
namespace trace
{
    // [class TraceLoggingThreadActivityIdSetter]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class logging_thread_activity_id_setter_t      
    {                                              
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                         
        _m00 struct nt::guid_t m_activity_id;        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .m_ActivityId
        _m01 struct nt::guid_t m_saved_activity_id;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .m_SavedActivityId
                                                   
        SDK_MAGIC_PROPERTIES( "TraceLoggingThreadActivityIdSetter.$", 0x20, true, 0x4c1a42b94fede3f9 );                    
        SDK_FIXED_SIZE( logging_thread_activity_id_setter_t, 0x20 );                    
    };                                             
};
#include "magic/logging_thread_activity_id_setter_t.end.hpp"
SDK_VERIFY( class trace::logging_thread_activity_id_setter_t, 0x20 );
