#if !IN_PARSER
#define _m000 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_KALPC_MESSAGE.Entry", entry, 0x0, 0x80, true, 0x926c4e25e8acb01c)
#define _m001 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct alpc::port_t*), "_KALPC_MESSAGE.PortQueue", port_queue, 0x80, 0x40, true, 0x7450a324a38b0f3a)
#define _m002 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct alpc::port_t*), "_KALPC_MESSAGE.OwnerPort", owner_port, 0xc0, 0x40, true, 0xe7420d6db4d3ae2f)
#define _m003 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::ethread_t*), "_KALPC_MESSAGE.WaitingThread", waiting_thread, 0x100, 0x40, true, 0xc2eb0fdc2cf76096)
#define _m004 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_KALPC_MESSAGE.QueueType", queue_type, 0x140, 0x3, true, 0x7fac49cb427a5a9b, 3, uint32_t)
#define _m005 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint4_t), "_KALPC_MESSAGE.QueuePortType", queue_port_type, 0x143, 0x4, true, 0x5aa4e33998634f60, 4, uint32_t)
#define _m006 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_KALPC_MESSAGE.Canceled", canceled, 0x147, 0x1, true, 0x551b97b4b08b90fb, 1, uint32_t)
#define _m007 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_KALPC_MESSAGE.Ready", ready, 0x148, 0x1, true, 0xb5e61a62708821d7, 1, uint32_t)
#define _m008 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_KALPC_MESSAGE.ReleaseMessage", release_message, 0x149, 0x1, true, 0x5299337e3d1f70e0, 1, uint32_t)
#define _m009 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_KALPC_MESSAGE.SharedQuota", shared_quota, 0x14a, 0x1, true, 0x38524bfd7a7b591e, 1, uint32_t)
#define _m010 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_KALPC_MESSAGE.ReplyWaitReply", reply_wait_reply, 0x14b, 0x1, true, 0x5e00d9da28ef872c, 1, uint32_t)
#define _m011 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_KALPC_MESSAGE.OwnerPortReference", owner_port_reference, 0x14c, 0x1, true, 0x98830b615670a632, 1, uint32_t)
#define _m012 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_KALPC_MESSAGE.ReceiverReference", receiver_reference, 0x14d, 0x1, true, 0xcc4203365401cf51, 1, uint32_t)
#define _m013 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_KALPC_MESSAGE.ViewAttributeRetrieved", view_attribute_retrieved, 0x14e, 0x1, true, 0xd523920512981edc, 1, uint32_t)
#define _m014 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_KALPC_MESSAGE.InDispatch", in_dispatch, 0x14f, 0x1, true, 0x72408a9c7973fe49, 1, uint32_t)
#define _m015 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KALPC_MESSAGE.State", state, 0x140, 0x20, true, 0x93cb86051c865cc9)
#define _m016 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_KALPC_MESSAGE.SequenceNo", sequence_no, 0x160, 0x20, true, 0x99970db5d27626c0)
#define _m017 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::eprocess_t*), "_KALPC_MESSAGE.QuotaProcess", quota_process, 0x180, 0x40, true, 0xdbefc241c6486b3d)
#define _m018 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_KALPC_MESSAGE.QuotaBlock", quota_block, 0x180, 0x40, true, 0x4f18316dc2301b1d)
#define _m019 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct alpc::port_t*), "_KALPC_MESSAGE.CancelSequencePort", cancel_sequence_port, 0x1c0, 0x40, true, 0xc12f291162a1f72c)
#define _m020 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct alpc::port_t*), "_KALPC_MESSAGE.CancelQueuePort", cancel_queue_port, 0x200, 0x40, true, 0xad94cfe310869df3)
#define _m021 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_KALPC_MESSAGE.CancelSequenceNo", cancel_sequence_no, 0x240, 0x20, true, 0x84f546c38442d2fc)
#define _m022 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_KALPC_MESSAGE.CancelListEntry", cancel_list_entry, 0x280, 0x80, true, 0x89ab89a1a36e6291)
#define _m023 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kalpc_reserve_t*), "_KALPC_MESSAGE.Reserve", reserve, 0x300, 0x40, true, 0xc5f76ab6701264de)
#define _m024 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kalpc_message_attributes_t), "_KALPC_MESSAGE.MessageAttributes", message_attributes, 0x340, 0x40, true, 0xd757cdaa54acb052)
#define _m025 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_KALPC_MESSAGE.DataUserVa", data_user_va, 0x580, 0x40, true, 0xcb9808c9488a4b81)
#define _m026 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct alpc::communication_info_t*), "_KALPC_MESSAGE.CommunicationInfo", communication_info, 0x5c0, 0x40, true, 0x3ab040fa1598b561)
#define _m027 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct alpc::port_t*), "_KALPC_MESSAGE.ConnectionPort", connection_port, 0x600, 0x40, true, 0x3c212481b58a996f)
#define _m028 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::ethread_t*), "_KALPC_MESSAGE.ServerThread", server_thread, 0x640, 0x40, true, 0x3b6dbcd4fff6972c)
#define _m029 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_KALPC_MESSAGE.WakeReference", wake_reference, 0x680, 0x40, true, 0xfda68ca1f54a7a02)
#define _m030 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_KALPC_MESSAGE.ExtensionBuffer", extension_buffer, 0x700, 0x40, true, 0x9e855ffd7056858e)
#define _m031 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_KALPC_MESSAGE.ExtensionBufferSize", extension_buffer_size, 0x740, 0x40, true, 0x24d24071a0451af6)
#define _m032 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::port_message_t), "_KALPC_MESSAGE.PortMessage", port_message, 0x780, 0x40, true, 0x4a542b379a81d2fb)
#define _m033 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_KALPC_MESSAGE.WakeReference2", wake_reference2, 0x6c0, 0x40, true, 0x744a215abc013cd5)
#define _m034 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_KALPC_MESSAGE.ReserveReference", reserve_reference, 0x0, 0x0, false, 0x54af3ec76ce2339a, 1, uint32_t)
#define _m035 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_KALPC_MESSAGE.ViewAttributeDeleteOnRelease", view_attribute_delete_on_release, 0x0, 0x0, false, 0x2389aba09a79a206, 1, uint32_t)
#define _m036 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_KALPC_MESSAGE.InCanceledQueue", in_canceled_queue, 0x0, 0x0, false, 0xdf4de53cb87174d8, 1, uint32_t)
#else
#define _m000
#define _m001
#define _m002
#define _m003
#define _m004
#define _m005
#define _m006
#define _m007
#define _m008
#define _m009
#define _m010
#define _m011
#define _m012
#define _m013
#define _m014
#define _m015
#define _m016
#define _m017
#define _m018
#define _m019
#define _m020
#define _m021
#define _m022
#define _m023
#define _m024
#define _m025
#define _m026
#define _m027
#define _m028
#define _m029
#define _m030
#define _m031
#define _m032
#define _m033
#define _m034
#define _m035
#define _m036
#endif