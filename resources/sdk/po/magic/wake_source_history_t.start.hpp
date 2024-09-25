#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PO_WAKE_SOURCE_HISTORY.Count", count, 0x0, 0x20, true, 0x4722f38db51d9cb3)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 1>), "_PO_WAKE_SOURCE_HISTORY.Offsets", offsets, 0x20, 0x20, true, 0xdcfe1c7a9bbecb77)
#else
#define _m00
#define _m01
#endif