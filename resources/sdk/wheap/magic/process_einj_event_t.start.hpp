#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct whea::event_log_entry_t), "_WHEAP_PROCESS_EINJ_EVENT.WheaEventLogEntry", whea_event_log_entry, 0x0, 0x0, true, 0x985af80ec9009489)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<char, 32>), "_WHEAP_PROCESS_EINJ_EVENT.Error", error, 0x100, 0x0, true, 0x8b1c53636f028660)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_WHEAP_PROCESS_EINJ_EVENT.InjectionActionTableValid", injection_action_table_valid, 0x200, 0x8, true, 0xc835f1ed1b844609)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEAP_PROCESS_EINJ_EVENT.BeginInjectionInstructionCount", begin_injection_instruction_count, 0x208, 0x20, true, 0xc2973839a5f50cbc)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEAP_PROCESS_EINJ_EVENT.GetTriggerErrorActionTableInstructionCount", get_trigger_error_action_table_instruction_count, 0x228, 0x20, true, 0x994712e963bc787b)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEAP_PROCESS_EINJ_EVENT.SetErrorTypeInstructionCount", set_error_type_instruction_count, 0x248, 0x20, true, 0x9e4fbfede8ffbaaf)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEAP_PROCESS_EINJ_EVENT.GetErrorTypeInstructionCount", get_error_type_instruction_count, 0x268, 0x20, true, 0xe37ad54c17062373)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEAP_PROCESS_EINJ_EVENT.EndOperationInstructionCount", end_operation_instruction_count, 0x288, 0x20, true, 0x5c8fdf2e6b0640da)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEAP_PROCESS_EINJ_EVENT.ExecuteOperationInstructionCount", execute_operation_instruction_count, 0x2a8, 0x20, true, 0x24e06c89e44bb3c7)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEAP_PROCESS_EINJ_EVENT.CheckBusyStatusInstructionCount", check_busy_status_instruction_count, 0x2c8, 0x20, true, 0x7bc56ad0d4fe4522)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEAP_PROCESS_EINJ_EVENT.GetCommandStatusInstructionCount", get_command_status_instruction_count, 0x2e8, 0x20, true, 0xc4c8f8cbdedbe151)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEAP_PROCESS_EINJ_EVENT.SetErrorTypeWithAddressInstructionCount", set_error_type_with_address_instruction_count, 0x308, 0x20, true, 0x3103b3b309131831)
#define _m12 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEAP_PROCESS_EINJ_EVENT.GetExecuteOperationTimingsInstructionCount", get_execute_operation_timings_instruction_count, 0x328, 0x20, true, 0x90c4b291ed07be77)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#define _m09
#define _m10
#define _m11
#define _m12
#endif