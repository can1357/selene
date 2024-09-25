#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_OBJECT_INFORMATION.NextEntryOffset", next_entry_offset, 0x0, 0x20, true, 0xda48e26547c13481)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_SYSTEM_OBJECT_INFORMATION.Object", object, 0x40, 0x40, true, 0xfed9ef3d0123fd09)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_SYSTEM_OBJECT_INFORMATION.CreatorUniqueProcess", creator_unique_process, 0x80, 0x40, true, 0xad9fe4997acade6b)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_SYSTEM_OBJECT_INFORMATION.CreatorBackTraceIndex", creator_back_trace_index, 0xc0, 0x10, true, 0xa5ce1fb8202d4abf)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_SYSTEM_OBJECT_INFORMATION.Flags", flags, 0xd0, 0x10, true, 0x89f773dc60afb51b)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_SYSTEM_OBJECT_INFORMATION.PointerCount", pointer_count, 0xe0, 0x20, true, 0xc13921b39a78521e)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_SYSTEM_OBJECT_INFORMATION.HandleCount", handle_count, 0x100, 0x20, true, 0xfa3801c9a11d503b)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_OBJECT_INFORMATION.PagedPoolCharge", paged_pool_charge, 0x120, 0x20, true, 0x7865c3283b8d8885)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_OBJECT_INFORMATION.NonPagedPoolCharge", non_paged_pool_charge, 0x140, 0x20, true, 0x2522c24f590d2cd7)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_SYSTEM_OBJECT_INFORMATION.ExclusiveProcessId", exclusive_process_id, 0x180, 0x40, true, 0x9afd1c70ccde6444)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_SYSTEM_OBJECT_INFORMATION.SecurityDescriptor", security_descriptor, 0x1c0, 0x40, true, 0xdd735e14eecf8501)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::object_name_information_t), "_SYSTEM_OBJECT_INFORMATION.NameInfo", name_info, 0x200, 0x80, true, 0xb31d4417cb534810)
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
#endif