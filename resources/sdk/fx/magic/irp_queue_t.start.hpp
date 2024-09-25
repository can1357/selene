#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "FxIrpQueue.m_Queue", m_queue, 0x0, 0x80, true, 0xcdf0edec87b8f790)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::non_paged_object_t*), "FxIrpQueue.m_LockObject", m_lock_object, 0x80, 0x40, true, 0x331b0ed982c46e6e)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_irp_queue_cancel_t ), "FxIrpQueue.m_CancelCallback", m_cancel_callback, 0xc0, 0x40, true, 0xcd59015140df8274)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "FxIrpQueue.m_RequestCount", m_request_count, 0x100, 0x20, true, 0x19cc27d8455a3178)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif