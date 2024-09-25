#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$_HandlePowerOn@USB4_POWERON_WORK_QUEUE$dxgkrnl.sys", 0x0, 0x0, false, 0x6a17afc0aa5bbff0)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$_HandlePowerOnInternal@USB4_POWERON_WORK_QUEUE$dxgkrnl.sys", 0x0, 0x0, false, 0x2e46e38293b6ab52)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$QueueWorkItem@USB4_POWERON_WORK_QUEUE$dxgkrnl.sys", 0x0, 0x0, false, 0xd0b157cc58e51b63)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#endif