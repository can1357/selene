#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_SD_ENUM_SDS_ENTRY.Hash", hash, 0x0, 0x20, true, 0x6afef880d7ab26a7)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_SD_ENUM_SDS_ENTRY.SecurityId", security_id, 0x20, 0x20, true, 0x6f2840243785f931)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_SD_ENUM_SDS_ENTRY.Offset", offset, 0x40, 0x40, true, 0xaa5116f6b21e4384)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_SD_ENUM_SDS_ENTRY.Length", length, 0x80, 0x20, true, 0xd204846b042c34f9)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 1>), "_SD_ENUM_SDS_ENTRY.Descriptor", descriptor, 0xa0, 0x8, true, 0xcb2de09c64fe2040)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif