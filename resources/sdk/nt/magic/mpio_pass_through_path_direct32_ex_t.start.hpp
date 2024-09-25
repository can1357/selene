#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_MPIO_PASS_THROUGH_PATH_DIRECT32_EX.PassThroughOffset", pass_through_offset, 0x0, 0x20, true, 0xf35940753a1a69f)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_MPIO_PASS_THROUGH_PATH_DIRECT32_EX.Version", version, 0x20, 0x20, true, 0x745c839568aa1fe5)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_MPIO_PASS_THROUGH_PATH_DIRECT32_EX.Length", length, 0x40, 0x10, true, 0x603bd90b76deda68)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_MPIO_PASS_THROUGH_PATH_DIRECT32_EX.Flags", flags, 0x50, 0x8, true, 0x59eecbf80918e184)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_MPIO_PASS_THROUGH_PATH_DIRECT32_EX.PortNumber", port_number, 0x58, 0x8, true, 0x60d6b75d63f89d40)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_MPIO_PASS_THROUGH_PATH_DIRECT32_EX.MpioPathId", mpio_path_id, 0x80, 0x40, true, 0x343cb267893d4e0e)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif