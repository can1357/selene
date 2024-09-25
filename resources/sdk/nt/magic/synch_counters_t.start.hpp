#if !IN_PARSER
#define _m000 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYNCH_COUNTERS.SpinLockAcquireCount", spin_lock_acquire_count, 0x0, 0x20, true, 0xb9bc5b64472c6e29)
#define _m001 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYNCH_COUNTERS.SpinLockContentionCount", spin_lock_contention_count, 0x20, 0x20, true, 0x80ffbf03ba2ac0d3)
#define _m002 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYNCH_COUNTERS.SpinLockSpinCount", spin_lock_spin_count, 0x40, 0x20, true, 0xf3ecae7f70a12534)
#define _m003 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYNCH_COUNTERS.IpiSendRequestBroadcastCount", ipi_send_request_broadcast_count, 0x60, 0x20, true, 0x6d2daca8007d311b)
#define _m004 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYNCH_COUNTERS.IpiSendRequestRoutineCount", ipi_send_request_routine_count, 0x80, 0x20, true, 0xab4a87883f5792ac)
#define _m005 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYNCH_COUNTERS.IpiSendSoftwareInterruptCount", ipi_send_software_interrupt_count, 0xa0, 0x20, true, 0xa1382057331468e3)
#define _m006 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYNCH_COUNTERS.ExInitializeResourceCount", ex_initialize_resource_count, 0xc0, 0x20, true, 0xabb15cba4abac6a1)
#define _m007 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYNCH_COUNTERS.ExReInitializeResourceCount", ex_re_initialize_resource_count, 0xe0, 0x20, true, 0xec5d4b4d46a7e52d)
#define _m008 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYNCH_COUNTERS.ExDeleteResourceCount", ex_delete_resource_count, 0x100, 0x20, true, 0xb9cfd0204c65883d)
#define _m009 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYNCH_COUNTERS.ExecutiveResourceAcquiresCount", executive_resource_acquires_count, 0x120, 0x20, true, 0x7a04089d72699d75)
#define _m010 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYNCH_COUNTERS.ExecutiveResourceContentionsCount", executive_resource_contentions_count, 0x140, 0x20, true, 0x963c731476f3f170)
#define _m011 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYNCH_COUNTERS.ExecutiveResourceReleaseExclusiveCount", executive_resource_release_exclusive_count, 0x160, 0x20, true, 0x3a861b508b1f7b33)
#define _m012 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYNCH_COUNTERS.ExecutiveResourceReleaseSharedCount", executive_resource_release_shared_count, 0x180, 0x20, true, 0xf1f20a31c5135ee)
#define _m013 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYNCH_COUNTERS.ExecutiveResourceConvertsCount", executive_resource_converts_count, 0x1a0, 0x20, true, 0x8104d2178c35a2db)
#define _m014 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYNCH_COUNTERS.ExAcqResExclusiveAttempts", ex_acq_res_exclusive_attempts, 0x1c0, 0x20, true, 0xf1b21b1923bea7f1)
#define _m015 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYNCH_COUNTERS.ExAcqResExclusiveAcquiresExclusive", ex_acq_res_exclusive_acquires_exclusive, 0x1e0, 0x20, true, 0x78d5618defa88139)
#define _m016 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYNCH_COUNTERS.ExAcqResExclusiveAcquiresExclusiveRecursive", ex_acq_res_exclusive_acquires_exclusive_recursive, 0x200, 0x20, true, 0x20d4ab935e33e98)
#define _m017 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYNCH_COUNTERS.ExAcqResExclusiveWaits", ex_acq_res_exclusive_waits, 0x220, 0x20, true, 0x42c6ee3c6b4a85d4)
#define _m018 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYNCH_COUNTERS.ExAcqResExclusiveNotAcquires", ex_acq_res_exclusive_not_acquires, 0x240, 0x20, true, 0xe9b4891168c625b8)
#define _m019 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYNCH_COUNTERS.ExAcqResSharedAttempts", ex_acq_res_shared_attempts, 0x260, 0x20, true, 0x3fdd929730c716e9)
#define _m020 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYNCH_COUNTERS.ExAcqResSharedAcquiresExclusive", ex_acq_res_shared_acquires_exclusive, 0x280, 0x20, true, 0x75c8d385de5bb807)
#define _m021 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYNCH_COUNTERS.ExAcqResSharedAcquiresShared", ex_acq_res_shared_acquires_shared, 0x2a0, 0x20, true, 0x67fb5bcc88596ef5)
#define _m022 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYNCH_COUNTERS.ExAcqResSharedAcquiresSharedRecursive", ex_acq_res_shared_acquires_shared_recursive, 0x2c0, 0x20, true, 0x6a45f6219d718abc)
#define _m023 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYNCH_COUNTERS.ExAcqResSharedWaits", ex_acq_res_shared_waits, 0x2e0, 0x20, true, 0x925b62467bc476ed)
#define _m024 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYNCH_COUNTERS.ExAcqResSharedNotAcquires", ex_acq_res_shared_not_acquires, 0x300, 0x20, true, 0xdf0fc77be2931a2c)
#define _m025 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYNCH_COUNTERS.ExAcqResSharedStarveExclusiveAttempts", ex_acq_res_shared_starve_exclusive_attempts, 0x320, 0x20, true, 0xcae21429f2fb423f)
#define _m026 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYNCH_COUNTERS.ExAcqResSharedStarveExclusiveAcquiresExclusive", ex_acq_res_shared_starve_exclusive_acquires_exclusive, 0x340, 0x20, true, 0x1b6e1d880d30d9b0)
#define _m027 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYNCH_COUNTERS.ExAcqResSharedStarveExclusiveAcquiresShared", ex_acq_res_shared_starve_exclusive_acquires_shared, 0x360, 0x20, true, 0x33a1a7e2ada8375a)
#define _m028 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYNCH_COUNTERS.ExAcqResSharedStarveExclusiveAcquiresSharedRecursive", ex_acq_res_shared_starve_exclusive_acquires_shared_recursive, 0x380, 0x20, true, 0x1c6500791cf10d07)
#define _m029 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYNCH_COUNTERS.ExAcqResSharedStarveExclusiveWaits", ex_acq_res_shared_starve_exclusive_waits, 0x3a0, 0x20, true, 0xbb7038e0a74fea52)
#define _m030 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYNCH_COUNTERS.ExAcqResSharedStarveExclusiveNotAcquires", ex_acq_res_shared_starve_exclusive_not_acquires, 0x3c0, 0x20, true, 0xd555158226056551)
#define _m031 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYNCH_COUNTERS.ExAcqResSharedWaitForExclusiveAttempts", ex_acq_res_shared_wait_for_exclusive_attempts, 0x3e0, 0x20, true, 0xf3301af9f748940e)
#define _m032 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYNCH_COUNTERS.ExAcqResSharedWaitForExclusiveAcquiresExclusive", ex_acq_res_shared_wait_for_exclusive_acquires_exclusive, 0x400, 0x20, true, 0x4140538185182386)
#define _m033 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYNCH_COUNTERS.ExAcqResSharedWaitForExclusiveAcquiresShared", ex_acq_res_shared_wait_for_exclusive_acquires_shared, 0x420, 0x20, true, 0x8309c27d3f3086a7)
#define _m034 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYNCH_COUNTERS.ExAcqResSharedWaitForExclusiveAcquiresSharedRecursive", ex_acq_res_shared_wait_for_exclusive_acquires_shared_recursive, 0x440, 0x20, true, 0x94fe26f51d42cda5)
#define _m035 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYNCH_COUNTERS.ExAcqResSharedWaitForExclusiveWaits", ex_acq_res_shared_wait_for_exclusive_waits, 0x460, 0x20, true, 0xdc697ec457b1232)
#define _m036 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYNCH_COUNTERS.ExAcqResSharedWaitForExclusiveNotAcquires", ex_acq_res_shared_wait_for_exclusive_not_acquires, 0x480, 0x20, true, 0x5cb335deef9ebf0e)
#define _m037 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYNCH_COUNTERS.ExSetResOwnerPointerExclusive", ex_set_res_owner_pointer_exclusive, 0x4a0, 0x20, true, 0x36a629c02d008253)
#define _m038 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYNCH_COUNTERS.ExSetResOwnerPointerSharedNew", ex_set_res_owner_pointer_shared_new, 0x4c0, 0x20, true, 0xf424d8289f8c6e40)
#define _m039 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYNCH_COUNTERS.ExSetResOwnerPointerSharedOld", ex_set_res_owner_pointer_shared_old, 0x4e0, 0x20, true, 0x7fc1632060b565ed)
#define _m040 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYNCH_COUNTERS.ExTryToAcqExclusiveAttempts", ex_try_to_acq_exclusive_attempts, 0x500, 0x20, true, 0x874268344e01cd02)
#define _m041 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYNCH_COUNTERS.ExTryToAcqExclusiveAcquires", ex_try_to_acq_exclusive_acquires, 0x520, 0x20, true, 0xed7760ae91790c3f)
#define _m042 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYNCH_COUNTERS.ExBoostExclusiveOwner", ex_boost_exclusive_owner, 0x540, 0x20, true, 0x6571725606224604)
#define _m043 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYNCH_COUNTERS.ExBoostSharedOwners", ex_boost_shared_owners, 0x560, 0x20, true, 0x71e51f59ce8664d6)
#define _m044 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYNCH_COUNTERS.ExEtwSynchTrackingNotificationsCount", ex_etw_synch_tracking_notifications_count, 0x580, 0x20, true, 0x652ce142cf5ac17e)
#define _m045 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYNCH_COUNTERS.ExEtwSynchTrackingNotificationsAccountedCount", ex_etw_synch_tracking_notifications_accounted_count, 0x5a0, 0x20, true, 0x42dd382c1a31c5ec)
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
#endif