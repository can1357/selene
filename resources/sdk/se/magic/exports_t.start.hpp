#if !IN_PARSER
#define _m000 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::luid_t), "_SE_EXPORTS.SeCreateTokenPrivilege", se_create_token_privilege, 0x0, 0x40, true, 0x5a5854848eef27c9)
#define _m001 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::luid_t), "_SE_EXPORTS.SeAssignPrimaryTokenPrivilege", se_assign_primary_token_privilege, 0x40, 0x40, true, 0xfd1fec8d88cbfa82)
#define _m002 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::luid_t), "_SE_EXPORTS.SeLockMemoryPrivilege", se_lock_memory_privilege, 0x80, 0x40, true, 0xd91d7817c4ac03c7)
#define _m003 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::luid_t), "_SE_EXPORTS.SeIncreaseQuotaPrivilege", se_increase_quota_privilege, 0xc0, 0x40, true, 0x66a6141cb7fe3b43)
#define _m004 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::luid_t), "_SE_EXPORTS.SeUnsolicitedInputPrivilege", se_unsolicited_input_privilege, 0x100, 0x40, true, 0x9f8826e53584a442)
#define _m005 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::luid_t), "_SE_EXPORTS.SeTcbPrivilege", se_tcb_privilege, 0x140, 0x40, true, 0xb2911a2056804a10)
#define _m006 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::luid_t), "_SE_EXPORTS.SeSecurityPrivilege", se_security_privilege, 0x180, 0x40, true, 0xba1306b2375f1f98)
#define _m007 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::luid_t), "_SE_EXPORTS.SeTakeOwnershipPrivilege", se_take_ownership_privilege, 0x1c0, 0x40, true, 0x4c0afabcffd2e82)
#define _m008 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::luid_t), "_SE_EXPORTS.SeLoadDriverPrivilege", se_load_driver_privilege, 0x200, 0x40, true, 0x1cc1a3a12f49f69a)
#define _m009 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::luid_t), "_SE_EXPORTS.SeCreatePagefilePrivilege", se_create_pagefile_privilege, 0x240, 0x40, true, 0xc38e58d5cf04d77b)
#define _m010 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::luid_t), "_SE_EXPORTS.SeIncreaseBasePriorityPrivilege", se_increase_base_priority_privilege, 0x280, 0x40, true, 0x53d473ac481019b2)
#define _m011 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::luid_t), "_SE_EXPORTS.SeSystemProfilePrivilege", se_system_profile_privilege, 0x2c0, 0x40, true, 0x4a7b9bb027c9b0e)
#define _m012 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::luid_t), "_SE_EXPORTS.SeSystemtimePrivilege", se_systemtime_privilege, 0x300, 0x40, true, 0x344714ed48c5a001)
#define _m013 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::luid_t), "_SE_EXPORTS.SeProfileSingleProcessPrivilege", se_profile_single_process_privilege, 0x340, 0x40, true, 0x9b607e05738b483b)
#define _m014 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::luid_t), "_SE_EXPORTS.SeCreatePermanentPrivilege", se_create_permanent_privilege, 0x380, 0x40, true, 0xa069824328fdb6f8)
#define _m015 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::luid_t), "_SE_EXPORTS.SeBackupPrivilege", se_backup_privilege, 0x3c0, 0x40, true, 0x7d3439b6668e39f1)
#define _m016 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::luid_t), "_SE_EXPORTS.SeRestorePrivilege", se_restore_privilege, 0x400, 0x40, true, 0xcf5f62204727455d)
#define _m017 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::luid_t), "_SE_EXPORTS.SeShutdownPrivilege", se_shutdown_privilege, 0x440, 0x40, true, 0x999c13abc1577946)
#define _m018 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::luid_t), "_SE_EXPORTS.SeDebugPrivilege", se_debug_privilege, 0x480, 0x40, true, 0x2f92691966604749)
#define _m019 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::luid_t), "_SE_EXPORTS.SeAuditPrivilege", se_audit_privilege, 0x4c0, 0x40, true, 0x41c2bef6ac7c179b)
#define _m020 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::luid_t), "_SE_EXPORTS.SeSystemEnvironmentPrivilege", se_system_environment_privilege, 0x500, 0x40, true, 0x172ac216f06558f8)
#define _m021 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::luid_t), "_SE_EXPORTS.SeChangeNotifyPrivilege", se_change_notify_privilege, 0x540, 0x40, true, 0x994655028097d19b)
#define _m022 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::luid_t), "_SE_EXPORTS.SeRemoteShutdownPrivilege", se_remote_shutdown_privilege, 0x580, 0x40, true, 0xf1a8ed8c5fd69f8c)
#define _m023 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_SE_EXPORTS.SeNullSid", se_null_sid, 0x5c0, 0x40, true, 0xf81c877611a13053)
#define _m024 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_SE_EXPORTS.SeWorldSid", se_world_sid, 0x600, 0x40, true, 0x5662c8a9b838611)
#define _m025 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_SE_EXPORTS.SeLocalSid", se_local_sid, 0x640, 0x40, true, 0xff41d237e12c8927)
#define _m026 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_SE_EXPORTS.SeCreatorOwnerSid", se_creator_owner_sid, 0x680, 0x40, true, 0x8d21afafcf9ad709)
#define _m027 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_SE_EXPORTS.SeCreatorGroupSid", se_creator_group_sid, 0x6c0, 0x40, true, 0xecb1d2e944ede02a)
#define _m028 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_SE_EXPORTS.SeNtAuthoritySid", se_nt_authority_sid, 0x700, 0x40, true, 0x73ab3b946b09bcce)
#define _m029 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_SE_EXPORTS.SeDialupSid", se_dialup_sid, 0x740, 0x40, true, 0x2035afca023c8993)
#define _m030 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_SE_EXPORTS.SeNetworkSid", se_network_sid, 0x780, 0x40, true, 0x96e9be697b94c4aa)
#define _m031 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_SE_EXPORTS.SeBatchSid", se_batch_sid, 0x7c0, 0x40, true, 0x28e671deb6bc007)
#define _m032 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_SE_EXPORTS.SeInteractiveSid", se_interactive_sid, 0x800, 0x40, true, 0xafc210521e995be9)
#define _m033 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_SE_EXPORTS.SeLocalSystemSid", se_local_system_sid, 0x840, 0x40, true, 0xe1b26aac1dfa16a7)
#define _m034 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_SE_EXPORTS.SeAliasAdminsSid", se_alias_admins_sid, 0x880, 0x40, true, 0xef7bdaab053beee4)
#define _m035 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_SE_EXPORTS.SeAliasUsersSid", se_alias_users_sid, 0x8c0, 0x40, true, 0xd555ffb4341d9681)
#define _m036 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_SE_EXPORTS.SeAliasGuestsSid", se_alias_guests_sid, 0x900, 0x40, true, 0xce57e8ba03cb0a02)
#define _m037 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_SE_EXPORTS.SeAliasPowerUsersSid", se_alias_power_users_sid, 0x940, 0x40, true, 0x30872e06f0cb279b)
#define _m038 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_SE_EXPORTS.SeAliasAccountOpsSid", se_alias_account_ops_sid, 0x980, 0x40, true, 0x3f862248a55b2ce0)
#define _m039 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_SE_EXPORTS.SeAliasSystemOpsSid", se_alias_system_ops_sid, 0x9c0, 0x40, true, 0xbdb407c5d8e498fe)
#define _m040 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_SE_EXPORTS.SeAliasPrintOpsSid", se_alias_print_ops_sid, 0xa00, 0x40, true, 0xecb2a11d5377fe3)
#define _m041 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_SE_EXPORTS.SeAliasBackupOpsSid", se_alias_backup_ops_sid, 0xa40, 0x40, true, 0x3a1684151e2292a)
#define _m042 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_SE_EXPORTS.SeAuthenticatedUsersSid", se_authenticated_users_sid, 0xa80, 0x40, true, 0x8568ea1834fb9d7d)
#define _m043 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_SE_EXPORTS.SeRestrictedSid", se_restricted_sid, 0xac0, 0x40, true, 0xe0269c40dda5fae0)
#define _m044 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_SE_EXPORTS.SeAnonymousLogonSid", se_anonymous_logon_sid, 0xb00, 0x40, true, 0xf127340e97d69551)
#define _m045 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::luid_t), "_SE_EXPORTS.SeUndockPrivilege", se_undock_privilege, 0xb40, 0x40, true, 0x61bc778282d11a45)
#define _m046 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::luid_t), "_SE_EXPORTS.SeSyncAgentPrivilege", se_sync_agent_privilege, 0xb80, 0x40, true, 0xfa24ea708085d858)
#define _m047 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::luid_t), "_SE_EXPORTS.SeEnableDelegationPrivilege", se_enable_delegation_privilege, 0xbc0, 0x40, true, 0x6952d3b865e7707c)
#define _m048 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_SE_EXPORTS.SeLocalServiceSid", se_local_service_sid, 0xc00, 0x40, true, 0x897ecc97e9834cba)
#define _m049 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_SE_EXPORTS.SeNetworkServiceSid", se_network_service_sid, 0xc40, 0x40, true, 0x44a39bf85b3607f1)
#define _m050 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::luid_t), "_SE_EXPORTS.SeManageVolumePrivilege", se_manage_volume_privilege, 0xc80, 0x40, true, 0xf077f8f7aa1ec5ea)
#define _m051 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::luid_t), "_SE_EXPORTS.SeImpersonatePrivilege", se_impersonate_privilege, 0xcc0, 0x40, true, 0x52dea202c4b7ada4)
#define _m052 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::luid_t), "_SE_EXPORTS.SeCreateGlobalPrivilege", se_create_global_privilege, 0xd00, 0x40, true, 0xbae5c273b9cf4ae1)
#define _m053 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::luid_t), "_SE_EXPORTS.SeTrustedCredManAccessPrivilege", se_trusted_cred_man_access_privilege, 0xd40, 0x40, true, 0xe03d0c23c123c185)
#define _m054 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::luid_t), "_SE_EXPORTS.SeRelabelPrivilege", se_relabel_privilege, 0xd80, 0x40, true, 0xf476dc5e9989570c)
#define _m055 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::luid_t), "_SE_EXPORTS.SeIncreaseWorkingSetPrivilege", se_increase_working_set_privilege, 0xdc0, 0x40, true, 0x5512bb3cdcc652f0)
#define _m056 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::luid_t), "_SE_EXPORTS.SeTimeZonePrivilege", se_time_zone_privilege, 0xe00, 0x40, true, 0xb604c70810c3b44f)
#define _m057 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::luid_t), "_SE_EXPORTS.SeCreateSymbolicLinkPrivilege", se_create_symbolic_link_privilege, 0xe40, 0x40, true, 0x3049df06e29be227)
#define _m058 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_SE_EXPORTS.SeIUserSid", se_i_user_sid, 0xe80, 0x40, true, 0xdb5af8a4d73f89fd)
#define _m059 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_SE_EXPORTS.SeUntrustedMandatorySid", se_untrusted_mandatory_sid, 0xec0, 0x40, true, 0xefb4fe4da86d494b)
#define _m060 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_SE_EXPORTS.SeLowMandatorySid", se_low_mandatory_sid, 0xf00, 0x40, true, 0x61377022fdb8ce1f)
#define _m061 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_SE_EXPORTS.SeMediumMandatorySid", se_medium_mandatory_sid, 0xf40, 0x40, true, 0x8c5e9f48e2fa0ca4)
#define _m062 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_SE_EXPORTS.SeHighMandatorySid", se_high_mandatory_sid, 0xf80, 0x40, true, 0x6050ea5969435ca1)
#define _m063 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_SE_EXPORTS.SeSystemMandatorySid", se_system_mandatory_sid, 0xfc0, 0x40, true, 0xaac69d40aa188369)
#define _m064 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_SE_EXPORTS.SeOwnerRightsSid", se_owner_rights_sid, 0x1000, 0x40, true, 0x35caaa973d6d9dc0)
#define _m065 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_SE_EXPORTS.SeAllAppPackagesSid", se_all_app_packages_sid, 0x1040, 0x40, true, 0x8888087b25b4ff1)
#define _m066 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_SE_EXPORTS.SeUserModeDriversSid", se_user_mode_drivers_sid, 0x1080, 0x40, true, 0x88a7098b15c0fc38)
#define _m067 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_SE_EXPORTS.SeTrustedInstallerSid", se_trusted_installer_sid, 0x1100, 0x40, true, 0x63b8e75b70d65037)
#define _m068 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::luid_t), "_SE_EXPORTS.SeDelegateSessionUserImpersonatePrivilege", se_delegate_session_user_impersonate_privilege, 0x1140, 0x40, true, 0xe3c2e31c65403721)
#define _m069 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_SE_EXPORTS.SeProcTrustWinTcbSid", se_proc_trust_win_tcb_sid, 0x10c0, 0x40, true, 0x5ec1e44a581d0577)
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
#define _m048
#define _m049
#define _m050
#define _m051
#define _m052
#define _m053
#define _m054
#define _m055
#define _m056
#define _m057
#define _m058
#define _m059
#define _m060
#define _m061
#define _m062
#define _m063
#define _m064
#define _m065
#define _m066
#define _m067
#define _m068
#define _m069
#endif