#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_MPIO_PASS_THROUGH_PATH32_EX.PassThroughOffset", pass_through_offset, 0x0, 0x20, true, 0xc551183db8cdf50b)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_MPIO_PASS_THROUGH_PATH32_EX.Version", version, 0x20, 0x20, true, 0x5020a5ca3169dab4)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_MPIO_PASS_THROUGH_PATH32_EX.Length", length, 0x40, 0x10, true, 0xfc1bfbc97ad70c8e)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_MPIO_PASS_THROUGH_PATH32_EX.Flags", flags, 0x50, 0x8, true, 0xefaddf75da2f9359)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_MPIO_PASS_THROUGH_PATH32_EX.PortNumber", port_number, 0x58, 0x8, true, 0x2962f5fefb987f6a)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_MPIO_PASS_THROUGH_PATH32_EX.MpioPathId", mpio_path_id, 0x80, 0x40, true, 0x7cf7eb115a42a839)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif