#if !IN_PARSER
#define _m000 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::token_source_t), "_TOKEN.TokenSource", token_source, 0x0, 0x80, true, 0xcf9ed7d5b34eb358)
#define _m001 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::luid_t), "_TOKEN.TokenId", token_id, 0x80, 0x40, true, 0xe3a23ed107e94818)
#define _m002 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::luid_t), "_TOKEN.AuthenticationId", authentication_id, 0xc0, 0x40, true, 0x8ef4ae1ad7232a36)
#define _m003 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::luid_t), "_TOKEN.ParentTokenId", parent_token_id, 0x100, 0x40, true, 0xf96c66535039ef2e)
#define _m004 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_TOKEN.ExpirationTime", expiration_time, 0x140, 0x40, true, 0x952a2efacbf31368)
#define _m005 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::eresource_t*), "_TOKEN.TokenLock", token_lock, 0x180, 0x40, true, 0xa1783f2fa686f70)
#define _m006 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::luid_t), "_TOKEN.ModifiedId", modified_id, 0x1c0, 0x40, true, 0xbd4e1b9c47b66525)
#define _m007 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct sep::token_privileges_t), "_TOKEN.Privileges", privileges, 0x200, 0xc0, true, 0x8eccee5aad0c3c5c)
#define _m008 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct sep::audit_policy_t), "_TOKEN.AuditPolicy", audit_policy, 0x2c0, 0xf8, true, 0x51cd2d3ee9bfea25)
#define _m009 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_TOKEN.SessionId", session_id, 0x3c0, 0x20, true, 0x827d618bf4acf9c3)
#define _m010 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_TOKEN.UserAndGroupCount", user_and_group_count, 0x3e0, 0x20, true, 0x52e2ddb94c5392f)
#define _m011 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_TOKEN.RestrictedSidCount", restricted_sid_count, 0x400, 0x20, true, 0xb22c34a56974d144)
#define _m012 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_TOKEN.VariableLength", variable_length, 0x420, 0x20, true, 0x948657d97e5fa3f7)
#define _m013 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_TOKEN.DynamicCharged", dynamic_charged, 0x440, 0x20, true, 0x4cd10cc1cdf1cd64)
#define _m014 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_TOKEN.DynamicAvailable", dynamic_available, 0x460, 0x20, true, 0xb6e4d791a186c0b0)
#define _m015 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_TOKEN.DefaultOwnerIndex", default_owner_index, 0x480, 0x20, true, 0xd22a6c4fa64fb08b)
#define _m016 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::sid_and_attributes_t*), "_TOKEN.UserAndGroups", user_and_groups, 0x4c0, 0x40, true, 0x6a3e8b8282ad8ced)
#define _m017 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::sid_and_attributes_t*), "_TOKEN.RestrictedSids", restricted_sids, 0x500, 0x40, true, 0x57c59a49556cdc2f)
#define _m018 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_TOKEN.PrimaryGroup", primary_group, 0x540, 0x40, true, 0x6a54d342acd43914)
#define _m019 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t*), "_TOKEN.DynamicPart", dynamic_part, 0x580, 0x40, true, 0xb15e7f9563feb599)
#define _m020 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::acl_t*), "_TOKEN.DefaultDacl", default_dacl, 0x5c0, 0x40, true, 0x72675036f8abdab5)
#define _m021 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum nt::token_type_t), "_TOKEN.TokenType", token_type, 0x600, 0x20, true, 0xc31ff66f2c9f27a2)
#define _m022 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum sec::impersonation_level_t), "_TOKEN.ImpersonationLevel", impersonation_level, 0x620, 0x20, true, 0x7a5edc30a6fe4af1)
#define _m023 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_TOKEN.TokenFlags", token_flags, 0x640, 0x20, true, 0x34e00117f090fec8)
#define _m024 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_TOKEN.TokenInUse", token_in_use, 0x660, 0x8, true, 0x751d23c5712eb69d)
#define _m025 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_TOKEN.IntegrityLevelIndex", integrity_level_index, 0x680, 0x20, true, 0x1d63b43ff67c4c99)
#define _m026 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_TOKEN.MandatoryPolicy", mandatory_policy, 0x6a0, 0x20, true, 0x791196c7193d3cc3)
#define _m027 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct sep::logon_session_references_t*), "_TOKEN.LogonSession", logon_session, 0x6c0, 0x40, true, 0xbbb636c68e29a2a6)
#define _m028 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::luid_t), "_TOKEN.OriginatingLogonSession", originating_logon_session, 0x700, 0x40, true, 0x5b8a251f20cb6c20)
#define _m029 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::sid_and_attributes_hash_t), "_TOKEN.SidHash", sid_hash, 0x740, 0x80, true, 0x2c8a95c9d0f0c24b)
#define _m030 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::sid_and_attributes_hash_t), "_TOKEN.RestrictedSidHash", restricted_sid_hash, 0xfc0, 0x80, true, 0xf41fdb767340afb1)
#define _m031 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::authzbasep_security_attributes_information_t*), "_TOKEN.pSecurityAttributes", p_security_attributes, 0x1840, 0x40, true, 0xedcc5d68fab2bdc9)
#define _m032 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_TOKEN.Package", package, 0x1880, 0x40, true, 0xbc3fe84d72313812)
#define _m033 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::sid_and_attributes_t*), "_TOKEN.Capabilities", capabilities, 0x18c0, 0x40, true, 0xc6396ac28fc4c4ea)
#define _m034 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_TOKEN.CapabilityCount", capability_count, 0x1900, 0x20, true, 0x732750358742d14f)
#define _m035 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::sid_and_attributes_hash_t), "_TOKEN.CapabilitiesHash", capabilities_hash, 0x1940, 0x80, true, 0xa8ab74e8339976b2)
#define _m036 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct sep::lowbox_number_entry_t*), "_TOKEN.LowboxNumberEntry", lowbox_number_entry, 0x21c0, 0x40, true, 0xfaaf3ae36155ff02)
#define _m037 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::variant<struct sep::lowbox_handles_entry_t*, struct sep::cached_handles_entry_t*>), "_TOKEN.LowboxHandlesEntry", lowbox_handles_entry, 0x2200, 0x40, true, 0x5f80a99999b305ce)
#define _m038 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::authzbasep_claim_attributes_collection_t*), "_TOKEN.pClaimAttributes", p_claim_attributes, 0x2240, 0x40, true, 0x78605860be0ab0f0)
#define _m039 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_TOKEN.TrustLevelSid", trust_level_sid, 0x2280, 0x40, true, 0x3125dfb6152206e1)
#define _m040 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::token_t*), "_TOKEN.TrustLinkedToken", trust_linked_token, 0x22c0, 0x40, true, 0x2dccd02108ce62b3)
#define _m041 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_TOKEN.IntegrityLevelSidValue", integrity_level_sid_value, 0x2300, 0x40, true, 0x8ed9a5d48c436dd6)
#define _m042 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct sep::sid_values_block_t*), "_TOKEN.TokenSidValues", token_sid_values, 0x2340, 0x40, true, 0x7218699b9fc8f24a)
#define _m043 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct sep::luid_to_index_map_entry_t*), "_TOKEN.IndexEntry", index_entry, 0x2380, 0x40, true, 0xf8643b89ee2aa14)
#define _m044 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct sep::token_diag_track_entry_t*), "_TOKEN.DiagnosticInfo", diagnostic_info, 0x23c0, 0x40, true, 0x4016ac666cd3cfc)
#define _m045 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_TOKEN.SessionObject", session_object, 0x2440, 0x40, true, 0xa7129d296c77938d)
#define _m046 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_TOKEN.VariablePart", variable_part, 0x2480, 0x40, true, 0x3589f66686f209d9)
#define _m047 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct sep::cached_handles_entry_t*), "_TOKEN.BnoIsolationHandlesEntry", bno_isolation_handles_entry, 0x2400, 0x40, true, 0x1c3283704cfb71b6)
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
#define _m028
#define _m029
#define _m030
#define _m031
#define _m032
#define _m033
#define _m034
#define _m035
#define _m036
#define _m037
#define _m038
#define _m039
#define _m040
#define _m041
#define _m042
#define _m043
#define _m044
#define _m045
#define _m046
#define _m047
#endif