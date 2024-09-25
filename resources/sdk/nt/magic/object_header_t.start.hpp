#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_OBJECT_HEADER.PointerCount", pointer_count, 0x0, 0x40, true, 0xa9d152e94b0e5ab2)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_OBJECT_HEADER.HandleCount", handle_count, 0x40, 0x40, true, 0x4e36e2fe911b019d)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_OBJECT_HEADER.NextToFree", next_to_free, 0x40, 0x40, true, 0xc216d5e7eeb908dc)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ex::push_lock_t), "_OBJECT_HEADER.Lock", lock, 0x80, 0x40, true, 0x77c865b69f41e09)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_OBJECT_HEADER.TypeIndex", type_index, 0xc0, 0x8, true, 0x5fa0bf26b84471d0)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_OBJECT_HEADER.TraceFlags", trace_flags, 0xc8, 0x8, true, 0xb716386c1fe117ba)
#define _m06 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_OBJECT_HEADER.DbgRefTrace", dbg_ref_trace, 0xc8, 0x1, true, 0x48c3fc691af799c7, 1, uint8_t)
#define _m07 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_OBJECT_HEADER.DbgTracePermanent", dbg_trace_permanent, 0xc9, 0x1, true, 0x55467794edaf28a, 1, uint8_t)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_OBJECT_HEADER.InfoMask", info_mask, 0xd0, 0x8, true, 0xcb129e81ab850655)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_OBJECT_HEADER.Flags", flags, 0xd8, 0x8, true, 0x6d1896eeeaebe407)
#define _m10 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_OBJECT_HEADER.NewObject", new_object, 0xd8, 0x1, true, 0x16b71faff3149a4, 1, uint8_t)
#define _m11 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_OBJECT_HEADER.KernelObject", kernel_object, 0xd9, 0x1, true, 0x2878e6d7f801cae9, 1, uint8_t)
#define _m12 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_OBJECT_HEADER.KernelOnlyAccess", kernel_only_access, 0xda, 0x1, true, 0x7c87eae86973fb73, 1, uint8_t)
#define _m13 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_OBJECT_HEADER.ExclusiveObject", exclusive_object, 0xdb, 0x1, true, 0xfd11489c07676cf5, 1, uint8_t)
#define _m14 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_OBJECT_HEADER.PermanentObject", permanent_object, 0xdc, 0x1, true, 0xa8fddcf69c22f3b3, 1, uint8_t)
#define _m15 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_OBJECT_HEADER.DefaultSecurityQuota", default_security_quota, 0xdd, 0x1, true, 0x8e907a395e4fe7b3, 1, uint8_t)
#define _m16 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_OBJECT_HEADER.SingleHandleEntry", single_handle_entry, 0xde, 0x1, true, 0x3f3adde4d74662e7, 1, uint8_t)
#define _m17 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_OBJECT_HEADER.DeletedInline", deleted_inline, 0xdf, 0x1, true, 0x14a7521cd379bc2, 1, uint8_t)
#define _m18 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::object_create_information_t*), "_OBJECT_HEADER.ObjectCreateInfo", object_create_info, 0x100, 0x40, true, 0x53421019937bbd29)
#define _m19 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_OBJECT_HEADER.QuotaBlockCharged", quota_block_charged, 0x100, 0x40, true, 0x27061f8fb247a29e)
#define _m20 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_OBJECT_HEADER.SecurityDescriptor", security_descriptor, 0x140, 0x40, true, 0x257fda95390d6da8)
#define _m21 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::quad_t), "_OBJECT_HEADER.Body", body, 0x180, 0x40, true, 0xffb24d6071165f2b)
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
#define _m15
#define _m16
#define _m17
#define _m18
#define _m19
#define _m20
#define _m21
#endif