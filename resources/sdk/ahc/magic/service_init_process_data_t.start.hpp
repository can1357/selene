#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_AHC_SERVICE_INIT_PROCESS_DATA.ProcessHandle", process_handle, 0x0, 0x40, true, 0xd37f64ddd20f2319)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_AHC_SERVICE_INIT_PROCESS_DATA.Data", data, 0x40, 0x40, true, 0x9766c2abd453047f)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_AHC_SERVICE_INIT_PROCESS_DATA.DataSize", data_size, 0x80, 0x20, true, 0x309de7d374ce928e)
#else
#define _m00
#define _m01
#define _m02
#endif