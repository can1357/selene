#if !IN_PARSER
#define _m000 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KTM.cookie", cookie, 0x0, 0x20, true, 0x10f505e17e2c00e6)
#define _m001 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kmutant_t), "_KTM.Mutex", mutex, 0x40, 0xc0, true, 0x6e8fc58284929601)
#define _m002 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum nt::ktm_state_t), "_KTM.State", state, 0x200, 0x20, true, 0x9a001fff4e97f849)
#define _m003 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::ktmobject_namespace_link_t), "_KTM.NamespaceLink", namespace_link, 0x240, 0x40, true, 0x7070373feb72932b)
#define _m004 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_KTM.TmIdentity", tm_identity, 0x380, 0x80, true, 0xc50ecdd116ed77d4)
#define _m005 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KTM.Flags", flags, 0x400, 0x20, true, 0x43fb9edfe870b1c1)
#define _m006 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KTM.VolatileFlags", volatile_flags, 0x420, 0x20, true, 0x7a02ba838b0f3aec)
#define _m007 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_KTM.LogFileName", log_file_name, 0x440, 0x80, true, 0x30106d9691248aa8)
#define _m008 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::file_object_t*), "_KTM.LogFileObject", log_file_object, 0x4c0, 0x40, true, 0x2adfb71e41d1447f)
#define _m009 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_KTM.MarshallingContext", marshalling_context, 0x500, 0x40, true, 0xf772dee5de79c47b)
#define _m010 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_KTM.LogManagementContext", log_management_context, 0x540, 0x40, true, 0x1b3c33106d07dd9c)
#define _m011 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::ktmobject_namespace_t), "_KTM.Transactions", transactions, 0x580, 0x40, true, 0x122f6dae71e1171b)
#define _m012 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::ktmobject_namespace_t), "_KTM.ResourceManagers", resource_managers, 0xac0, 0x40, true, 0x985b1ab6823a4406)
#define _m013 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kmutant_t), "_KTM.LsnOrderedMutex", lsn_ordered_mutex, 0x1000, 0xc0, true, 0x9f59e1a7d65d19a0)
#define _m014 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_KTM.LsnOrderedList", lsn_ordered_list, 0x11c0, 0x80, true, 0xeba3cb81142e1fea)
#define _m015 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_KTM.CommitVirtualClock", commit_virtual_clock, 0x1240, 0x40, true, 0x105e55443a210556)
#define _m016 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::fast_mutex_t), "_KTM.CommitVirtualClockMutex", commit_virtual_clock_mutex, 0x1280, 0xc0, true, 0x54c6a8bc0742556c)
#define _m017 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union cls::lsn_t), "_KTM.BaseLsn", base_lsn, 0x1440, 0x40, true, 0xc25bcd40d7937413)
#define _m018 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union cls::lsn_t), "_KTM.CurrentReadLsn", current_read_lsn, 0x1480, 0x40, true, 0xe6fafec5bd04a2ea)
#define _m019 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union cls::lsn_t), "_KTM.LastRecoveredLsn", last_recovered_lsn, 0x14c0, 0x40, true, 0x10b18d7089486820)
#define _m020 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_KTM.TmRmHandle", tm_rm_handle, 0x1500, 0x40, true, 0x4ed4523064a7c05e)
#define _m021 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kresourcemanager_t*), "_KTM.TmRm", tm_rm, 0x1540, 0x40, true, 0xea0fdfa3bde9cec6)
#define _m022 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kevent_t), "_KTM.LogFullNotifyEvent", log_full_notify_event, 0x1580, 0xc0, true, 0x72179728f1c01e70)
#define _m023 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::work_queue_item_t), "_KTM.CheckpointWorkItem", checkpoint_work_item, 0x1640, 0x0, true, 0xc7b1c2972bc2d29)
#define _m024 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union cls::lsn_t), "_KTM.CheckpointTargetLsn", checkpoint_target_lsn, 0x1740, 0x40, true, 0xaf4981a5cbe52ece)
#define _m025 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::work_queue_item_t), "_KTM.LogFullCompletedWorkItem", log_full_completed_work_item, 0x1780, 0x0, true, 0x525591660e4c86fa)
#define _m026 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::eresource_t), "_KTM.LogWriteResource", log_write_resource, 0x1880, 0x40, true, 0x95e24a53c725ef5b)
#define _m027 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KTM.LogFlags", log_flags, 0x1bc0, 0x20, true, 0xc6ee517d7275a5d5)
#define _m028 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_KTM.LogFullStatus", log_full_status, 0x1be0, 0x20, true, 0xa511d221b243a9a1)
#define _m029 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_KTM.RecoveryStatus", recovery_status, 0x1c00, 0x20, true, 0x1b7a5257be4f7e75)
#define _m030 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union cls::lsn_t), "_KTM.LastCheckBaseLsn", last_check_base_lsn, 0x1c40, 0x40, true, 0xf532c30d16ff9806)
#define _m031 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_KTM.RestartOrderedList", restart_ordered_list, 0x1c80, 0x80, true, 0xe043710253a6c85a)
#define _m032 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::work_queue_item_t), "_KTM.OfflineWorkItem", offline_work_item, 0x1d00, 0x0, true, 0x996cd5d3a7685ff6)
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
#endif