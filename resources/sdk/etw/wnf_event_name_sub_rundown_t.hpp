#pragma once
#include <sdkgen/support_library.hpp>
#include "../win/system_trace_header_t.hpp"

#include "magic/wnf_event_name_sub_rundown_t.start.hpp"
namespace etw
{
    // [struct _ETW_WNF_EVENT_NAME_SUB_RUNDOWN]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct wnf_event_name_sub_rundown_t                   
    {                                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                                                
        _m00 struct win::system_trace_header_t header;      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m01 int64_t                           state_name;  //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .StateName
        _m02 void*                             name_sub;    //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .NameSub
                                                          
        SDK_MAGIC_PROPERTIES( "_ETW_WNF_EVENT_NAME_SUB_RUNDOWN.$", 0x30, true, 0x86498b41930feb34 );           
        SDK_FIXED_SIZE( wnf_event_name_sub_rundown_t, 0x30 );           
    };                                                    
};
#include "magic/wnf_event_name_sub_rundown_t.end.hpp"
SDK_VERIFY( struct etw::wnf_event_name_sub_rundown_t, 0x30 );
