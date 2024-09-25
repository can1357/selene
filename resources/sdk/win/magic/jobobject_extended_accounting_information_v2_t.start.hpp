#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(jobobject_basic_accounting_information_t ), "_JOBOBJECT_EXTENDED_ACCOUNTING_INFORMATION_V2.BasicInfo", basic_info, 0x0, 0x80, true, 0x7b576ef6efaef2ae)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct io::counters_t), "_JOBOBJECT_EXTENDED_ACCOUNTING_INFORMATION_V2.IoInfo", io_info, 0x180, 0x80, true, 0x916cf54b9ea8e550)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::process_disk_counters_t), "_JOBOBJECT_EXTENDED_ACCOUNTING_INFORMATION_V2.DiskIoInfo", disk_io_info, 0x300, 0x40, true, 0x5e782754709121b1)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_JOBOBJECT_EXTENDED_ACCOUNTING_INFORMATION_V2.ContextSwitches", context_switches, 0x440, 0x40, true, 0x206171a45510cd62)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_JOBOBJECT_EXTENDED_ACCOUNTING_INFORMATION_V2.TotalCycleTime", total_cycle_time, 0x480, 0x40, true, 0xb5fa3274d1c2c15a)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_JOBOBJECT_EXTENDED_ACCOUNTING_INFORMATION_V2.ReadyTime", ready_time, 0x4c0, 0x40, true, 0x30bcec25225eb8f6)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::process_energy_values_t), "_JOBOBJECT_EXTENDED_ACCOUNTING_INFORMATION_V2.EnergyValues", energy_values, 0x500, 0x80, true, 0xd42fdb4a319ba71d)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_JOBOBJECT_EXTENDED_ACCOUNTING_INFORMATION_V2.KernelWaitTime", kernel_wait_time, 0xd80, 0x40, true, 0x98bd823afdb37a0a)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_JOBOBJECT_EXTENDED_ACCOUNTING_INFORMATION_V2.UserWaitTime", user_wait_time, 0xdc0, 0x40, true, 0x35488245e2492ef9)
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
#endif