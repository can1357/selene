#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(const void*), "_PCW_DATA.Data", data, 0x0, 0x40, true, 0x5872accc3e9e4113)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_PCW_DATA.Size", size, 0x40, 0x20, true, 0x8c670340181efbc0)
#else
#define _m00
#define _m01
#endif