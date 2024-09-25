#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_CC_FILE_SIZES.AllocationSize", allocation_size, 0x0, 0x40, true, 0xfbfde576c73678da)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_CC_FILE_SIZES.FileSize", file_size, 0x40, 0x40, true, 0xb5cb72bf40f40fd7)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_CC_FILE_SIZES.ValidDataLength", valid_data_length, 0x80, 0x40, true, 0x455dcd119b60b33d)
#else
#define _m00
#define _m01
#define _m02
#endif