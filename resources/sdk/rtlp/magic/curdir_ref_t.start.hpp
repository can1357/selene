#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "_RTLP_CURDIR_REF.ReferenceCount", reference_count, 0x0, 0x20, true, 0xd60f28dd8e73c483)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_RTLP_CURDIR_REF.DirectoryHandle", directory_handle, 0x40, 0x40, true, 0x8dbf0f999b71d497)
#else
#define _m00
#define _m01
#endif