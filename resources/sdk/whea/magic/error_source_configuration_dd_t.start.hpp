#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<uint32_t(void*, uint32_t)>*), "_WHEA_ERROR_SOURCE_CONFIGURATION_DD.Initialize", initialize, 0x0, 0x40, true, 0x9f2272e3953cba55)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_WHEA_ERROR_SOURCE_CONFIGURATION_DD.Uninitialize", uninitialize, 0x40, 0x40, true, 0x19878ef271b33c75)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint32_t(void*, uint32_t*)>*), "_WHEA_ERROR_SOURCE_CONFIGURATION_DD.Correct", correct, 0x80, 0x40, true, 0x84e53084cc23d137)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, void*)>*), "_WHEA_ERROR_SOURCE_CONFIGURATION_DD.Ready", ready, 0x0, 0x0, false, 0x837cd4f2f866f16)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif