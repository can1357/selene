#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 4>), "_CDROM_PERFORMANCE_HEADER.DataLength", data_length, 0x0, 0x20, true, 0x7e673ad7d4f739d7)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_CDROM_PERFORMANCE_HEADER.Except", except, 0x20, 0x1, true, 0xd2619ded433687ae, 1, uint8_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_CDROM_PERFORMANCE_HEADER.Write", write, 0x21, 0x1, true, 0x36ee08c99e2e326f, 1, uint8_t)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t>), "_CDROM_PERFORMANCE_HEADER.Data", data, 0x40, 0x0, true, 0x7e261ff2fba6c71d)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif