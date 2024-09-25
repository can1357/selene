#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::scsi_pass_through_direct32_t), "_MPIO_PASS_THROUGH_PATH_DIRECT32.PassThrough", pass_through, 0x0, 0x60, true, 0x3335d95728e3ee1f)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_MPIO_PASS_THROUGH_PATH_DIRECT32.Version", version, 0x160, 0x20, true, 0x9e58dde9b544abf4)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_MPIO_PASS_THROUGH_PATH_DIRECT32.Length", length, 0x180, 0x10, true, 0xe4c929b1511b7eba)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_MPIO_PASS_THROUGH_PATH_DIRECT32.Flags", flags, 0x190, 0x8, true, 0x4a275db13d312ae2)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_MPIO_PASS_THROUGH_PATH_DIRECT32.PortNumber", port_number, 0x198, 0x8, true, 0x31dd53751ed1325e)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_MPIO_PASS_THROUGH_PATH_DIRECT32.MpioPathId", mpio_path_id, 0x1c0, 0x40, true, 0x5246b6c823c985b8)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif