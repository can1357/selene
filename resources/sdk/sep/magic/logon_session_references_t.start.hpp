#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct sep::logon_session_references_t*), "_SEP_LOGON_SESSION_REFERENCES.Next", next, 0x0, 0x40, true, 0xbdb4f319c51eb51a)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::luid_t), "_SEP_LOGON_SESSION_REFERENCES.LogonId", logon_id, 0x40, 0x40, true, 0xebead3e9eec68249)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::luid_t), "_SEP_LOGON_SESSION_REFERENCES.BuddyLogonId", buddy_logon_id, 0x80, 0x40, true, 0xa4d86241b78b9ffc)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_SEP_LOGON_SESSION_REFERENCES.ReferenceCount", reference_count, 0xc0, 0x40, true, 0x9d8d53cd4c6416e5)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SEP_LOGON_SESSION_REFERENCES.Flags", flags, 0x100, 0x20, true, 0xa7465c0a6ad288e0)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::device_map_t*), "_SEP_LOGON_SESSION_REFERENCES.pDeviceMap", p_device_map, 0x140, 0x40, true, 0x69e4dda4660c7bf8)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_SEP_LOGON_SESSION_REFERENCES.Token", token, 0x180, 0x40, true, 0x52d2ae44c9d3aeca)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_SEP_LOGON_SESSION_REFERENCES.AccountName", account_name, 0x1c0, 0x80, true, 0xdaeea5a8e2a0811c)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_SEP_LOGON_SESSION_REFERENCES.AuthorityName", authority_name, 0x240, 0x80, true, 0xf11e09615e94302f)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ex::push_lock_t), "_SEP_LOGON_SESSION_REFERENCES.SharedDataLock", shared_data_lock, 0x340, 0x40, true, 0x97ceb587fb3d1c8f)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::authzbasep_claim_attributes_collection_t*), "_SEP_LOGON_SESSION_REFERENCES.SharedClaimAttributes", shared_claim_attributes, 0x380, 0x40, true, 0x6ee45b54e4aacb56)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct sep::sid_values_block_t*), "_SEP_LOGON_SESSION_REFERENCES.SharedSidValues", shared_sid_values, 0x3c0, 0x40, true, 0xd97458355c575ee9)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ob::handle_revocation_block_t), "_SEP_LOGON_SESSION_REFERENCES.RevocationBlock", revocation_block, 0x400, 0x0, true, 0x3a3ea5e77d31f2ab)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::ejob_t*), "_SEP_LOGON_SESSION_REFERENCES.ServerSilo", server_silo, 0x500, 0x40, true, 0x6032ba83e472faae)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::luid_t), "_SEP_LOGON_SESSION_REFERENCES.SiblingAuthId", sibling_auth_id, 0x540, 0x40, true, 0x89a81ef9baea0f42)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_SEP_LOGON_SESSION_REFERENCES.TokenList", token_list, 0x580, 0x80, true, 0xb8d204bf2140213e)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct sep::cached_handles_table_t), "_SEP_LOGON_SESSION_REFERENCES.CachedHandlesTable", cached_handles_table, 0x2c0, 0x80, true, 0x9cc9a1fb7f08d012)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct sep::lowbox_handles_table_t), "_SEP_LOGON_SESSION_REFERENCES.LowBoxHandlesTable", low_box_handles_table, 0x0, 0x0, false, 0xe1fba912ca592ef2)
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
#endif