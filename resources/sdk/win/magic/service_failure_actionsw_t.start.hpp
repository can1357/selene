#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SERVICE_FAILURE_ACTIONSW.dwResetPeriod", dw_reset_period, 0x0, 0x20, true, 0x5389e9e37bf3be34)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "_SERVICE_FAILURE_ACTIONSW.lpRebootMsg", lp_reboot_msg, 0x40, 0x40, true, 0xd826b7a31f5137fb)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "_SERVICE_FAILURE_ACTIONSW.lpCommand", lp_command, 0x80, 0x40, true, 0xe56fb71265dfe840)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SERVICE_FAILURE_ACTIONSW.cActions", c_actions, 0xc0, 0x20, true, 0x7b883895d23d3999)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::sc_action_t*), "_SERVICE_FAILURE_ACTIONSW.lpsaActions", lpsa_actions, 0x100, 0x40, true, 0xa60041a7ffca4176)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif