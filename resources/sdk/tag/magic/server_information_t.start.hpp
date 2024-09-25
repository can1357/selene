#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagServerInformation.dwServerPid", dw_server_pid, 0x0, 0x20, true, 0x26b6390422c63b8d)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagServerInformation.dwServerTid", dw_server_tid, 0x20, 0x20, true, 0x2c8c87c2753c64e5)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "tagServerInformation.ui64ServerAddress", ui64_server_address, 0x40, 0x40, true, 0x7c8bec5bcf2e5fc2)
#else
#define _m00
#define _m01
#define _m02
#endif