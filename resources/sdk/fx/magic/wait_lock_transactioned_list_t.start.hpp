#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "FxWaitLockTransactionedList.m_ListHead", m_list_head, 0x40, 0x80, true, 0xc2c725700406cdc)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "FxWaitLockTransactionedList.m_TransactionHead", m_transaction_head, 0xc0, 0x80, true, 0x126a1d9c1f69bc96)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class mx::event_t*), "FxWaitLockTransactionedList.m_DeletingDoneEvent", m_deleting_done_event, 0x140, 0x40, true, 0x8f2a39a222025cb6)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "FxWaitLockTransactionedList.m_ListLockedRecursionCount", m_list_locked_recursion_count, 0x180, 0x20, true, 0x48045120c4c87fd4)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxWaitLockTransactionedList.m_DeleteOnRemove", m_delete_on_remove, 0x1a0, 0x8, true, 0x5d6b4328bc271cbd)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxWaitLockTransactionedList.m_Deleting", m_deleting, 0x1a8, 0x8, true, 0xe2abdf45f9bbcec)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxWaitLockTransactionedList.m_Retries", m_retries, 0x1b0, 0x8, true, 0x7315006418a9f9a9)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::wait_lock_internal_t), "FxWaitLockTransactionedList.m_StateChangeListLock", m_state_change_list_lock, 0x1c0, 0x40, true, 0xcec0468447bb2c4)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#endif