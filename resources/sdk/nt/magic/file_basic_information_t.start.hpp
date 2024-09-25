#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_FILE_BASIC_INFORMATION.CreationTime", creation_time, 0x0, 0x40, true, 0xd8a339704b131dab)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_FILE_BASIC_INFORMATION.LastAccessTime", last_access_time, 0x40, 0x40, true, 0x4fc09797adbd7e4c)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_FILE_BASIC_INFORMATION.LastWriteTime", last_write_time, 0x80, 0x40, true, 0x9c30c6016ec99cc2)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_FILE_BASIC_INFORMATION.ChangeTime", change_time, 0xc0, 0x40, true, 0x3f2792c3c4828d0a)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_BASIC_INFORMATION.FileAttributes", file_attributes, 0x100, 0x20, true, 0x852828f38198c8ea)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif