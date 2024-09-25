#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum nt::kinterrupt_polarity_t), "_SECONDARY_INTERRUPT_LINE_STATE.Polarity", polarity, 0x0, 0x20, true, 0xbbb304560d8c5f02)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum nt::kinterrupt_mode_t), "_SECONDARY_INTERRUPT_LINE_STATE.Mode", mode, 0x20, 0x20, true, 0xb7051ab5875ffc16)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SECONDARY_INTERRUPT_LINE_STATE.Vector", vector, 0x40, 0x20, true, 0x3fd96a09236e00c0)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_SECONDARY_INTERRUPT_LINE_STATE.Unmasked", unmasked, 0x60, 0x8, true, 0xba2e2d77dd2d8bb1)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif