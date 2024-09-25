#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "CAsyncStateMachine._dwState", dw_state, 0x40, 0x20, true, 0x9b9de19018631841)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::hresult), "CAsyncStateMachine._hr", hr, 0x60, 0x20, true, 0x54aa74b7eab04d8a)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_eflags_t), "CAsyncStateMachine.eflags", eflags, 0x80, 0x20, true, 0xa7655e69b551543c)
#else
#define _m00
#define _m01
#define _m02
#endif