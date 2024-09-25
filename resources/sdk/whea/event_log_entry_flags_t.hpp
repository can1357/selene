#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/event_log_entry_flags_t.start.hpp"
namespace whea
{
    // [union _WHEA_EVENT_LOG_ENTRY_FLAGS]
    // => WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    union event_log_entry_flags_t      
    {                                  
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                             
        _m00 uint1_t  log_internal_etw;  //{ +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  } | .LogInternalEtw
        _m01 uint1_t  log_blackbox;      //{ +0x0000@2  +0x0000@2  +0x0000@2  +0x0000@2  } | .LogBlackbox
        _m02 uint1_t  log_sel;           //{ +0x0000@3  +0x0000@3  +0x0000@3  +0x0000@3  } | .LogSel
        _m03 uint1_t  raw_sel;           //{ +0x0000@4  +0x0000@4  +0x0000@4  +0x0000@4  } | .RawSel
        _m04 uint1_t  no_format;         //{ +0x0000@5  +0x0000@5  +0x0000@5  +0x0000@5  } | .NoFormat
        _m05 uint1_t  driver;            //{ +0x0000@6  +0x0000@6  +0x0000@6  +0x0000@6  } | .Driver
        _m06 uint32_t as_ulong;          //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .AsULONG
                                       
        SDK_NONVOL_PROPERTIES( "_WHEA_EVENT_LOG_ENTRY_FLAGS.$", 0x4, true, 0x1ad4b777185b8e81 );                 
        SDK_FIXED_SIZE( event_log_entry_flags_t, 0x4 );                 
    };                                 
};
#include "magic/event_log_entry_flags_t.end.hpp"
SDK_VERIFY( union whea::event_log_entry_flags_t, 0x4 );
