#if !IN_PARSER
#define _m000 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_CM_KCB_UOW.TransactionListEntry", transaction_list_entry, 0x0, 0x80, true, 0xcbac228e5513b167)
#define _m001 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct cm::intent_lock_t*), "_CM_KCB_UOW.KCBLock", kcb_lock, 0x80, 0x40, true, 0xf2d93d428fa3d427)
#define _m002 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct cm::intent_lock_t*), "_CM_KCB_UOW.KeyLock", key_lock, 0xc0, 0x40, true, 0xb62b971bbee062e4)
#define _m003 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_CM_KCB_UOW.KCBListEntry", kcb_list_entry, 0x100, 0x80, true, 0x4aa88628ef150243)
#define _m004 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct cm::key_control_block_t*), "_CM_KCB_UOW.KeyControlBlock", key_control_block, 0x180, 0x40, true, 0x7d777561f7724ee5)
#define _m005 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct cm::trans_t*), "_CM_KCB_UOW.Transaction", transaction, 0x1c0, 0x40, true, 0x382604a6a662d26)
#define _m006 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CM_KCB_UOW.UoWState", uo_w_state, 0x200, 0x20, true, 0xf62e80b906ddc333)
#define _m007 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum nt::uo_w_action_type_t), "_CM_KCB_UOW.ActionType", action_type, 0x220, 0x20, true, 0xfc42f6d95c59d3a8)
#define _m008 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum nt::hstorage_type_t), "_CM_KCB_UOW.StorageType", storage_type, 0x240, 0x20, true, 0xa54676bafcdafe67)
#define _m009 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct cm::kcb_uow_t*), "_CM_KCB_UOW.ParentUoW", parent_uo_w, 0x280, 0x40, true, 0x88156507e7571073)
#define _m010 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct cm::key_control_block_t*), "_CM_KCB_UOW.ChildKCB", child_kcb, 0x2c0, 0x40, true, 0x6f3a883c9a5eae0b)
#define _m011 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CM_KCB_UOW.VolatileKeyCell", volatile_key_cell, 0x2c0, 0x20, true, 0x5a34d098104d1d9b)
#define _m012 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CM_KCB_UOW.OldValueCell", old_value_cell, 0x2c0, 0x20, true, 0x763a2d37cb95f973)
#define _m013 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CM_KCB_UOW.NewValueCell", new_value_cell, 0x2e0, 0x20, true, 0xe5d8465d3169209a)
#define _m014 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CM_KCB_UOW.UserFlags", user_flags, 0x2c0, 0x20, true, 0x8c6961e66ad972c3)
#define _m015 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_CM_KCB_UOW.LastWriteTime", last_write_time, 0x2c0, 0x40, true, 0x98140ce432b0fbea)
#define _m016 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CM_KCB_UOW.TxSecurityCell", tx_security_cell, 0x300, 0x20, true, 0x643a9c0b3711b2db)
#define _m017 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct cm::key_control_block_t*), "_CM_KCB_UOW.OldChildKCB", old_child_kcb, 0x2c0, 0x40, true, 0xbbf6a949f03b665b)
#define _m018 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct cm::key_control_block_t*), "_CM_KCB_UOW.NewChildKCB", new_child_kcb, 0x300, 0x40, true, 0x4b56cce97ff990d1)
#define _m019 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct cm::key_control_block_t*), "_CM_KCB_UOW.OtherChildKCB", other_child_kcb, 0x2c0, 0x40, true, 0x7cfe732f57fe0f11)
#define _m020 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CM_KCB_UOW.ThisVolatileKeyCell", this_volatile_key_cell, 0x300, 0x20, true, 0x9bb49468c59797e5)
#define _m021 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_CM_KCB_UOW.PrepareDataPointer", prepare_data_pointer, 0x340, 0x40, true, 0x320ade6066d146c5)
#define _m022 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct cm::uow_set_sd_data_t*), "_CM_KCB_UOW.SecurityData", security_data, 0x340, 0x40, true, 0xb47276610b1215e2)
#define _m023 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct cm::uow_key_state_modification_t*), "_CM_KCB_UOW.ModifyKeysData", modify_keys_data, 0x340, 0x40, true, 0x6bb31294e9107db3)
#define _m024 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct cm::uow_set_value_list_data_t*), "_CM_KCB_UOW.SetValueData", set_value_data, 0x340, 0x40, true, 0x528604be32b747c9)
#define _m025 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct cm::uow_set_value_key_data_t*), "_CM_KCB_UOW.ValueData", value_data, 0x380, 0x40, true, 0x8f286b7266d9b072)
#define _m026 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct cmp::discard_and_replace_kcb_context_t*), "_CM_KCB_UOW.DiscardReplaceContext", discard_replace_context, 0x380, 0x40, true, 0x5036d354145d6e93)
#define _m027 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct cm::key_security_cache_t*), "_CM_KCB_UOW.TxCachedSecurity", tx_cached_security, 0x2c0, 0x40, true, 0xbffcd598286c72aa)
#else
#define _m000
#define _m001
#define _m002
#define _m003
#define _m004
#define _m005
#define _m006
#define _m007
#define _m008
#define _m009
#define _m010
#define _m011
#define _m012
#define _m013
#define _m014
#define _m015
#define _m016
#define _m017
#define _m018
#define _m019
#define _m020
#define _m021
#define _m022
#define _m023
#define _m024
#define _m025
#define _m026
#define _m027
#endif