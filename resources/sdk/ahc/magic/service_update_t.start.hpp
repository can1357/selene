#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum ahc::info_class_t), "_AHC_SERVICE_UPDATE.InfoClass", info_class, 0x0, 0x20, true, 0x83b11928bae59a9d)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_AHC_SERVICE_UPDATE.PackageAlias", package_alias, 0x40, 0x80, true, 0xe0962c03d023911e)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_AHC_SERVICE_UPDATE.FileHandle", file_handle, 0xc0, 0x40, true, 0x9c967694c6c4d1b9)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_AHC_SERVICE_UPDATE.ExeSignature", exe_signature, 0x100, 0x80, true, 0x47344b74018bed43)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_AHC_SERVICE_UPDATE.Data", data, 0x180, 0x40, true, 0x1bf1e6df7df445ce)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_AHC_SERVICE_UPDATE.DataSize", data_size, 0x1c0, 0x20, true, 0x611a5ffb6134e103)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif