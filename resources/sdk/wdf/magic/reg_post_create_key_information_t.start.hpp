#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(nt::unicode_view*), "_REG_POST_CREATE_KEY_INFORMATION.CompleteName", complete_name, 0x0, 0x40, true, 0x736c803f603bcbe)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_REG_POST_CREATE_KEY_INFORMATION.Object", object, 0x40, 0x40, true, 0xb3c0350643e0088c)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "_REG_POST_CREATE_KEY_INFORMATION.Status", status, 0x80, 0x20, true, 0x4793cbbe93d5d769)
#else
#define _m00
#define _m01
#define _m02
#endif