#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_running_object_table_t*, const struct nt::guid_t*, void**)>*), "IRunningObjectTableVtbl.QueryInterface", query_interface, 0x0, 0x40, true, 0xc31427d34ededbe8)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint32_t(struct win::i_running_object_table_t*)>*), "IRunningObjectTableVtbl.AddRef", add_ref, 0x40, 0x40, true, 0x57712b8a771938d2)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint32_t(struct win::i_running_object_table_t*)>*), "IRunningObjectTableVtbl.Release", release, 0x80, 0x40, true, 0xc085b4c81fcc227b)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_running_object_table_t*, uint32_t, struct win::i_unknown_t*, struct win::i_moniker_t*, uint32_t*)>*), "IRunningObjectTableVtbl.Register", _register, 0xc0, 0x40, true, 0x9c27a2b8a96d3eb3)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_running_object_table_t*, uint32_t)>*), "IRunningObjectTableVtbl.Revoke", revoke, 0x100, 0x40, true, 0x3d9eaa3ecdef1c1f)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_running_object_table_t*, struct win::i_moniker_t*)>*), "IRunningObjectTableVtbl.IsRunning", is_running, 0x140, 0x40, true, 0x988645aca7fc6b91)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_running_object_table_t*, struct win::i_moniker_t*, struct win::i_unknown_t**)>*), "IRunningObjectTableVtbl.GetObjectW", get_object_w, 0x180, 0x40, true, 0x1511ff9d220844e0)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_running_object_table_t*, uint32_t, struct win::filetime_t*)>*), "IRunningObjectTableVtbl.NoteChangeTime", note_change_time, 0x1c0, 0x40, true, 0x7f9f0568418a153a)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_running_object_table_t*, struct win::i_moniker_t*, struct win::filetime_t*)>*), "IRunningObjectTableVtbl.GetTimeOfLastChange", get_time_of_last_change, 0x200, 0x40, true, 0x6777838a0d1385d0)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_running_object_table_t*, struct win::i_enum_moniker_t**)>*), "IRunningObjectTableVtbl.EnumRunning", enum_running, 0x240, 0x40, true, 0xdf5c87db265a11f0)
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