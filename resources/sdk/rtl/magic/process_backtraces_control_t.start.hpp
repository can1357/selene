#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RTL_PROCESS_BACKTRACES_CONTROL.ControlCode", control_code, 0x0, 0x20, true, 0x362b70cd580e6ba)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RTL_PROCESS_BACKTRACES_CONTROL.ControlSize", control_size, 0x20, 0x20, true, 0xdb1438dd6879d60b)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 1>), "_RTL_PROCESS_BACKTRACES_CONTROL.ControlData", control_data, 0x40, 0x8, true, 0x5f4e4e4ed85ed26e)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtl::stack_trace_database_create_t), "_RTL_PROCESS_BACKTRACES_CONTROL.DatabaseCreate", database_create, 0x40, 0xc0, true, 0x9fb7c50f94b4b03)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif