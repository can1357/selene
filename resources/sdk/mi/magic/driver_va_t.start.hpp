#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct mi::driver_va_t*), "_MI_DRIVER_VA.Next", next, 0x0, 0x40, true, 0xe327afd93c5b7641)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::mmpte_t*), "_MI_DRIVER_VA.PointerPte", pointer_pte, 0x40, 0x40, true, 0x1a0b9171e488e52a)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtl::bitmap_t), "_MI_DRIVER_VA.BitMap", bit_map, 0x80, 0x80, true, 0xab9ae3d14a088a3e)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MI_DRIVER_VA.Hint", hint, 0x100, 0x20, true, 0x9af480f808a4aa10)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MI_DRIVER_VA.Flags", flags, 0x120, 0x20, true, 0xf8068327204c22a1)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif