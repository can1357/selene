#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::disk_geometry_t), "_DISK_GEOMETRY_EX.Geometry", geometry, 0x0, 0xc0, true, 0x302480e9f90860cf)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_DISK_GEOMETRY_EX.DiskSize", disk_size, 0xc0, 0x40, true, 0x8d69ca19c6e3173b)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 1>), "_DISK_GEOMETRY_EX.Data", data, 0x100, 0x8, true, 0xe94fdf22a60fd3f1)
#else
#define _m00
#define _m01
#define _m02
#endif