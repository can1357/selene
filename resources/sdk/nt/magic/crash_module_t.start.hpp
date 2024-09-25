#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_CRASH_MODULE.BaseOfImage", base_of_image, 0x0, 0x40, true, 0x626af496a4f0430)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_CRASH_MODULE.SizeOfImage", size_of_image, 0x40, 0x20, true, 0x10254b1dde0d6b71)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_CRASH_MODULE.ImageNameLength", image_name_length, 0x60, 0x20, true, 0x5c452be7b878c7d9)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<char>), "_CRASH_MODULE.ImageName", image_name, 0x80, 0x0, true, 0x8473fc26d61e727)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif