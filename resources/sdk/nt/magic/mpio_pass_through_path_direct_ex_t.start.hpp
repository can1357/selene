#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_MPIO_PASS_THROUGH_PATH_DIRECT_EX.PassThroughOffset", pass_through_offset, 0x0, 0x20, true, 0xfb84480e17fc6a9d)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_MPIO_PASS_THROUGH_PATH_DIRECT_EX.Version", version, 0x20, 0x20, true, 0x50cdd2f6a0742d79)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_MPIO_PASS_THROUGH_PATH_DIRECT_EX.Length", length, 0x40, 0x10, true, 0xbf3a9aa738069e55)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_MPIO_PASS_THROUGH_PATH_DIRECT_EX.Flags", flags, 0x50, 0x8, true, 0xb1e829f443497362)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_MPIO_PASS_THROUGH_PATH_DIRECT_EX.PortNumber", port_number, 0x58, 0x8, true, 0xe13bcffb5c59786c)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_MPIO_PASS_THROUGH_PATH_DIRECT_EX.MpioPathId", mpio_path_id, 0x80, 0x40, true, 0x3ae886114750c516)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif