#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_Ea.Length", length, 0x0, 0x10, true, 0x4418d3ff0394966d)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_Ea.Flags", flags, 0x10, 0x10, true, 0x1fa06c27fcd63bc2)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_Ea.EaSize", ea_size, 0x20, 0x20, true, 0x51adb1d72aa04db1)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_Ea.EaInformationOffset", ea_information_offset, 0x40, 0x20, true, 0x141102f26493050)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif