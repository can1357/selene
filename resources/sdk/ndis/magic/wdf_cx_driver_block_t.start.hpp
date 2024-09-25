#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::object_header_t), "_NDIS_WDF_CX_DRIVER_BLOCK.Header", header, 0x0, 0x20, true, 0x7554525b483efb72)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::driver_object_t*), "_NDIS_WDF_CX_DRIVER_BLOCK.DriverObject", driver_object, 0x40, 0x40, true, 0x7fd484ef0c47c59f)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view*), "_NDIS_WDF_CX_DRIVER_BLOCK.RegistryPath", registry_path, 0x80, 0x40, true, 0xb2eec318b5dd1f2a)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::wdf_cx_driver_context_t*), "_NDIS_WDF_CX_DRIVER_BLOCK.CxDriverContext", cx_driver_context, 0xc0, 0x40, true, 0xfa34350df1b049ea)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::wdf_cx_characteristics_t), "_NDIS_WDF_CX_DRIVER_BLOCK.Chars", chars, 0x100, 0x0, true, 0x8c31ce768692ac25)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_WDF_CX_DRIVER_BLOCK.ClientCount", client_count, 0x500, 0x20, true, 0xec5472b2e8644639)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum ndis::wdf_cx_driver_state_t), "_NDIS_WDF_CX_DRIVER_BLOCK.State", state, 0x520, 0x8, true, 0x1db6f1b686a10433)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif