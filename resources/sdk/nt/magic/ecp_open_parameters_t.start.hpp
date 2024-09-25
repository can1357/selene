#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_ECP_OPEN_PARAMETERS.Size", size, 0x0, 0x10, true, 0x92be545f7aa8d9e4)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_ECP_OPEN_PARAMETERS.Flags", flags, 0x20, 0x20, true, 0x217ceffc20d217ce)
#else
#define _m00
#define _m01
#endif