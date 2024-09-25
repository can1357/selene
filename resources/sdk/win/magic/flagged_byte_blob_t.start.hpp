#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_FLAGGED_BYTE_BLOB.fFlags", f_flags, 0x0, 0x20, true, 0x3648f549ae872c11)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_FLAGGED_BYTE_BLOB.clSize", cl_size, 0x20, 0x20, true, 0x6253d9705579db05)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 1>), "_FLAGGED_BYTE_BLOB.abData", ab_data, 0x40, 0x8, true, 0xdba934f28497f405)
#else
#define _m00
#define _m01
#define _m02
#endif