#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint9_t), "_UNIQUE_PROCESS_INFORMATION.DontUse", dont_use, 0x0, 0x9, true, 0xa56bbf4d7a4b8f5d, 9, uint64_t)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint48_t), "_UNIQUE_PROCESS_INFORMATION.UniqueProcessKey", unique_process_key, 0x9, 0x30, true, 0x15e886e85d424ffd, 48, uint64_t)
#else
#define _m00
#define _m01
#endif