#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "IMAGE_COR_VTABLEFIXUP.RVA", rva, 0x0, 0x20, true, 0x486c23b9e2cc079d)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "IMAGE_COR_VTABLEFIXUP.Count", count, 0x20, 0x10, true, 0xf315ad1bc4b3a611)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "IMAGE_COR_VTABLEFIXUP.Type", type, 0x30, 0x10, true, 0x867c1077d6cdac46)
#else
#define _m00
#define _m01
#define _m02
#endif