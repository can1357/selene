#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, struct ntdll::mca_exception_t*)>*), "_CMC_DRIVER_INFO.ExceptionCallback", exception_callback, 0x0, 0x40, true, 0x67c17a2eb30145e6)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pkdeferred_routine_t ), "_CMC_DRIVER_INFO.DpcCallback", dpc_callback, 0x40, 0x40, true, 0xfeedc8c91c257311)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_CMC_DRIVER_INFO.DeviceContext", device_context, 0x80, 0x40, true, 0x6667dfa10a38eeaf)
#else
#define _m00
#define _m01
#define _m02
#endif