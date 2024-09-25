#pragma once
#include <sdkgen/support_library.hpp>
#include "../win/system_trace_header_t.hpp"

#include "magic/critsec_event_init_t.start.hpp"
namespace etw
{
    // [struct _ETW_CRITSEC_EVENT_INIT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct critsec_event_init_t                           
    {                                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                                                
        _m00 struct win::system_trace_header_t header;      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m01 void*                             spin_count;  //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .SpinCount
        _m02 void*                             address;     //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .Address
                                                          
        SDK_MAGIC_PROPERTIES( "_ETW_CRITSEC_EVENT_INIT.$", 0x30, true, 0x9f30091bcd17c916 );           
        SDK_FIXED_SIZE( critsec_event_init_t, 0x30 );           
    };                                                    
};
#include "magic/critsec_event_init_t.end.hpp"
SDK_VERIFY( struct etw::critsec_event_init_t, 0x30 );
