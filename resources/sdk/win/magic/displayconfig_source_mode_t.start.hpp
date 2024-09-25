#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "DISPLAYCONFIG_SOURCE_MODE.width", width, 0x0, 0x20, true, 0x3f6406122b681ec)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "DISPLAYCONFIG_SOURCE_MODE.height", height, 0x20, 0x20, true, 0xf841840b1167c793)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(int32_t), "DISPLAYCONFIG_SOURCE_MODE.pixelFormat", pixel_format, 0x40, 0x20, true, 0xa73d466e65a6df25, 32, uint32_t)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct win::pointl_t), "DISPLAYCONFIG_SOURCE_MODE.position", position, 0x60, 0x40, true, 0xa985c2805370e7be)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif