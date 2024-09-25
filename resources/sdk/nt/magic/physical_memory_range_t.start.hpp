#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_PHYSICAL_MEMORY_RANGE.BaseAddress", base_address, 0x0, 0x40, true, 0xb424ddcb7358642)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_PHYSICAL_MEMORY_RANGE.NumberOfBytes", number_of_bytes, 0x40, 0x40, true, 0xa47d7efb1e4f996c)
#else
#define _m00
#define _m01
#endif