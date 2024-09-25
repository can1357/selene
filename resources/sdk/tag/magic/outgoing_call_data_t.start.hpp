#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagOutgoingCallData.dwServerPID", dw_server_pid, 0x0, 0x20, true, 0x2765e313be2a9b11)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagOutgoingCallData.dwServerTID", dw_server_tid, 0x20, 0x20, true, 0xc7279cb5677a0fa7)
#else
#define _m00
#define _m01
#endif