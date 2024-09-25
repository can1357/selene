#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_HOT_PATCH_BASE.SequenceNumber", sequence_number, 0x0, 0x20, true, 0x29704480e9868bb0)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_HOT_PATCH_BASE.Flags", flags, 0x20, 0x20, true, 0x412c15133b3bed9f)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_HOT_PATCH_BASE.OriginalTimeDateStamp", original_time_date_stamp, 0x40, 0x20, true, 0x22c7ff982297fb76)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_HOT_PATCH_BASE.OriginalCheckSum", original_check_sum, 0x60, 0x20, true, 0x68d77399814e2717)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_HOT_PATCH_BASE.CodeIntegrityInfo", code_integrity_info, 0x80, 0x20, true, 0x6af9ec3420aaa4c6)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_HOT_PATCH_BASE.CodeIntegritySize", code_integrity_size, 0xa0, 0x20, true, 0x330ba9cdbb8819ba)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_HOT_PATCH_BASE.PatchTable", patch_table, 0xc0, 0x20, true, 0x3cacb3c5fe2e0c55)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_HOT_PATCH_BASE.BufferOffset", buffer_offset, 0xe0, 0x20, true, 0x38686bc95dfb4f31)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#endif