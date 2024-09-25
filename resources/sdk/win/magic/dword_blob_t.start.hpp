#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_DWORD_BLOB.clSize", cl_size, 0x0, 0x20, true, 0x58dbce4954d7ba25)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 1>), "_DWORD_BLOB.alData", al_data, 0x20, 0x20, true, 0xb5577fba0a8def75)
#else
#define _m00
#define _m01
#endif