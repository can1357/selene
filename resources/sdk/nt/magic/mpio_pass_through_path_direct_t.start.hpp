#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::scsi_pass_through_direct_t), "_MPIO_PASS_THROUGH_PATH_DIRECT.PassThrough", pass_through, 0x0, 0xc0, true, 0x5365e7fe25479881)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_MPIO_PASS_THROUGH_PATH_DIRECT.Version", version, 0x1c0, 0x20, true, 0xd9310ecb6a6cd765)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_MPIO_PASS_THROUGH_PATH_DIRECT.Length", length, 0x1e0, 0x10, true, 0x4855ead91f6d9aa0)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_MPIO_PASS_THROUGH_PATH_DIRECT.Flags", flags, 0x1f0, 0x8, true, 0x3475f6e5d653ab9b)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_MPIO_PASS_THROUGH_PATH_DIRECT.PortNumber", port_number, 0x1f8, 0x8, true, 0xf7c2b1d169044520)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_MPIO_PASS_THROUGH_PATH_DIRECT.MpioPathId", mpio_path_id, 0x200, 0x40, true, 0x9134f506dbf09763)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif