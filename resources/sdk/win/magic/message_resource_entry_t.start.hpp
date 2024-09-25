#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_MESSAGE_RESOURCE_ENTRY.Length", length, 0x0, 0x10, true, 0xb920594f6711d22a)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_MESSAGE_RESOURCE_ENTRY.Flags", flags, 0x10, 0x10, true, 0x7869b619c989a759)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 1>), "_MESSAGE_RESOURCE_ENTRY.Text", text, 0x20, 0x8, true, 0xbe3f0d2aba908d85)
#else
#define _m00
#define _m01
#define _m02
#endif