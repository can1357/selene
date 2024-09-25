#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_stat32i64.st_dev", st_dev, 0x0, 0x20, true, 0x52ca1128ba5ec6a5)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_stat32i64.st_ino", st_ino, 0x20, 0x10, true, 0x66182ba3f8a73e74)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_stat32i64.st_mode", st_mode, 0x30, 0x10, true, 0x8e8c64d65dde7d6a)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int16_t), "_stat32i64.st_nlink", st_nlink, 0x40, 0x10, true, 0x8f4f070c5c7768d0)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int16_t), "_stat32i64.st_uid", st_uid, 0x50, 0x10, true, 0x95b7390bd8f77606)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int16_t), "_stat32i64.st_gid", st_gid, 0x60, 0x10, true, 0x87d65ed82329ba87)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_stat32i64.st_rdev", st_rdev, 0x80, 0x20, true, 0xd5f578e7f81b34c6)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_stat32i64.st_size", st_size, 0xc0, 0x40, true, 0xb535f1698abd241d)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_stat32i64.st_atime", st_atime, 0x100, 0x20, true, 0xace812f96cf4086e)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_stat32i64.st_mtime", st_mtime, 0x120, 0x20, true, 0x3976a7192e28fec2)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_stat32i64.st_ctime", st_ctime, 0x140, 0x20, true, 0xcfe07f8adecc067)
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