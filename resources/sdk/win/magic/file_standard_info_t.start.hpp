#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_FILE_STANDARD_INFO.AllocationSize", allocation_size, 0x0, 0x40, true, 0x1ec96024179a2aed)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_FILE_STANDARD_INFO.EndOfFile", end_of_file, 0x40, 0x40, true, 0x1ad9d05f3a93e857)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_STANDARD_INFO.NumberOfLinks", number_of_links, 0x80, 0x20, true, 0x6d57edb6364023ba)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_FILE_STANDARD_INFO.DeletePending", delete_pending, 0xa0, 0x8, true, 0xd3b85ad0a1945723)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_FILE_STANDARD_INFO.Directory", directory, 0xa8, 0x8, true, 0xbeb7691dcdcbc2de)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif