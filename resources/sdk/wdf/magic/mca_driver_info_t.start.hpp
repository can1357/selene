#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<uint8_t(void*, nt::trapframe*, nt::exframe*, struct ntdll::mca_exception_t*)>*), "_MCA_DRIVER_INFO.ExceptionCallback", exception_callback, 0x0, 0x40, true, 0x25e1eb58f4a31460)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pkdeferred_routine_t ), "_MCA_DRIVER_INFO.DpcCallback", dpc_callback, 0x40, 0x40, true, 0x6dacbee3a111c3be)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_MCA_DRIVER_INFO.DeviceContext", device_context, 0x80, 0x40, true, 0xfe42b9494df4a9bf)
#else
#define _m00
#define _m01
#define _m02
#endif