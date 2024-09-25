#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_CM_RM.RmListEntry", rm_list_entry, 0x0, 0x80, true, 0xe99e92acaf10e141)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_CM_RM.TransactionListHead", transaction_list_head, 0x80, 0x80, true, 0xeb45c3a87d6e3cc6)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_CM_RM.TmHandle", tm_handle, 0x100, 0x40, true, 0x2cc643a9c0d3618)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_CM_RM.Tm", tm, 0x140, 0x40, true, 0xb24fd981fcfac096)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_CM_RM.RmHandle", rm_handle, 0x180, 0x40, true, 0x84eed5b7cff63a64)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_CM_RM.KtmRm", ktm_rm, 0x1c0, 0x40, true, 0xe52d2b75472bfb35)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CM_RM.RefCount", ref_count, 0x200, 0x20, true, 0x94223f63c9a4564f)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CM_RM.ContainerNum", container_num, 0x220, 0x20, true, 0xbe5ca8d009a8a14b)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_CM_RM.ContainerSize", container_size, 0x240, 0x40, true, 0x891dfeffec87c23d)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::cmhive_t*), "_CM_RM.CmHive", cm_hive, 0x280, 0x40, true, 0xcea88673f508dce)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_CM_RM.LogFileObject", log_file_object, 0x2c0, 0x40, true, 0xab6827b9d206fc7d)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_CM_RM.MarshallingContext", marshalling_context, 0x300, 0x40, true, 0x2638e6e5aa1bd2bb)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CM_RM.RmFlags", rm_flags, 0x340, 0x20, true, 0xd5ad63fa38196f4a)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_CM_RM.LogStartStatus1", log_start_status1, 0x360, 0x20, true, 0xfe12bbf323892204)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_CM_RM.LogStartStatus2", log_start_status2, 0x380, 0x20, true, 0xe0308fb47affa363)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_CM_RM.BaseLsn", base_lsn, 0x3c0, 0x40, true, 0x4855f5c1e838b170)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::eresource_t*), "_CM_RM.RmLock", rm_lock, 0x400, 0x40, true, 0xb849dd90d2b7b177)
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
#endif