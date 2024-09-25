#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t*), "_Wx86ThreadState.CallBx86Eip", call_bx86_eip, 0x0, 0x40, true, 0x2a48605b510122e)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_Wx86ThreadState.DeallocationCpu", deallocation_cpu, 0x40, 0x40, true, 0xe82559e85f65ca21)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_Wx86ThreadState.UseKnownWx86Dll", use_known_wx86_dll, 0x80, 0x8, true, 0x3e0cef9422b4f86e)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(char), "_Wx86ThreadState.OleStubInvoked", ole_stub_invoked, 0x88, 0x8, true, 0xb163792d6edc3679)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif