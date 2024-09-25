#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_stat64.st_dev", st_dev, 0x0, 0x20, true, 0xcea868ec9758656c)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_stat64.st_ino", st_ino, 0x20, 0x10, true, 0xddfc3d15b7b73d20)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_stat64.st_mode", st_mode, 0x30, 0x10, true, 0xf629e75453d39622)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int16_t), "_stat64.st_nlink", st_nlink, 0x40, 0x10, true, 0x88dc4858c0fc9de2)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int16_t), "_stat64.st_uid", st_uid, 0x50, 0x10, true, 0x45b2bdd42716cbc4)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int16_t), "_stat64.st_gid", st_gid, 0x60, 0x10, true, 0xeecd4173ce784cb5)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_stat64.st_rdev", st_rdev, 0x80, 0x20, true, 0x48b10d90b57886c5)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_stat64.st_size", st_size, 0xc0, 0x40, true, 0xc6c7afa19ce79ea8)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_stat64.st_atime", st_atime, 0x100, 0x40, true, 0x10562b4c57ad06a2)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_stat64.st_mtime", st_mtime, 0x140, 0x40, true, 0x62ecdc194b104cf6)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_stat64.st_ctime", st_ctime, 0x180, 0x40, true, 0x2ce48822a1184ff8)
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