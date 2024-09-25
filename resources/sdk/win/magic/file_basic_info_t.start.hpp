#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_FILE_BASIC_INFO.CreationTime", creation_time, 0x0, 0x40, true, 0x29f46340d23e6609)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_FILE_BASIC_INFO.LastAccessTime", last_access_time, 0x40, 0x40, true, 0x31b4b83b4a83a32e)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_FILE_BASIC_INFO.LastWriteTime", last_write_time, 0x80, 0x40, true, 0xb1060e4874ebdbde)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_FILE_BASIC_INFO.ChangeTime", change_time, 0xc0, 0x40, true, 0x19a9a9c5e129d7e1)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_BASIC_INFO.FileAttributes", file_attributes, 0x100, 0x20, true, 0x1c2638cb3c6181be)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif