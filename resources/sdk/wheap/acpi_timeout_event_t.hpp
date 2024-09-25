#pragma once
#include <sdkgen/support_library.hpp>
#include "../whea/event_log_entry_t.hpp"

#include "magic/acpi_timeout_event_t.start.hpp"
namespace wheap
{
    // [struct _WHEAP_ACPI_TIMEOUT_EVENT]
    // => WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct acpi_timeout_event_t                                  
    {                                                            
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                                       
        _m00 struct whea::event_log_entry_t whea_event_log_entry;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .WheaEventLogEntry
        _m01 sdk::array<char, 32>           table_type;            //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .TableType
        _m02 sdk::array<char, 32>           table_request;         //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .TableRequest
                                                                 
        SDK_NONVOL_PROPERTIES( "_WHEAP_ACPI_TIMEOUT_EVENT.$", 0x60, true, 0xcb90d4f6d78deaf4 );                     
        SDK_FIXED_SIZE( acpi_timeout_event_t, 0x60 );                     
    };                                                           
};
#include "magic/acpi_timeout_event_t.end.hpp"
SDK_VERIFY( struct wheap::acpi_timeout_event_t, 0x60 );
