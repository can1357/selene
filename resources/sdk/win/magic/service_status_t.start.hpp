#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SERVICE_STATUS.dwServiceType", dw_service_type, 0x0, 0x20, true, 0xcffb78447c68b6b5)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SERVICE_STATUS.dwCurrentState", dw_current_state, 0x20, 0x20, true, 0xfa09a01e57776ad4)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SERVICE_STATUS.dwControlsAccepted", dw_controls_accepted, 0x40, 0x20, true, 0x314b8810462ec02d)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SERVICE_STATUS.dwWin32ExitCode", dw_win32_exit_code, 0x60, 0x20, true, 0x13d2cbe59d450e91)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SERVICE_STATUS.dwServiceSpecificExitCode", dw_service_specific_exit_code, 0x80, 0x20, true, 0xd1f90045190a3705)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SERVICE_STATUS.dwCheckPoint", dw_check_point, 0xa0, 0x20, true, 0x13343eb70c7df302)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SERVICE_STATUS.dwWaitHint", dw_wait_hint, 0xc0, 0x20, true, 0x9f4e2d8423642ece)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif