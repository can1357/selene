#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_AHC_SERVICE_DATACACHE.FileHandle", file_handle, 0x0, 0x40, true, 0xdc8d5b0c16678c53)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_AHC_SERVICE_DATACACHE.ExeType", exe_type, 0x40, 0x10, true, 0xa6b06b454c954d14)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_AHC_SERVICE_DATACACHE.HintFlags", hint_flags, 0x60, 0x20, true, 0xd3babe8a82eb0f43)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_AHC_SERVICE_DATACACHE.ProcessHandle", process_handle, 0x80, 0x40, true, 0xe923c3ddb5baa54f)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_AHC_SERVICE_DATACACHE.FileName", file_name, 0xc0, 0x80, true, 0x108f6d32ab0cf90)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_AHC_SERVICE_DATACACHE.Environment", environment, 0x140, 0x80, true, 0xd6a814e40c0daf66)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_AHC_SERVICE_DATACACHE.PackageAlias", package_alias, 0x1c0, 0x80, true, 0xc32a24958359e266)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_AHC_SERVICE_DATACACHE.CustomDataSize", custom_data_size, 0x240, 0x20, true, 0x1f7aab5d7d4ab77)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t*), "_AHC_SERVICE_DATACACHE.CustomData", custom_data, 0x280, 0x40, true, 0xb344da2d9d555969)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#endif