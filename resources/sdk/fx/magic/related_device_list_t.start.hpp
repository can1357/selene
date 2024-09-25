#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "FxRelatedDeviceList.m_ListHead", m_list_head, 0x40, 0x80, true, 0x5e78b9bdcafb136d)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "FxRelatedDeviceList.m_TransactionHead", m_transaction_head, 0xc0, 0x80, true, 0x48485dec9a010bd5)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class mx::event_t*), "FxRelatedDeviceList.m_DeletingDoneEvent", m_deleting_done_event, 0x140, 0x40, true, 0x3ed81f0737f1a371)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "FxRelatedDeviceList.m_ListLockedRecursionCount", m_list_locked_recursion_count, 0x180, 0x20, true, 0xe8b995cd068528c4)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxRelatedDeviceList.m_DeleteOnRemove", m_delete_on_remove, 0x1a0, 0x8, true, 0xa6c38683fb3851a8)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxRelatedDeviceList.m_Deleting", m_deleting, 0x1a8, 0x8, true, 0xd5b2251cfff63ea6)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxRelatedDeviceList.m_Retries", m_retries, 0x1b0, 0x8, true, 0xd959de1dbe57ffa0)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class mx::lock_t), "FxRelatedDeviceList.m_ListLock", m_list_lock, 0x1c0, 0x80, true, 0x158956332bd2fa1)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "FxRelatedDeviceList.m_NeedReportMissing", m_need_report_missing, 0x240, 0x20, true, 0xfda4abfe205f9807)
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
#endif