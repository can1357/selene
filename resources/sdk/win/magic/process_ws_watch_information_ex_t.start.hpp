#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::process_ws_watch_information_t), "_PROCESS_WS_WATCH_INFORMATION_EX.BasicInfo", basic_info, 0x0, 0x80, true, 0xbfc195977d6d8f04)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PROCESS_WS_WATCH_INFORMATION_EX.FaultingThreadId", faulting_thread_id, 0x80, 0x40, true, 0xf025f10d1dd962eb)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PROCESS_WS_WATCH_INFORMATION_EX.Flags", flags, 0xc0, 0x40, true, 0xbd9f94bb838effe5)
#else
#define _m00
#define _m01
#define _m02
#endif