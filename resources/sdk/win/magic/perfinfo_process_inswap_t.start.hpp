#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PERFINFO_PROCESS_INSWAP.DirectoryTableBase", directory_table_base, 0x0, 0x40, true, 0x68feb89eb7578f07)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PERFINFO_PROCESS_INSWAP.ProcessId", process_id, 0x40, 0x20, true, 0xd1dae0321f708867)
#else
#define _m00
#define _m01
#endif