#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_CRASH_MODULE32.BaseOfImage", base_of_image, 0x0, 0x20, true, 0x1bc8e81cd98b39fa)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_CRASH_MODULE32.SizeOfImage", size_of_image, 0x20, 0x20, true, 0xf504bd84ac0a033a)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_CRASH_MODULE32.ImageNameLength", image_name_length, 0x40, 0x20, true, 0x7a3c9bee6d763e35)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<char>), "_CRASH_MODULE32.ImageName", image_name, 0x60, 0x0, true, 0x667af6a50dd5a369)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif