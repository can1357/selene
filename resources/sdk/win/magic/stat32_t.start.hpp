#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_stat32.st_dev", st_dev, 0x0, 0x20, true, 0xa7da3a0974665ff9)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_stat32.st_ino", st_ino, 0x20, 0x10, true, 0xfd72f0449f3111a2)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_stat32.st_mode", st_mode, 0x30, 0x10, true, 0xcdb029ecb2c07440)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int16_t), "_stat32.st_nlink", st_nlink, 0x40, 0x10, true, 0x4d7b522492248522)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int16_t), "_stat32.st_uid", st_uid, 0x50, 0x10, true, 0xddba0300abd9118b)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int16_t), "_stat32.st_gid", st_gid, 0x60, 0x10, true, 0x82d0fdccb61266b1)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_stat32.st_rdev", st_rdev, 0x80, 0x20, true, 0x1cb310b5a78f03e1)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_stat32.st_size", st_size, 0xa0, 0x20, true, 0x11a2b703fc82bcfb)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_stat32.st_atime", st_atime, 0xc0, 0x20, true, 0x4e63fd3d8d301de3)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_stat32.st_mtime", st_mtime, 0xe0, 0x20, true, 0xadfb42ea2227c7)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_stat32.st_ctime", st_ctime, 0x100, 0x20, true, 0x7579b00a3310b3f5)
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
#endif