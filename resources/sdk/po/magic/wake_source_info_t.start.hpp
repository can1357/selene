#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PO_WAKE_SOURCE_INFO.Count", count, 0x0, 0x20, true, 0x8ef28979fdb18f66)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 1>), "_PO_WAKE_SOURCE_INFO.Offsets", offsets, 0x20, 0x20, true, 0x20b748f8e17393b3)
#else
#define _m00
#define _m01
#endif