#pragma once
#include <sdkgen/support_library.hpp>
#include "../whea/event_log_entry_t.hpp"
#include "../whea/error_source_descriptor_t.hpp"

#include "magic/add_remove_error_source_event_t.start.hpp"
namespace wheap
{
    // [struct _WHEAP_ADD_REMOVE_ERROR_SOURCE_EVENT]
    // => WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct add_remove_error_source_event_t                               
    {                                                                    
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                                               
        _m00 struct whea::event_log_entry_t         whea_event_log_entry;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .WheaEventLogEntry
        _m01 struct whea::error_source_descriptor_t descriptor;            //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .Descriptor
        _m02 int32_t                                status;                //{ +0x03ec    +0x03ec    +0x03ec    +0x03ec    } | .Status
        _m03 uint8_t                                is_remove;             //{ +0x03f0    +0x03f0    +0x03f0    +0x03f0    } | .IsRemove
                                                                         
        SDK_NONVOL_PROPERTIES( "_WHEAP_ADD_REMOVE_ERROR_SOURCE_EVENT.$", 0x3f1, true, 0xc3c209ab294339fb );                     
        SDK_FIXED_SIZE( add_remove_error_source_event_t, 0x3f1 );                     
    };                                                                   
};
#include "magic/add_remove_error_source_event_t.end.hpp"
SDK_VERIFY( struct wheap::add_remove_error_source_event_t, 0x3f1 );
