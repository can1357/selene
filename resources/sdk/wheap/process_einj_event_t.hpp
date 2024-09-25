#pragma once
#include <sdkgen/support_library.hpp>
#include "../whea/event_log_entry_t.hpp"

#include "magic/process_einj_event_t.start.hpp"
namespace wheap
{
    // [struct _WHEAP_PROCESS_EINJ_EVENT]
    // => WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct process_einj_event_t                                                              
    {                                                                                        
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                 
        //                                                                                   
        _m00 struct whea::event_log_entry_t whea_event_log_entry;                              //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .WheaEventLogEntry
        _m01 sdk::array<char, 32>           error;                                             //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .Error
        _m02 uint8_t                        injection_action_table_valid;                      //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .InjectionActionTableValid
        _m03 uint32_t                       begin_injection_instruction_count;                 //{ +0x0041    +0x0041    +0x0041    +0x0041    } | .BeginInjectionInstructionCount
        _m04 uint32_t                       get_trigger_error_action_table_instruction_count;  //{ +0x0045    +0x0045    +0x0045    +0x0045    } | .GetTriggerErrorActionTableInstructionCount
        _m05 uint32_t                       set_error_type_instruction_count;                  //{ +0x0049    +0x0049    +0x0049    +0x0049    } | .SetErrorTypeInstructionCount
        _m06 uint32_t                       get_error_type_instruction_count;                  //{ +0x004d    +0x004d    +0x004d    +0x004d    } | .GetErrorTypeInstructionCount
        _m07 uint32_t                       end_operation_instruction_count;                   //{ +0x0051    +0x0051    +0x0051    +0x0051    } | .EndOperationInstructionCount
        _m08 uint32_t                       execute_operation_instruction_count;               //{ +0x0055    +0x0055    +0x0055    +0x0055    } | .ExecuteOperationInstructionCount
        _m09 uint32_t                       check_busy_status_instruction_count;               //{ +0x0059    +0x0059    +0x0059    +0x0059    } | .CheckBusyStatusInstructionCount
        _m10 uint32_t                       get_command_status_instruction_count;              //{ +0x005d    +0x005d    +0x005d    +0x005d    } | .GetCommandStatusInstructionCount
        _m11 uint32_t                       set_error_type_with_address_instruction_count;     //{ +0x0061    +0x0061    +0x0061    +0x0061    } | .SetErrorTypeWithAddressInstructionCount
        _m12 uint32_t                       get_execute_operation_timings_instruction_count;   //{ +0x0065    +0x0065    +0x0065    +0x0065    } | .GetExecuteOperationTimingsInstructionCount
                                                                                             
        SDK_NONVOL_PROPERTIES( "_WHEAP_PROCESS_EINJ_EVENT.$", 0x69, true, 0x85ac853337921c80 );                                                 
        SDK_FIXED_SIZE( process_einj_event_t, 0x69 );                                                 
    };                                                                                       
};
#include "magic/process_einj_event_t.end.hpp"
SDK_VERIFY( struct wheap::process_einj_event_t, 0x69 );
