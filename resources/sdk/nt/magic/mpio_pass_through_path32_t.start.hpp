#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::scsi_pass_through32_t), "_MPIO_PASS_THROUGH_PATH32.PassThrough", pass_through, 0x0, 0x60, true, 0xc1c44f9e083e6aad)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_MPIO_PASS_THROUGH_PATH32.Version", version, 0x160, 0x20, true, 0x3b03793f5e427d1d)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_MPIO_PASS_THROUGH_PATH32.Length", length, 0x180, 0x10, true, 0x63ee110d3ed3e399)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_MPIO_PASS_THROUGH_PATH32.Flags", flags, 0x190, 0x8, true, 0x7f12f2ccd8ff88a9)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_MPIO_PASS_THROUGH_PATH32.PortNumber", port_number, 0x198, 0x8, true, 0x53b0f03335ea42ba)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_MPIO_PASS_THROUGH_PATH32.MpioPathId", mpio_path_id, 0x1c0, 0x40, true, 0x20743c5415a9f006)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif