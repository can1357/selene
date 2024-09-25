#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::scsi_pass_through_t), "_MPIO_PASS_THROUGH_PATH.PassThrough", pass_through, 0x0, 0xc0, true, 0x4e3a9e2e1930c562)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_MPIO_PASS_THROUGH_PATH.Version", version, 0x1c0, 0x20, true, 0x2f241fcc4cde727d)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_MPIO_PASS_THROUGH_PATH.Length", length, 0x1e0, 0x10, true, 0x19d34d4348ded319)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_MPIO_PASS_THROUGH_PATH.Flags", flags, 0x1f0, 0x8, true, 0x26d6de089bdb2303)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_MPIO_PASS_THROUGH_PATH.PortNumber", port_number, 0x1f8, 0x8, true, 0x6ab220062ec77905)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_MPIO_PASS_THROUGH_PATH.MpioPathId", mpio_path_id, 0x200, 0x40, true, 0x98254131de89cd9c)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif