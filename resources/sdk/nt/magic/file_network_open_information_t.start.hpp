#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_FILE_NETWORK_OPEN_INFORMATION.CreationTime", creation_time, 0x0, 0x40, true, 0xf7b9001ecbb9d663)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_FILE_NETWORK_OPEN_INFORMATION.LastAccessTime", last_access_time, 0x40, 0x40, true, 0xe56018be23b4693d)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_FILE_NETWORK_OPEN_INFORMATION.LastWriteTime", last_write_time, 0x80, 0x40, true, 0x4271278e72a49a21)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_FILE_NETWORK_OPEN_INFORMATION.ChangeTime", change_time, 0xc0, 0x40, true, 0xab533ad5ed0bb0fe)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_FILE_NETWORK_OPEN_INFORMATION.AllocationSize", allocation_size, 0x100, 0x40, true, 0xff7f721c729ed674)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_FILE_NETWORK_OPEN_INFORMATION.EndOfFile", end_of_file, 0x140, 0x40, true, 0x16f55432d60b5896)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_NETWORK_OPEN_INFORMATION.FileAttributes", file_attributes, 0x180, 0x20, true, 0xd850eacde3aa6079)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif