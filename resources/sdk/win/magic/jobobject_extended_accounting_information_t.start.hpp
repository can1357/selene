#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(jobobject_basic_accounting_information_t ), "_JOBOBJECT_EXTENDED_ACCOUNTING_INFORMATION.BasicInfo", basic_info, 0x0, 0x80, true, 0xa47be8922202d037)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct io::counters_t), "_JOBOBJECT_EXTENDED_ACCOUNTING_INFORMATION.IoInfo", io_info, 0x180, 0x80, true, 0xca0afc0719e32fe6)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::process_disk_counters_t), "_JOBOBJECT_EXTENDED_ACCOUNTING_INFORMATION.DiskIoInfo", disk_io_info, 0x300, 0x40, true, 0x5718d1e1050bda77)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_JOBOBJECT_EXTENDED_ACCOUNTING_INFORMATION.ContextSwitches", context_switches, 0x440, 0x40, true, 0xc2588f14144d8dc3)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_JOBOBJECT_EXTENDED_ACCOUNTING_INFORMATION.TotalCycleTime", total_cycle_time, 0x480, 0x40, true, 0xaff5b58844f0e9b)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_JOBOBJECT_EXTENDED_ACCOUNTING_INFORMATION.ReadyTime", ready_time, 0x4c0, 0x40, true, 0x1630f92b76671ab7)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::process_energy_values_t), "_JOBOBJECT_EXTENDED_ACCOUNTING_INFORMATION.EnergyValues", energy_values, 0x500, 0x80, true, 0x38cf697cc8abc6ca)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif