#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, struct ntdll::mca_exception_t*)>*), "_CPE_DRIVER_INFO.ExceptionCallback", exception_callback, 0x0, 0x40, true, 0x9a644c2698d97573)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pkdeferred_routine_t ), "_CPE_DRIVER_INFO.DpcCallback", dpc_callback, 0x40, 0x40, true, 0xed243645e8d62a60)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_CPE_DRIVER_INFO.DeviceContext", device_context, 0x80, 0x40, true, 0xe5acc956c4e7380b)
#else
#define _m00
#define _m01
#define _m02
#endif