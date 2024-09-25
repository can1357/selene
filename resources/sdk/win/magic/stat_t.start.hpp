#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "stat.st_dev", st_dev, 0x0, 0x20, true, 0x159a71216b770c87)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "stat.st_ino", st_ino, 0x20, 0x10, true, 0x8b757a882ba0ff1f)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "stat.st_mode", st_mode, 0x30, 0x10, true, 0xfe8c40fc066ec66b)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int16_t), "stat.st_nlink", st_nlink, 0x40, 0x10, true, 0x239dabe439422f2)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int16_t), "stat.st_uid", st_uid, 0x50, 0x10, true, 0xe1fb5ba5c1d1de51)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int16_t), "stat.st_gid", st_gid, 0x60, 0x10, true, 0x43796a8fd800fe97)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "stat.st_rdev", st_rdev, 0x80, 0x20, true, 0xa0de4f56a94207de)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "stat.st_size", st_size, 0xa0, 0x20, true, 0x21943248159025d7)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "stat.st_atime", st_atime, 0xc0, 0x40, true, 0xce63693e8a3a327c)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "stat.st_mtime", st_mtime, 0x100, 0x40, true, 0xbb96ff46af05d706)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "stat.st_ctime", st_ctime, 0x140, 0x40, true, 0xb4e9173d264bde6e)
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