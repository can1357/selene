#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "NdrStringPtrHeader.dwUnique", dw_unique, 0x0, 0x20, true, 0x903974c77de86649)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "NdrStringPtrHeader.dwMax", dw_max, 0x20, 0x20, true, 0xe94727a35e6b0de0)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "NdrStringPtrHeader.dwOffset", dw_offset, 0x40, 0x20, true, 0xd2eb9fb59723646f)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "NdrStringPtrHeader.dwActual", dw_actual, 0x60, 0x20, true, 0xe1462cf5a8dd94cb)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif