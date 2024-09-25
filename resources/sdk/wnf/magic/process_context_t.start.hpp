#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wnf::node_header_t), "_WNF_PROCESS_CONTEXT.Header", header, 0x0, 0x20, true, 0x9862eac783f0cf68)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::eprocess_t*), "_WNF_PROCESS_CONTEXT.Process", process, 0x40, 0x40, true, 0xcc8cbfc589ee26a3)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_WNF_PROCESS_CONTEXT.WnfProcessesListEntry", wnf_processes_list_entry, 0x80, 0x80, true, 0xb4c91ff1090454aa)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<void*, 3>), "_WNF_PROCESS_CONTEXT.ImplicitScopeInstances", implicit_scope_instances, 0x100, 0xc0, true, 0xc988e06f08b52be6)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wnf::lock_t), "_WNF_PROCESS_CONTEXT.TemporaryNamesListLock", temporary_names_list_lock, 0x1c0, 0x40, true, 0x9a89762a9402c138)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_WNF_PROCESS_CONTEXT.TemporaryNamesListHead", temporary_names_list_head, 0x200, 0x80, true, 0x9950bb0a48b064d5)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wnf::lock_t), "_WNF_PROCESS_CONTEXT.ProcessSubscriptionListLock", process_subscription_list_lock, 0x280, 0x40, true, 0x496a997a94f49ee8)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_WNF_PROCESS_CONTEXT.ProcessSubscriptionListHead", process_subscription_list_head, 0x2c0, 0x80, true, 0x1bdf75ed9594ad3b)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wnf::lock_t), "_WNF_PROCESS_CONTEXT.DeliveryPendingListLock", delivery_pending_list_lock, 0x340, 0x40, true, 0x12b40754a973fe82)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_WNF_PROCESS_CONTEXT.DeliveryPendingListHead", delivery_pending_list_head, 0x380, 0x80, true, 0xba34f5e85b11f88)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kevent_t*), "_WNF_PROCESS_CONTEXT.NotificationEvent", notification_event, 0x400, 0x40, true, 0x1eef137bd265a02a)
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
#endif