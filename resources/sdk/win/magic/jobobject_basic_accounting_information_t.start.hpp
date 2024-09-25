#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_JOBOBJECT_BASIC_ACCOUNTING_INFORMATION.TotalUserTime", total_user_time, 0x0, 0x40, true, 0xb331636a3eee717b)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_JOBOBJECT_BASIC_ACCOUNTING_INFORMATION.TotalKernelTime", total_kernel_time, 0x40, 0x40, true, 0x2806a567e3fc8140)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_JOBOBJECT_BASIC_ACCOUNTING_INFORMATION.ThisPeriodTotalUserTime", this_period_total_user_time, 0x80, 0x40, true, 0xc9370d3ce91da2a2)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_JOBOBJECT_BASIC_ACCOUNTING_INFORMATION.ThisPeriodTotalKernelTime", this_period_total_kernel_time, 0xc0, 0x40, true, 0x9ebffc8515169605)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_JOBOBJECT_BASIC_ACCOUNTING_INFORMATION.TotalPageFaultCount", total_page_fault_count, 0x100, 0x20, true, 0x43ca5f2da3e8f45a)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_JOBOBJECT_BASIC_ACCOUNTING_INFORMATION.TotalProcesses", total_processes, 0x120, 0x20, true, 0x3efc0d014181efb1)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_JOBOBJECT_BASIC_ACCOUNTING_INFORMATION.ActiveProcesses", active_processes, 0x140, 0x20, true, 0x77fa7dc51adfa74f)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_JOBOBJECT_BASIC_ACCOUNTING_INFORMATION.TotalTerminatedProcesses", total_terminated_processes, 0x160, 0x20, true, 0x637caad281c7cc91)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#endif