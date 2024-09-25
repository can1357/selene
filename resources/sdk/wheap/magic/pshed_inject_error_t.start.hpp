#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct whea::event_log_entry_t), "_WHEAP_PSHED_INJECT_ERROR.WheaEventLogEntry", whea_event_log_entry, 0x0, 0x0, true, 0x3295c8f65a9adba3)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEAP_PSHED_INJECT_ERROR.ErrorType", error_type, 0x100, 0x20, true, 0xe757d610e91782b1)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_WHEAP_PSHED_INJECT_ERROR.Parameter1", parameter1, 0x120, 0x40, true, 0x2409f55413573ed7)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_WHEAP_PSHED_INJECT_ERROR.Parameter2", parameter2, 0x160, 0x40, true, 0x643ad1fd5a40e955)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_WHEAP_PSHED_INJECT_ERROR.Parameter3", parameter3, 0x1a0, 0x40, true, 0xd0a467f09c106336)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_WHEAP_PSHED_INJECT_ERROR.Parameter4", parameter4, 0x1e0, 0x40, true, 0x14b4298b0757dde7)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "_WHEAP_PSHED_INJECT_ERROR.InjectionStatus", injection_status, 0x220, 0x20, true, 0x6676534857183a60)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_WHEAP_PSHED_INJECT_ERROR.InjectionAttempted", injection_attempted, 0x240, 0x8, true, 0x5caa95a5c136c911)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_WHEAP_PSHED_INJECT_ERROR.InjectionByPlugin", injection_by_plugin, 0x248, 0x8, true, 0x9a77c4549b414a92)
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
#endif