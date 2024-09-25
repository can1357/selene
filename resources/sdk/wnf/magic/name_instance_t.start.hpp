#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wnf::node_header_t), "_WNF_NAME_INSTANCE.Header", header, 0x0, 0x20, true, 0x13c417dc35694010)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ex::rundown_ref_t), "_WNF_NAME_INSTANCE.RunRef", run_ref, 0x40, 0x40, true, 0xe7cdd4e611d78c65)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtl::balanced_node_t), "_WNF_NAME_INSTANCE.TreeLinks", tree_links, 0x80, 0xc0, true, 0xbacfc24b158d8a09)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wnf::state_name_struct_t), "_WNF_NAME_INSTANCE.StateName", state_name, 0x140, 0x40, true, 0x4e196fc67aebdf7a)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wnf::scope_instance_t*), "_WNF_NAME_INSTANCE.ScopeInstance", scope_instance, 0x180, 0x40, true, 0xcbe06d2c632c1509)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wnf::state_name_registration_t), "_WNF_NAME_INSTANCE.StateNameInfo", state_name_info, 0x1c0, 0xc0, true, 0x119d2d1077823d58)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wnf::lock_t), "_WNF_NAME_INSTANCE.StateDataLock", state_data_lock, 0x280, 0x40, true, 0x171309952e43f733)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wnf::state_data_t*), "_WNF_NAME_INSTANCE.StateData", state_data, 0x2c0, 0x40, true, 0x363ab23ec94302c1)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WNF_NAME_INSTANCE.CurrentChangeStamp", current_change_stamp, 0x300, 0x20, true, 0xbecedafa056f156c)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::variant<void*, struct wnf::permanent_data_store_t*>), "_WNF_NAME_INSTANCE.PermanentDataStore", permanent_data_store, 0x340, 0x40, true, 0xd54794089a6e0ff5)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wnf::lock_t), "_WNF_NAME_INSTANCE.StateSubscriptionListLock", state_subscription_list_lock, 0x380, 0x40, true, 0xb1fc185a0853e59b)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_WNF_NAME_INSTANCE.StateSubscriptionListHead", state_subscription_list_head, 0x3c0, 0x80, true, 0x504b7214aab5ffb5)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_WNF_NAME_INSTANCE.TemporaryNameListEntry", temporary_name_list_entry, 0x440, 0x80, true, 0xa1a6953130c0ef8a)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::eprocess_t*), "_WNF_NAME_INSTANCE.CreatorProcess", creator_process, 0x4c0, 0x40, true, 0xe4f9af9d98ac5c38)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_WNF_NAME_INSTANCE.DataSubscribersCount", data_subscribers_count, 0x500, 0x20, true, 0xeee9404c5ee617fd)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_WNF_NAME_INSTANCE.CurrentDeliveryCount", current_delivery_count, 0x520, 0x20, true, 0xa8f6689d9496dae4)
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
#endif