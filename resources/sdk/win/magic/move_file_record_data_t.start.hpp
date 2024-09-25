#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "MOVE_FILE_RECORD_DATA.FileHandle", file_handle, 0x0, 0x40, true, 0xacdcaf6982d9c2b7)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "MOVE_FILE_RECORD_DATA.SourceFileRecord", source_file_record, 0x40, 0x40, true, 0x3839dc0dc44107e4)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "MOVE_FILE_RECORD_DATA.TargetFileRecord", target_file_record, 0x80, 0x40, true, 0x798ce7933dabed28)
#else
#define _m00
#define _m01
#define _m02
#endif