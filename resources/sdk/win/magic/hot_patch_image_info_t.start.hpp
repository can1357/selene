#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HOT_PATCH_IMAGE_INFO.CheckSum", check_sum, 0x0, 0x20, true, 0xad9d0a376223b053)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HOT_PATCH_IMAGE_INFO.TimeDateStamp", time_date_stamp, 0x20, 0x20, true, 0x25610f19591cc278)
#else
#define _m00
#define _m01
#endif