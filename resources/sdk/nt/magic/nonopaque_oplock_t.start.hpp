#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::irp_t*), "_NONOPAQUE_OPLOCK.IrpExclusiveOplock", irp_exclusive_oplock, 0x0, 0x40, true, 0x528e144eed58b352)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::file_object_t*), "_NONOPAQUE_OPLOCK.FileObject", file_object, 0x40, 0x40, true, 0xca6d3bf0a3c4d34d)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::eprocess_t*), "_NONOPAQUE_OPLOCK.ExclusiveOplockOwner", exclusive_oplock_owner, 0x80, 0x40, true, 0x3042d130d419c281)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::ethread_t*), "_NONOPAQUE_OPLOCK.ExclusiveOplockOwnerThread", exclusive_oplock_owner_thread, 0xc0, 0x40, true, 0x59d77d4ff13b5c03)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NONOPAQUE_OPLOCK.WaiterPriority", waiter_priority, 0x100, 0x8, true, 0x411e5dbe70c5c23e)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_NONOPAQUE_OPLOCK.IrpOplocksR", irp_oplocks_r, 0x140, 0x80, true, 0x505c9ff08d03d607)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_NONOPAQUE_OPLOCK.IrpOplocksRH", irp_oplocks_rh, 0x1c0, 0x80, true, 0xc88bc8ced26357b)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_NONOPAQUE_OPLOCK.RHBreakQueue", rh_break_queue, 0x240, 0x80, true, 0xef438402d88efb2)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_NONOPAQUE_OPLOCK.WaitingIrps", waiting_irps, 0x2c0, 0x80, true, 0x3608c23aba734281)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_NONOPAQUE_OPLOCK.DelayAckFileObjectQueue", delay_ack_file_object_queue, 0x340, 0x80, true, 0x2936daa7876c122)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_NONOPAQUE_OPLOCK.AtomicQueue", atomic_queue, 0x3c0, 0x80, true, 0x45ce7758642e4d5a)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t*), "_NONOPAQUE_OPLOCK.DeleterParentKey", deleter_parent_key, 0x440, 0x40, true, 0x8344c2b4e289835d)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NONOPAQUE_OPLOCK.OplockState", oplock_state, 0x480, 0x20, true, 0x8e4aff3884725729)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::fast_mutex_t*), "_NONOPAQUE_OPLOCK.FastMutex", fast_mutex, 0x4c0, 0x40, true, 0x8e87c67171a45eb5)
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