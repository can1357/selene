#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PERFINFO_CC_FLUSH_SECTION.WorkItemKey", work_item_key, 0x0, 0x40, true, 0x622f2d03f9637714)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PERFINFO_CC_FLUSH_SECTION.FileObjectKey", file_object_key, 0x40, 0x40, true, 0xb7aa06ba5d2c0aab)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PERFINFO_CC_FLUSH_SECTION.Offset", offset, 0x80, 0x40, true, 0xc37b98256bdba77c)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PERFINFO_CC_FLUSH_SECTION.Length", length, 0xc0, 0x20, true, 0xa730589f02379ad6)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PERFINFO_CC_FLUSH_SECTION.MmFlushFlags", mm_flush_flags, 0xe0, 0x20, true, 0x9cf062785e48f45e)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif