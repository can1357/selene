#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct alpc::port_t*), "_ALPC_DISPATCH_CONTEXT.PortObject", port_object, 0x0, 0x40, true, 0x2a59dc43a77aa67f)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kalpc_message_t*), "_ALPC_DISPATCH_CONTEXT.Message", message, 0x40, 0x40, true, 0x326775a8bf269d29)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct alpc::communication_info_t*), "_ALPC_DISPATCH_CONTEXT.CommunicationInfo", communication_info, 0x80, 0x40, true, 0x55d5af8bed3d6fe5)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::ethread_t*), "_ALPC_DISPATCH_CONTEXT.TargetThread", target_thread, 0xc0, 0x40, true, 0x1a5c817bb5c4ee93)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct alpc::port_t*), "_ALPC_DISPATCH_CONTEXT.TargetPort", target_port, 0x100, 0x40, true, 0xb4ab1e5f8c0d01a6)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union nt::kalpc_direct_event_t), "_ALPC_DISPATCH_CONTEXT.DirectEvent", direct_event, 0x140, 0x40, true, 0x7504311384a526f0)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ALPC_DISPATCH_CONTEXT.Flags", flags, 0x180, 0x20, true, 0xf0fa6f4744636107)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_ALPC_DISPATCH_CONTEXT.TotalLength", total_length, 0x1a0, 0x10, true, 0xa493a5435797248)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_ALPC_DISPATCH_CONTEXT.Type", type, 0x1b0, 0x10, true, 0xec5e8668b7b55dbd)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_ALPC_DISPATCH_CONTEXT.DataInfoOffset", data_info_offset, 0x1c0, 0x10, true, 0xab8fffc2d5e2765)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_ALPC_DISPATCH_CONTEXT.SignalCompletion", signal_completion, 0x1d0, 0x8, true, 0xaa517b69ca8a9a79)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_ALPC_DISPATCH_CONTEXT.PostedToCompletionList", posted_to_completion_list, 0x1d8, 0x8, true, 0x80be6e1c1d5f3358)
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
#endif