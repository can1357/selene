#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_stat64i32.st_dev", st_dev, 0x0, 0x20, true, 0x5892a851c0f75054)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_stat64i32.st_ino", st_ino, 0x20, 0x10, true, 0x2c6ff36f603b86c3)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_stat64i32.st_mode", st_mode, 0x30, 0x10, true, 0x20f7f398f2b1c10)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int16_t), "_stat64i32.st_nlink", st_nlink, 0x40, 0x10, true, 0x326887e858089f2c)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int16_t), "_stat64i32.st_uid", st_uid, 0x50, 0x10, true, 0x3aa402fb8a258a8e)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int16_t), "_stat64i32.st_gid", st_gid, 0x60, 0x10, true, 0x61fd9928a2e40d3)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_stat64i32.st_rdev", st_rdev, 0x80, 0x20, true, 0x9771d08586e4222c)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_stat64i32.st_size", st_size, 0xa0, 0x20, true, 0xe7e3712b2f4a007f)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_stat64i32.st_atime", st_atime, 0xc0, 0x40, true, 0xf02324e778692d4a)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_stat64i32.st_mtime", st_mtime, 0x100, 0x40, true, 0x45edeb48dec650c8)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_stat64i32.st_ctime", st_ctime, 0x140, 0x40, true, 0x6b82c9ca7bb16e75)
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