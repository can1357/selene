#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_ENCLAVE_LOAD_INFO_VBS.ImageHandle", image_handle, 0x0, 0x40, true, 0x9b57e1d95cbce15)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_ENCLAVE_LOAD_INFO_VBS.NameLength", name_length, 0x40, 0x10, true, 0xedca2a691ea5a9b8)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 1>), "_ENCLAVE_LOAD_INFO_VBS.Name", name, 0x50, 0x10, true, 0xda8fca8b320d7293)
#else
#define _m00
#define _m01
#define _m02
#endif