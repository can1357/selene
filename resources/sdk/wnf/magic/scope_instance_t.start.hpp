#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wnf::node_header_t), "_WNF_SCOPE_INSTANCE.Header", header, 0x0, 0x20, true, 0x30a75d3fefd44e82)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ex::rundown_ref_t), "_WNF_SCOPE_INSTANCE.RunRef", run_ref, 0x40, 0x40, true, 0xc1d41bda228301f0)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wnf::data_scope_t), "_WNF_SCOPE_INSTANCE.DataScope", data_scope, 0x80, 0x20, true, 0xbeff52daadb1c152)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WNF_SCOPE_INSTANCE.InstanceIdSize", instance_id_size, 0xa0, 0x20, true, 0x3d260d50c4e741d2)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_WNF_SCOPE_INSTANCE.InstanceIdData", instance_id_data, 0xc0, 0x40, true, 0x5ebea05a7548e1ab)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_WNF_SCOPE_INSTANCE.ResolverListEntry", resolver_list_entry, 0x100, 0x80, true, 0x9e59bc1c002e759f)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wnf::lock_t), "_WNF_SCOPE_INSTANCE.NameSetLock", name_set_lock, 0x180, 0x40, true, 0xd1b97f2b7c668339)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtl::avl_tree_t), "_WNF_SCOPE_INSTANCE.NameSet", name_set, 0x1c0, 0x40, true, 0x9e91a9f8fefad5aa)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::variant<void*, struct wnf::permanent_data_store_t*>), "_WNF_SCOPE_INSTANCE.PermanentDataStore", permanent_data_store, 0x200, 0x40, true, 0xa1edb4c415cc298b)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::variant<void*, struct wnf::permanent_data_store_t*>), "_WNF_SCOPE_INSTANCE.VolatilePermanentDataStore", volatile_permanent_data_store, 0x240, 0x40, true, 0x9007c77eee24967c)
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