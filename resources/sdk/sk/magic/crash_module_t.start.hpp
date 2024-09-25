#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 32>), "_SK_CRASH_MODULE.ImageName", image_name, 0x0, 0x0, true, 0xc6cd0cffa4247f1b)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SK_CRASH_MODULE.SizeOfImage", size_of_image, 0x200, 0x20, true, 0x29697d5c6e7a370)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SK_CRASH_MODULE.TimeDateStamp", time_date_stamp, 0x220, 0x20, true, 0xbba6c700d8f0166e)
#else
#define _m00
#define _m01
#define _m02
#endif