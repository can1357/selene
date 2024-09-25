#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_FILE_STANDARD_INFORMATION.AllocationSize", allocation_size, 0x0, 0x40, true, 0x4f02232386f77ff8)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_FILE_STANDARD_INFORMATION.EndOfFile", end_of_file, 0x40, 0x40, true, 0xf8ea6597f47d50ec)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_STANDARD_INFORMATION.NumberOfLinks", number_of_links, 0x80, 0x20, true, 0x9a3e07f37c49458f)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_FILE_STANDARD_INFORMATION.DeletePending", delete_pending, 0xa0, 0x8, true, 0x61206d108e4aaa03)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_FILE_STANDARD_INFORMATION.Directory", directory, 0xa8, 0x8, true, 0x6699b5b3b7b2fdee)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif