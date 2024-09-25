#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/luid_t.hpp"

#include "magic/exports_t.start.hpp"
namespace se
{
    // [struct _SE_EXPORTS]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct exports_t                                                           
    {                                                                          
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                               
        //                                                                     
        _m000 struct nt::luid_t se_create_token_privilege;                       //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .SeCreateTokenPrivilege
        _m001 struct nt::luid_t se_assign_primary_token_privilege;               //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .SeAssignPrimaryTokenPrivilege
        _m002 struct nt::luid_t se_lock_memory_privilege;                        //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .SeLockMemoryPrivilege
        _m003 struct nt::luid_t se_increase_quota_privilege;                     //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .SeIncreaseQuotaPrivilege
        _m004 struct nt::luid_t se_unsolicited_input_privilege;                  //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | .SeUnsolicitedInputPrivilege
        _m005 struct nt::luid_t se_tcb_privilege;                                //{ +0x0028    +0x0028    +0x0028    +0x0028    +0x0028    } | .SeTcbPrivilege
        _m006 struct nt::luid_t se_security_privilege;                           //{ +0x0030    +0x0030    +0x0030    +0x0030    +0x0030    } | .SeSecurityPrivilege
        _m007 struct nt::luid_t se_take_ownership_privilege;                     //{ +0x0038    +0x0038    +0x0038    +0x0038    +0x0038    } | .SeTakeOwnershipPrivilege
        _m008 struct nt::luid_t se_load_driver_privilege;                        //{ +0x0040    +0x0040    +0x0040    +0x0040    +0x0040    } | .SeLoadDriverPrivilege
        _m009 struct nt::luid_t se_create_pagefile_privilege;                    //{ +0x0048    +0x0048    +0x0048    +0x0048    +0x0048    } | .SeCreatePagefilePrivilege
        _m010 struct nt::luid_t se_increase_base_priority_privilege;             //{ +0x0050    +0x0050    +0x0050    +0x0050    +0x0050    } | .SeIncreaseBasePriorityPrivilege
        _m011 struct nt::luid_t se_system_profile_privilege;                     //{ +0x0058    +0x0058    +0x0058    +0x0058    +0x0058    } | .SeSystemProfilePrivilege
        _m012 struct nt::luid_t se_systemtime_privilege;                         //{ +0x0060    +0x0060    +0x0060    +0x0060    +0x0060    } | .SeSystemtimePrivilege
        _m013 struct nt::luid_t se_profile_single_process_privilege;             //{ +0x0068    +0x0068    +0x0068    +0x0068    +0x0068    } | .SeProfileSingleProcessPrivilege
        _m014 struct nt::luid_t se_create_permanent_privilege;                   //{ +0x0070    +0x0070    +0x0070    +0x0070    +0x0070    } | .SeCreatePermanentPrivilege
        _m015 struct nt::luid_t se_backup_privilege;                             //{ +0x0078    +0x0078    +0x0078    +0x0078    +0x0078    } | .SeBackupPrivilege
        _m016 struct nt::luid_t se_restore_privilege;                            //{ +0x0080    +0x0080    +0x0080    +0x0080    +0x0080    } | .SeRestorePrivilege
        _m017 struct nt::luid_t se_shutdown_privilege;                           //{ +0x0088    +0x0088    +0x0088    +0x0088    +0x0088    } | .SeShutdownPrivilege
        _m018 struct nt::luid_t se_debug_privilege;                              //{ +0x0090    +0x0090    +0x0090    +0x0090    +0x0090    } | .SeDebugPrivilege
        _m019 struct nt::luid_t se_audit_privilege;                              //{ +0x0098    +0x0098    +0x0098    +0x0098    +0x0098    } | .SeAuditPrivilege
        _m020 struct nt::luid_t se_system_environment_privilege;                 //{ +0x00a0    +0x00a0    +0x00a0    +0x00a0    +0x00a0    } | .SeSystemEnvironmentPrivilege
        _m021 struct nt::luid_t se_change_notify_privilege;                      //{ +0x00a8    +0x00a8    +0x00a8    +0x00a8    +0x00a8    } | .SeChangeNotifyPrivilege
        _m022 struct nt::luid_t se_remote_shutdown_privilege;                    //{ +0x00b0    +0x00b0    +0x00b0    +0x00b0    +0x00b0    } | .SeRemoteShutdownPrivilege
        _m023 void*             se_null_sid;                                     //{ +0x00b8    +0x00b8    +0x00b8    +0x00b8    +0x00b8    } | .SeNullSid
        _m024 void*             se_world_sid;                                    //{ +0x00c0    +0x00c0    +0x00c0    +0x00c0    +0x00c0    } | .SeWorldSid
        _m025 void*             se_local_sid;                                    //{ +0x00c8    +0x00c8    +0x00c8    +0x00c8    +0x00c8    } | .SeLocalSid
        _m026 void*             se_creator_owner_sid;                            //{ +0x00d0    +0x00d0    +0x00d0    +0x00d0    +0x00d0    } | .SeCreatorOwnerSid
        _m027 void*             se_creator_group_sid;                            //{ +0x00d8    +0x00d8    +0x00d8    +0x00d8    +0x00d8    } | .SeCreatorGroupSid
        _m028 void*             se_nt_authority_sid;                             //{ +0x00e0    +0x00e0    +0x00e0    +0x00e0    +0x00e0    } | .SeNtAuthoritySid
        _m029 void*             se_dialup_sid;                                   //{ +0x00e8    +0x00e8    +0x00e8    +0x00e8    +0x00e8    } | .SeDialupSid
        _m030 void*             se_network_sid;                                  //{ +0x00f0    +0x00f0    +0x00f0    +0x00f0    +0x00f0    } | .SeNetworkSid
        _m031 void*             se_batch_sid;                                    //{ +0x00f8    +0x00f8    +0x00f8    +0x00f8    +0x00f8    } | .SeBatchSid
        _m032 void*             se_interactive_sid;                              //{ +0x0100    +0x0100    +0x0100    +0x0100    +0x0100    } | .SeInteractiveSid
        _m033 void*             se_local_system_sid;                             //{ +0x0108    +0x0108    +0x0108    +0x0108    +0x0108    } | .SeLocalSystemSid
        _m034 void*             se_alias_admins_sid;                             //{ +0x0110    +0x0110    +0x0110    +0x0110    +0x0110    } | .SeAliasAdminsSid
        _m035 void*             se_alias_users_sid;                              //{ +0x0118    +0x0118    +0x0118    +0x0118    +0x0118    } | .SeAliasUsersSid
        _m036 void*             se_alias_guests_sid;                             //{ +0x0120    +0x0120    +0x0120    +0x0120    +0x0120    } | .SeAliasGuestsSid
        _m037 void*             se_alias_power_users_sid;                        //{ +0x0128    +0x0128    +0x0128    +0x0128    +0x0128    } | .SeAliasPowerUsersSid
        _m038 void*             se_alias_account_ops_sid;                        //{ +0x0130    +0x0130    +0x0130    +0x0130    +0x0130    } | .SeAliasAccountOpsSid
        _m039 void*             se_alias_system_ops_sid;                         //{ +0x0138    +0x0138    +0x0138    +0x0138    +0x0138    } | .SeAliasSystemOpsSid
        _m040 void*             se_alias_print_ops_sid;                          //{ +0x0140    +0x0140    +0x0140    +0x0140    +0x0140    } | .SeAliasPrintOpsSid
        _m041 void*             se_alias_backup_ops_sid;                         //{ +0x0148    +0x0148    +0x0148    +0x0148    +0x0148    } | .SeAliasBackupOpsSid
        _m042 void*             se_authenticated_users_sid;                      //{ +0x0150    +0x0150    +0x0150    +0x0150    +0x0150    } | .SeAuthenticatedUsersSid
        _m043 void*             se_restricted_sid;                               //{ +0x0158    +0x0158    +0x0158    +0x0158    +0x0158    } | .SeRestrictedSid
        _m044 void*             se_anonymous_logon_sid;                          //{ +0x0160    +0x0160    +0x0160    +0x0160    +0x0160    } | .SeAnonymousLogonSid
        _m045 struct nt::luid_t se_undock_privilege;                             //{ +0x0168    +0x0168    +0x0168    +0x0168    +0x0168    } | .SeUndockPrivilege
        _m046 struct nt::luid_t se_sync_agent_privilege;                         //{ +0x0170    +0x0170    +0x0170    +0x0170    +0x0170    } | .SeSyncAgentPrivilege
        _m047 struct nt::luid_t se_enable_delegation_privilege;                  //{ +0x0178    +0x0178    +0x0178    +0x0178    +0x0178    } | .SeEnableDelegationPrivilege
        _m048 void*             se_local_service_sid;                            //{ +0x0180    +0x0180    +0x0180    +0x0180    +0x0180    } | .SeLocalServiceSid
        _m049 void*             se_network_service_sid;                          //{ +0x0188    +0x0188    +0x0188    +0x0188    +0x0188    } | .SeNetworkServiceSid
        _m050 struct nt::luid_t se_manage_volume_privilege;                      //{ +0x0190    +0x0190    +0x0190    +0x0190    +0x0190    } | .SeManageVolumePrivilege
        _m051 struct nt::luid_t se_impersonate_privilege;                        //{ +0x0198    +0x0198    +0x0198    +0x0198    +0x0198    } | .SeImpersonatePrivilege
        _m052 struct nt::luid_t se_create_global_privilege;                      //{ +0x01a0    +0x01a0    +0x01a0    +0x01a0    +0x01a0    } | .SeCreateGlobalPrivilege
        _m053 struct nt::luid_t se_trusted_cred_man_access_privilege;            //{ +0x01a8    +0x01a8    +0x01a8    +0x01a8    +0x01a8    } | .SeTrustedCredManAccessPrivilege
        _m054 struct nt::luid_t se_relabel_privilege;                            //{ +0x01b0    +0x01b0    +0x01b0    +0x01b0    +0x01b0    } | .SeRelabelPrivilege
        _m055 struct nt::luid_t se_increase_working_set_privilege;               //{ +0x01b8    +0x01b8    +0x01b8    +0x01b8    +0x01b8    } | .SeIncreaseWorkingSetPrivilege
        _m056 struct nt::luid_t se_time_zone_privilege;                          //{ +0x01c0    +0x01c0    +0x01c0    +0x01c0    +0x01c0    } | .SeTimeZonePrivilege
        _m057 struct nt::luid_t se_create_symbolic_link_privilege;               //{ +0x01c8    +0x01c8    +0x01c8    +0x01c8    +0x01c8    } | .SeCreateSymbolicLinkPrivilege
        _m058 void*             se_i_user_sid;                                   //{ +0x01d0    +0x01d0    +0x01d0    +0x01d0    +0x01d0    } | .SeIUserSid
        _m059 void*             se_untrusted_mandatory_sid;                      //{ +0x01d8    +0x01d8    +0x01d8    +0x01d8    +0x01d8    } | .SeUntrustedMandatorySid
        _m060 void*             se_low_mandatory_sid;                            //{ +0x01e0    +0x01e0    +0x01e0    +0x01e0    +0x01e0    } | .SeLowMandatorySid
        _m061 void*             se_medium_mandatory_sid;                         //{ +0x01e8    +0x01e8    +0x01e8    +0x01e8    +0x01e8    } | .SeMediumMandatorySid
        _m062 void*             se_high_mandatory_sid;                           //{ +0x01f0    +0x01f0    +0x01f0    +0x01f0    +0x01f0    } | .SeHighMandatorySid
        _m063 void*             se_system_mandatory_sid;                         //{ +0x01f8    +0x01f8    +0x01f8    +0x01f8    +0x01f8    } | .SeSystemMandatorySid
        _m064 void*             se_owner_rights_sid;                             //{ +0x0200    +0x0200    +0x0200    +0x0200    +0x0200    } | .SeOwnerRightsSid
        _m065 void*             se_all_app_packages_sid;                         //{ +0x0208    +0x0208    +0x0208    +0x0208    +0x0208    } | .SeAllAppPackagesSid
        _m066 void*             se_user_mode_drivers_sid;                        //{ +0x0210    +0x0210    +0x0210    +0x0210    +0x0210    } | .SeUserModeDriversSid
        _m067 void*             se_trusted_installer_sid;                        //{ +0x0220    +0x0218    +0x0220    +0x0220    +0x0220    } | .SeTrustedInstallerSid
        _m068 struct nt::luid_t se_delegate_session_user_impersonate_privilege;  //{ +0x0228    +0x0220    +0x0228    +0x0228    +0x0228    } | .SeDelegateSessionUserImpersonatePrivilege
                                                                               
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2                                               
        //                                                                     
        _m069 void*             se_proc_trust_win_tcb_sid;                       //{ +0x0218    +0x0218    +0x0218    +0x0218    } | .SeProcTrustWinTcbSid
                                                                               
        SDK_MAGIC_PROPERTIES( "_SE_EXPORTS.$", 0x230, true, 0x4fecc6e3c4b87179 );                                               
        SDK_DYNAMIC_SIZE( exports_t );                                               
    };                                                                         
};
#include "magic/exports_t.end.hpp"
