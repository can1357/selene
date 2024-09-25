#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_ALPC_SERVER_INFORMATION.In.ThreadHandle", thread_handle, 0x0, 0x40, true, 0xb70dac11c8bc38a7)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_in_t), "_ALPC_SERVER_INFORMATION.In", in, 0x0, 0x40, true, 0xfd7b85fca8436a36)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_ALPC_SERVER_INFORMATION.Out.ThreadBlocked", thread_blocked, 0x0, 0x8, true, 0x2370b70aaf717d09)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_ALPC_SERVER_INFORMATION.Out.ConnectedProcessId", connected_process_id, 0x40, 0x40, true, 0x518280acffc9104b)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_ALPC_SERVER_INFORMATION.Out.ConnectionPortName", connection_port_name, 0x80, 0x80, true, 0xcda54a8eb9863646)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u4_out_t), "_ALPC_SERVER_INFORMATION.Out", out, 0x0, 0x0, true, 0x2531e40be50bae2b)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif