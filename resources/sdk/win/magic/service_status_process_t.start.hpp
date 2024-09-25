#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SERVICE_STATUS_PROCESS.dwServiceType", dw_service_type, 0x0, 0x20, true, 0xabd34544c1d22261)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SERVICE_STATUS_PROCESS.dwCurrentState", dw_current_state, 0x20, 0x20, true, 0x3494e117f6a6e12a)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SERVICE_STATUS_PROCESS.dwControlsAccepted", dw_controls_accepted, 0x40, 0x20, true, 0xe4bb780b25b0db8b)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SERVICE_STATUS_PROCESS.dwWin32ExitCode", dw_win32_exit_code, 0x60, 0x20, true, 0x34ddabcebd2af41)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SERVICE_STATUS_PROCESS.dwServiceSpecificExitCode", dw_service_specific_exit_code, 0x80, 0x20, true, 0xa067f1f9101550cf)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SERVICE_STATUS_PROCESS.dwCheckPoint", dw_check_point, 0xa0, 0x20, true, 0x1316ec7079bf5f6)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SERVICE_STATUS_PROCESS.dwWaitHint", dw_wait_hint, 0xc0, 0x20, true, 0xe14891e2bf3fa343)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SERVICE_STATUS_PROCESS.dwProcessId", dw_process_id, 0xe0, 0x20, true, 0x23593d938a33a510)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SERVICE_STATUS_PROCESS.dwServiceFlags", dw_service_flags, 0x100, 0x20, true, 0x5133a7a7a9f517db)
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