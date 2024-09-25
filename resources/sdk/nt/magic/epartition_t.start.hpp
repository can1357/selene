#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_EPARTITION.MmPartition", mm_partition, 0x0, 0x40, true, 0x70c6d22dc5147b1c)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_EPARTITION.CcPartition", cc_partition, 0x40, 0x40, true, 0xe3f3c1a57ea96d9b)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_EPARTITION.ExPartition", ex_partition, 0x80, 0x40, true, 0xd34f95939eab17b6)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_EPARTITION.HardReferenceCount", hard_reference_count, 0xc0, 0x40, true, 0x76f024e541bf53b9)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_EPARTITION.OpenHandleCount", open_handle_count, 0x100, 0x40, true, 0xf440ac6ca5f32823)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_EPARTITION.ActivePartitionLinks", active_partition_links, 0x140, 0x80, true, 0xeac2483d3cb0e130)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::epartition_t*), "_EPARTITION.ParentPartition", parent_partition, 0x1c0, 0x40, true, 0x332394b9b8fe42f6)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::work_queue_item_t), "_EPARTITION.TeardownWorkItem", teardown_work_item, 0x200, 0x0, true, 0xd89fd11d8de9d3f9)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ex::push_lock_t), "_EPARTITION.TeardownLock", teardown_lock, 0x300, 0x40, true, 0xda0f80a0ac362fa4)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::eprocess_t*), "_EPARTITION.SystemProcess", system_process, 0x340, 0x40, true, 0x8c9d41760a0b0787)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_EPARTITION.SystemProcessHandle", system_process_handle, 0x380, 0x40, true, 0xb364cd2bfd3bb253)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_EPARTITION.PartitionFlags", partition_flags, 0x3c0, 0x20, true, 0x6e9254fbc31c2e34)
#define _m12 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EPARTITION.PairedWithJob", paired_with_job, 0x3c0, 0x1, true, 0xbc363f26723338d9, 1, uint32_t)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_EPARTITION.SmPartition", sm_partition, 0x0, 0x0, false, 0xed096677b074816d)
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
#endif