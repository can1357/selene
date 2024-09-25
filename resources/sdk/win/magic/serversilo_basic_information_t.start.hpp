#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SERVERSILO_BASIC_INFORMATION.ServiceSessionId", service_session_id, 0x0, 0x20, true, 0x898083641b0fec37)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum nt::serversilo_state_t), "_SERVERSILO_BASIC_INFORMATION.State", state, 0x20, 0x20, true, 0x785fb6c36ba10387)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_SERVERSILO_BASIC_INFORMATION.ExitStatus", exit_status, 0x40, 0x20, true, 0xebad651d12e71d13)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_SERVERSILO_BASIC_INFORMATION.IsDownlevelContainer", is_downlevel_container, 0x60, 0x8, true, 0x36e4313f7fc5605)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_SERVERSILO_BASIC_INFORMATION.ApiSetSchema", api_set_schema, 0x80, 0x40, true, 0x4bd31d980d0aa5f)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_SERVERSILO_BASIC_INFORMATION.HostApiSetSchema", host_api_set_schema, 0xc0, 0x40, true, 0xeb3685d78fc0cc72)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif