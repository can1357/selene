#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_TX_CONTEXT_EXTENSION.TxEnlistmentHandle", tx_enlistment_handle, 0x0, 0x40, true, 0x63006490506f336a)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kenlistment_t*), "_TX_CONTEXT_EXTENSION.TxEnlistmentObject", tx_enlistment_object, 0x40, 0x40, true, 0x5bf2507219478e68)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_TX_CONTEXT_EXTENSION.TxNotificationMask", tx_notification_mask, 0x80, 0x20, true, 0x948bba2a1e9c573)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fltmgr::fltp_workitem_t), "_TX_CONTEXT_EXTENSION.TxCompleteFinalizeWork", tx_complete_finalize_work, 0xc0, 0x40, true, 0x2394efabde82de35)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ex::push_lock_t), "_TX_CONTEXT_EXTENSION.TxCtxExtensionLock", tx_ctx_extension_lock, 0x200, 0x40, true, 0x2160a5424a5cc132)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif