#pragma once
#include <sdkgen/support_library.hpp>
#include "../whea/error_severity_t.hpp"
#include "../whea/event_log_entry_t.hpp"

#include "magic/spurious_aer_event_t.start.hpp"
namespace wheap
{
    // [struct _WHEAP_SPURIOUS_AER_EVENT]
    // => Windows 11
    //
    struct spurious_aer_event_t                                       
    {                                                                 
        // Windows 11                                                 
        //                                                            
        _m00 struct whea::event_log_entry_t whea_event_log_entry;       //{ +0x0000    } | .WheaEventLogEntry
        _m01 enum whea::error_severity_t    error_severity;             //{ +0x0020    } | .ErrorSeverity
        _m02 uint32_t                       error_handler_type;         //{ +0x0024    } | .ErrorHandlerType
        _m03 uint32_t                       spurious_error_source_id;   //{ +0x0028    } | .SpuriousErrorSourceId
        _m04 uint32_t                       root_error_command;         //{ +0x002c    } | .RootErrorCommand
        _m05 uint32_t                       root_error_status;          //{ +0x0030    } | .RootErrorStatus
        _m06 uint32_t                       device_association_bitmap;  //{ +0x0034    } | .DeviceAssociationBitmap
                                                                      
        SDK_MAGIC_PROPERTIES( "_WHEAP_SPURIOUS_AER_EVENT.$", 0x0, false, 0x23a5a5336a6dac94 );                          
        SDK_FIXED_SIZE( spurious_aer_event_t, 0x38 );                          
    };                                                                
};
#include "magic/spurious_aer_event_t.end.hpp"
SDK_VERIFY( struct wheap::spurious_aer_event_t, 0x38 );
