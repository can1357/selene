#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::c_verifier_stack_data_t), "CVerifierTlsData.stackComInit", stack_com_init, 0x0, 0xc0, true, 0x2a9dfd496b4e606d)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::c_verifier_stack_data_t), "CVerifierTlsData.stackComUninit", stack_com_uninit, 0xc0, 0xc0, true, 0xf6badc58b2860cfd)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::c_verifier_stack_data_t), "CVerifierTlsData.stackOLEInit", stack_ole_init, 0x180, 0xc0, true, 0xa888591e5ff57c13)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::c_verifier_stack_data_t), "CVerifierTlsData.stackOLEUninit", stack_ole_uninit, 0x240, 0xc0, true, 0x8d1746cc339ab0af)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::c_verifier_stack_data_t), "CVerifierTlsData.stackEnterSWC", stack_enter_swc, 0x300, 0xc0, true, 0x965a1c530ece2983)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::c_verifier_stack_data_t), "CVerifierTlsData.stackLeaveSWC", stack_leave_swc, 0x3c0, 0xc0, true, 0x6bae83cb699e20d)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "CVerifierTlsData.AggressiveDllUnloadTicksInSTA", aggressive_dll_unload_ticks_in_sta, 0x480, 0x40, true, 0xbe478a87d7420852)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif