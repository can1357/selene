#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_MPIO_PASS_THROUGH_PATH_EX.PassThroughOffset", pass_through_offset, 0x0, 0x20, true, 0x8a7375bd1d830dac)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_MPIO_PASS_THROUGH_PATH_EX.Version", version, 0x20, 0x20, true, 0xddf069136512163f)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_MPIO_PASS_THROUGH_PATH_EX.Length", length, 0x40, 0x10, true, 0x935745be9f47d899)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_MPIO_PASS_THROUGH_PATH_EX.Flags", flags, 0x50, 0x8, true, 0x16e3699165711d87)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_MPIO_PASS_THROUGH_PATH_EX.PortNumber", port_number, 0x58, 0x8, true, 0x8f5f1d5838b13ce1)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_MPIO_PASS_THROUGH_PATH_EX.MpioPathId", mpio_path_id, 0x80, 0x40, true, 0x78e49b7dfdcea36c)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif