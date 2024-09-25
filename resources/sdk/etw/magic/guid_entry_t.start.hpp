#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_ETW_GUID_ENTRY.GuidList", guid_list, 0x0, 0x80, true, 0x9b9dc2e584618db)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile int64_t), "_ETW_GUID_ENTRY.RefCount", ref_count, 0x100, 0x40, true, 0xcd510128d6c81e89)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_ETW_GUID_ENTRY.Guid", guid, 0x140, 0x80, true, 0x48fdc762472e91f5)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_ETW_GUID_ENTRY.RegListHead", reg_list_head, 0x1c0, 0x80, true, 0xcd510355a6b59f12)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_ETW_GUID_ENTRY.SecurityDescriptor", security_descriptor, 0x240, 0x40, true, 0x730e0adf0ddafaf6)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct etw::last_enable_info_t), "_ETW_GUID_ENTRY.LastEnable", last_enable, 0x280, 0x80, true, 0x2e97cc8cbbfe63b9)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_ETW_GUID_ENTRY.MatchId", match_id, 0x280, 0x40, true, 0xbbf22737c31cfd9e)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct trace::enable_info_t), "_ETW_GUID_ENTRY.ProviderEnableInfo", provider_enable_info, 0x300, 0x0, true, 0xf1863261f1c07a27)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct trace::enable_info_t, 8>), "_ETW_GUID_ENTRY.EnableInfo", enable_info, 0x400, 0x0, true, 0xc18c6de6cf006646)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct etw::filter_header_t*), "_ETW_GUID_ENTRY.FilterData", filter_data, 0xc00, 0x40, true, 0x4e4301ca77ba9605)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct etw::silodriverstate_t*), "_ETW_GUID_ENTRY.SiloState", silo_state, 0xc40, 0x40, true, 0xede97af621834794)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ex::push_lock_t), "_ETW_GUID_ENTRY.Lock", lock, 0xcc0, 0x40, true, 0xc578a24d31e34c7)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::ethread_t*), "_ETW_GUID_ENTRY.LockOwner", lock_owner, 0xd00, 0x40, true, 0x1516a7836ab7738c)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_ETW_GUID_ENTRY.SiloGuidList", silo_guid_list, 0x80, 0x80, true, 0x6ec3919f01f2bbf8)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct etw::guid_entry_t*), "_ETW_GUID_ENTRY.HostEntry", host_entry, 0xc80, 0x40, true, 0x994823e483c079f3)
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
#define _m13
#define _m14
#endif