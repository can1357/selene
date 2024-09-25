#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SEP_SID_VALUES_BLOCK.BlockLength", block_length, 0x0, 0x20, true, 0xd8ad2fe2a92f2740)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_SEP_SID_VALUES_BLOCK.ReferenceCount", reference_count, 0x40, 0x40, true, 0xdbc244fd2499028f)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SEP_SID_VALUES_BLOCK.SidCount", sid_count, 0x80, 0x20, true, 0xcf8fee74e1fe8cd2)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_SEP_SID_VALUES_BLOCK.SidValuesStart", sid_values_start, 0xc0, 0x40, true, 0x1f299beb3fa23b6)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif