#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_KSMAPPING.PhysicalAddress", physical_address, 0x0, 0x0, false, 0x8a493ceca38b056d)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KSMAPPING.ByteCount", byte_count, 0x0, 0x0, false, 0x33a9b986f75c6d64)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KSMAPPING.Alignment", alignment, 0x0, 0x0, false, 0xac520cb4c12b67a3)
#else
#define _m00
#define _m01
#define _m02
#endif