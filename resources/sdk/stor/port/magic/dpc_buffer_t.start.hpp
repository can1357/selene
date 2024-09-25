#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int16_t), "_DPC_BUFFER.Type", type, 0x0, 0x10, true, 0xfd8cf9d670f16af)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_DPC_BUFFER.Number", number, 0x10, 0x8, true, 0x2e66d9d461be951a)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_DPC_BUFFER.Importance", importance, 0x18, 0x8, true, 0x5295c5617def9881)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_DPC_BUFFER.F", f, 0x40, 0x40, true, 0xefa7bc9f7738de09)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_DPC_BUFFER.B", b, 0x80, 0x40, true, 0xb77050dfba204ca7)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_DPC_BUFFER.DeferredRoutine", deferred_routine, 0xc0, 0x40, true, 0x403f28ff1b2de308)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_DPC_BUFFER.DeferredContext", deferred_context, 0x100, 0x40, true, 0xabca18b9a0d7351f)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_DPC_BUFFER.SystemArgument1", system_argument1, 0x140, 0x40, true, 0x352c252003ade07d)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_DPC_BUFFER.SystemArgument2", system_argument2, 0x180, 0x40, true, 0x6b29d3a0bbb8345b)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_DPC_BUFFER.DpcData", dpc_data, 0x1c0, 0x40, true, 0xc746c218f089ea55)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#define _m09
#endif