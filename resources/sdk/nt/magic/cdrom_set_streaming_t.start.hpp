#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum nt::cdrom_speed_request_t), "_CDROM_SET_STREAMING.RequestType", request_type, 0x0, 0x20, true, 0x9e16b5df48a8b93)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_CDROM_SET_STREAMING.ReadSize", read_size, 0x20, 0x20, true, 0xf6f14b6c68bdba11)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_CDROM_SET_STREAMING.ReadTime", read_time, 0x40, 0x20, true, 0x4969f36fc3282d98)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_CDROM_SET_STREAMING.WriteSize", write_size, 0x60, 0x20, true, 0x7c9297ad06944499)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_CDROM_SET_STREAMING.WriteTime", write_time, 0x80, 0x20, true, 0x25b238d8157a8883)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_CDROM_SET_STREAMING.StartLba", start_lba, 0xa0, 0x20, true, 0x1796f4ed98941fe0)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_CDROM_SET_STREAMING.EndLba", end_lba, 0xc0, 0x20, true, 0xc2c09193180489cc)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum nt::write_rotation_t), "_CDROM_SET_STREAMING.RotationControl", rotation_control, 0xe0, 0x20, true, 0xd89152cf6977774f)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_CDROM_SET_STREAMING.RestoreDefaults", restore_defaults, 0x100, 0x8, true, 0xc63a600cd857d62a)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_CDROM_SET_STREAMING.SetExact", set_exact, 0x108, 0x8, true, 0x8a86cccc0a203ae8)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_CDROM_SET_STREAMING.RandomAccess", random_access, 0x110, 0x8, true, 0xba1b80127107ea2d)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_CDROM_SET_STREAMING.Persistent", persistent, 0x118, 0x8, true, 0xed395d1c5dea9042)
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
#define _m10
#define _m11
#endif