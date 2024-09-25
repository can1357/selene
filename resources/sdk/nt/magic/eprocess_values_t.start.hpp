#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_EPROCESS_VALUES.KernelTime", kernel_time, 0x0, 0x40, true, 0xe193a81259343d94)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_EPROCESS_VALUES.UserTime", user_time, 0x40, 0x40, true, 0x49eb4d219f87ed4d)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_EPROCESS_VALUES.ReadyTime", ready_time, 0x80, 0x40, true, 0xdf960178c15be07c)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_EPROCESS_VALUES.CycleTime", cycle_time, 0xc0, 0x40, true, 0xefd77508665fb09b)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_EPROCESS_VALUES.ContextSwitches", context_switches, 0x100, 0x40, true, 0xcca1ae57507da2d6)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_EPROCESS_VALUES.ReadOperationCount", read_operation_count, 0x140, 0x40, true, 0x76370710459e9d97)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_EPROCESS_VALUES.WriteOperationCount", write_operation_count, 0x180, 0x40, true, 0xb7748a395afaf262)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_EPROCESS_VALUES.OtherOperationCount", other_operation_count, 0x1c0, 0x40, true, 0x9253eba1e4abe9f2)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_EPROCESS_VALUES.ReadTransferCount", read_transfer_count, 0x200, 0x40, true, 0x60805b71ddd70a26)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_EPROCESS_VALUES.WriteTransferCount", write_transfer_count, 0x240, 0x40, true, 0x554a27f5bcc07068)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_EPROCESS_VALUES.OtherTransferCount", other_transfer_count, 0x280, 0x40, true, 0xc64f4050fdc59c9e)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_EPROCESS_VALUES.KernelWaitTime", kernel_wait_time, 0x2c0, 0x40, true, 0x4ac8b3cb41029471)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_EPROCESS_VALUES.UserWaitTime", user_wait_time, 0x300, 0x40, true, 0xf83a46e7d5fdef61)
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
#define _m10
#define _m11
#define _m12
#endif