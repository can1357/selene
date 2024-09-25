#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_PERFINFO_FILENAME_SAME_INFORMATION.OldFile", old_file, 0x0, 0x40, true, 0xde9f3fb1a0e7d978)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_PERFINFO_FILENAME_SAME_INFORMATION.NewFile", new_file, 0x40, 0x40, true, 0x9362b6a042efdafa)
#else
#define _m00
#define _m01
#endif