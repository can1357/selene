#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_INDEX_RECORD.ullKey", ull_key, 0x0, 0x40, true, 0x7d0f4d99243e5e44)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_INDEX_RECORD.tiRef", ti_ref, 0x40, 0x20, true, 0xda7f9837ea8231dd)
#else
#define _m00
#define _m01
#endif