#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtl::hash_entry_t), "_POOL_LIMIT_TABLE_ENTRY.HashEntry", hash_entry, 0x0, 0x0, false, 0xada21d8632e90fda)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::single_list_entry_t), "_POOL_LIMIT_TABLE_ENTRY.SListEntry", s_list_entry, 0x0, 0x0, false, 0xfe7e436395cb3c56)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct nt::pool_limit_info_t, 2>), "_POOL_LIMIT_TABLE_ENTRY.LimitInfo", limit_info, 0x0, 0x0, false, 0x5c6a757445ad4c0)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wnf::state_name_t), "_POOL_LIMIT_TABLE_ENTRY.NotificationObject", notification_object, 0x0, 0x0, false, 0x81fea14363a4cbb6)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::slist_entry_t), "_POOL_LIMIT_TABLE_ENTRY.NotificationEntry", notification_entry, 0x0, 0x0, false, 0x454759c70c915f81)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_POOL_LIMIT_TABLE_ENTRY.Scheduled", scheduled, 0x0, 0x0, false, 0xaa45069b8eddefda)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif