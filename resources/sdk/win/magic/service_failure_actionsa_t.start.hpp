#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SERVICE_FAILURE_ACTIONSA.dwResetPeriod", dw_reset_period, 0x0, 0x20, true, 0xb067b10cf4659004)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(char*), "_SERVICE_FAILURE_ACTIONSA.lpRebootMsg", lp_reboot_msg, 0x40, 0x40, true, 0xe1450328afe062cf)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(char*), "_SERVICE_FAILURE_ACTIONSA.lpCommand", lp_command, 0x80, 0x40, true, 0x972534a31af782cc)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SERVICE_FAILURE_ACTIONSA.cActions", c_actions, 0xc0, 0x20, true, 0xdc62b2f93980fddb)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::sc_action_t*), "_SERVICE_FAILURE_ACTIONSA.lpsaActions", lpsa_actions, 0x100, 0x40, true, 0x1769b1cbf8b48e29)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif