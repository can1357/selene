#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wnf::node_header_t), "_WNF_SUBSCRIPTION.Header", header, 0x0, 0x20, true, 0x881375c67c74d6d8)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ex::rundown_ref_t), "_WNF_SUBSCRIPTION.RunRef", run_ref, 0x40, 0x40, true, 0x683c3040eb862326)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WNF_SUBSCRIPTION.SubscriptionId", subscription_id, 0x80, 0x40, true, 0x66c36b8e0996f173)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_WNF_SUBSCRIPTION.ProcessSubscriptionListEntry", process_subscription_list_entry, 0xc0, 0x80, true, 0xb86e7b89ca29191b)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::eprocess_t*), "_WNF_SUBSCRIPTION.Process", process, 0x140, 0x40, true, 0xea861ff83e9251f7)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wnf::name_instance_t*), "_WNF_SUBSCRIPTION.NameInstance", name_instance, 0x180, 0x40, true, 0xafd5d676aca0b2c4)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wnf::state_name_struct_t), "_WNF_SUBSCRIPTION.StateName", state_name, 0x1c0, 0x40, true, 0x6c26248727ab3b83)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_WNF_SUBSCRIPTION.StateSubscriptionListEntry", state_subscription_list_entry, 0x200, 0x80, true, 0xb3a63592ea9a2a52)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WNF_SUBSCRIPTION.CallbackRoutine", callback_routine, 0x280, 0x40, true, 0x57151bdbc8467ad3)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_WNF_SUBSCRIPTION.CallbackContext", callback_context, 0x2c0, 0x40, true, 0x715337afb50626c3)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WNF_SUBSCRIPTION.CurrentChangeStamp", current_change_stamp, 0x300, 0x20, true, 0xe268e1bfbacc708)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WNF_SUBSCRIPTION.SubscribedEventSet", subscribed_event_set, 0x320, 0x20, true, 0x69dfdf0e32d43e0b)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_WNF_SUBSCRIPTION.PendingSubscriptionListEntry", pending_subscription_list_entry, 0x340, 0x80, true, 0x676ad92fa7bac420)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wnf::subscription_state_t), "_WNF_SUBSCRIPTION.SubscriptionState", subscription_state, 0x3c0, 0x20, true, 0x1f39100fb7c3083e)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WNF_SUBSCRIPTION.SignaledEventSet", signaled_event_set, 0x3e0, 0x20, true, 0x2ffe1e077fb69f0c)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WNF_SUBSCRIPTION.InDeliveryEventSet", in_delivery_event_set, 0x400, 0x20, true, 0x397d38732bc149b2)
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
#endif