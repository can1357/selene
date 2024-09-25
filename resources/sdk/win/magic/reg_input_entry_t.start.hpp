#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_RegInputEntry.clsid", clsid, 0x0, 0x80, true, 0x10de2b8459e9ae7c)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_RegInputEntry.oxid", oxid, 0x80, 0x40, true, 0x5a8728af8fb9a831)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_RegInputEntry.ipid", ipid, 0xc0, 0x80, true, 0x7f023d2d23beaf80)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RegInputEntry.dwFlags", dw_flags, 0x140, 0x20, true, 0x5aaa65e825751c79)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RegInputEntry.ulServiceId", ul_service_id, 0x160, 0x20, true, 0xcf44d65501b9076)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif