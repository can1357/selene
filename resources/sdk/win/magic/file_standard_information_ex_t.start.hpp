#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_FILE_STANDARD_INFORMATION_EX.AllocationSize", allocation_size, 0x0, 0x40, true, 0xaadd2add4f3255ba)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_FILE_STANDARD_INFORMATION_EX.EndOfFile", end_of_file, 0x40, 0x40, true, 0x856fa597c0ba1a3a)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_STANDARD_INFORMATION_EX.NumberOfLinks", number_of_links, 0x80, 0x20, true, 0x36abcd92257cfd46)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_FILE_STANDARD_INFORMATION_EX.DeletePending", delete_pending, 0xa0, 0x8, true, 0x61e68959e6915855)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_FILE_STANDARD_INFORMATION_EX.Directory", directory, 0xa8, 0x8, true, 0xf3854ee68c0631ae)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_FILE_STANDARD_INFORMATION_EX.AlternateStream", alternate_stream, 0xb0, 0x8, true, 0x88d432baa2a5d94d)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_FILE_STANDARD_INFORMATION_EX.MetadataAttribute", metadata_attribute, 0xb8, 0x8, true, 0x66c603ab60485083)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif