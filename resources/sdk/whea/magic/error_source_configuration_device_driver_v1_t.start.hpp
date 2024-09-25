#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEA_ERROR_SOURCE_CONFIGURATION_DEVICE_DRIVER_V1.Version", version, 0x0, 0x20, true, 0x59fee6da9d1cdd39)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_WHEA_ERROR_SOURCE_CONFIGURATION_DEVICE_DRIVER_V1.SourceGuid", source_guid, 0x20, 0x80, true, 0xab9ec48680997c88)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_WHEA_ERROR_SOURCE_CONFIGURATION_DEVICE_DRIVER_V1.LogTag", log_tag, 0xa0, 0x10, true, 0xc08aca2c625708)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, uint32_t)>*), "_WHEA_ERROR_SOURCE_CONFIGURATION_DEVICE_DRIVER_V1.Initialize", initialize, 0xe0, 0x40, true, 0x80085939cfa3b75)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_WHEA_ERROR_SOURCE_CONFIGURATION_DEVICE_DRIVER_V1.Uninitialize", uninitialize, 0x120, 0x40, true, 0xf84040c2d1e12470)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif