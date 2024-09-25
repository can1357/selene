#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_CRASH_MODULE64.BaseOfImage", base_of_image, 0x0, 0x40, true, 0x2a48347432714ce3)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_CRASH_MODULE64.SizeOfImage", size_of_image, 0x40, 0x20, true, 0x606a23fbc5334881)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_CRASH_MODULE64.ImageNameLength", image_name_length, 0x60, 0x20, true, 0x6576be877616656b)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<char>), "_CRASH_MODULE64.ImageName", image_name, 0x80, 0x0, true, 0x833266fc4b8cb544)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif