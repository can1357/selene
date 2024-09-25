#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PERFORMANCE_DESCRIPTOR.RandomAccess", random_access, 0x0, 0x1, true, 0x18e9d568a984d0f4, 1, uint8_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PERFORMANCE_DESCRIPTOR.Exact", exact, 0x1, 0x1, true, 0xdbf981a0694f9646, 1, uint8_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PERFORMANCE_DESCRIPTOR.RestoreDefaults", restore_defaults, 0x2, 0x1, true, 0x68e3bf92152c00d, 1, uint8_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_PERFORMANCE_DESCRIPTOR.WriteRotationControl", write_rotation_control, 0x3, 0x2, true, 0x8067b5e4563f29cb, 2, uint8_t)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 4>), "_PERFORMANCE_DESCRIPTOR.StartLba", start_lba, 0x20, 0x20, true, 0xa064abd205a136b0)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 4>), "_PERFORMANCE_DESCRIPTOR.EndLba", end_lba, 0x40, 0x20, true, 0x1a1dc2dceca81c0f)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 4>), "_PERFORMANCE_DESCRIPTOR.ReadSize", read_size, 0x60, 0x20, true, 0xde6ccd8fa42cd4e8)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 4>), "_PERFORMANCE_DESCRIPTOR.ReadTime", read_time, 0x80, 0x20, true, 0x1b7ab6536e5d0838)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 4>), "_PERFORMANCE_DESCRIPTOR.WriteSize", write_size, 0xa0, 0x20, true, 0x82762974263e1b6f)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 4>), "_PERFORMANCE_DESCRIPTOR.WriteTime", write_time, 0xc0, 0x20, true, 0xf41075199c70fe99)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#define _m09
#endif