#if !IN_PARSER
#define _m000 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_ALPC_PORT.PortListEntry", port_list_entry, 0x0, 0x80, true, 0xb91b8c07a69e2711)
#define _m001 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct alpc::communication_info_t*), "_ALPC_PORT.CommunicationInfo", communication_info, 0x80, 0x40, true, 0xb459ec219449133c)
#define _m002 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::eprocess_t*), "_ALPC_PORT.OwnerProcess", owner_process, 0xc0, 0x40, true, 0x6739971219940e61)
#define _m003 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::variant<void*, struct nt::kqueue_t*>), "_ALPC_PORT.CompletionPort", completion_port, 0x100, 0x40, true, 0x37d4171778aa9562)
#define _m004 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_ALPC_PORT.CompletionKey", completion_key, 0x140, 0x40, true, 0x65fb27eac6fa6f51)
#define _m005 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct alpc::completion_packet_lookaside_t*), "_ALPC_PORT.CompletionPacketLookaside", completion_packet_lookaside, 0x180, 0x40, true, 0x6f383ded3d5f10d8)
#define _m006 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_ALPC_PORT.PortContext", port_context, 0x1c0, 0x40, true, 0x97557e86e2f323b4)
#define _m007 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct sec::client_context_t), "_ALPC_PORT.StaticSecurity", static_security, 0x200, 0x40, true, 0x67cdddfa3728b959)
#define _m008 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ex::push_lock_t), "_ALPC_PORT.IncomingQueueLock", incoming_queue_lock, 0x440, 0x40, true, 0xa08fd4f25abee6f3)
#define _m009 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_ALPC_PORT.MainQueue", main_queue, 0x480, 0x80, true, 0xaaf0085f70b61d57)
#define _m010 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_ALPC_PORT.LargeMessageQueue", large_message_queue, 0x500, 0x80, true, 0x2a5afde6ccb0ee1b)
#define _m011 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ex::push_lock_t), "_ALPC_PORT.PendingQueueLock", pending_queue_lock, 0x580, 0x40, true, 0xe987415d03ce7e4c)
#define _m012 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_ALPC_PORT.PendingQueue", pending_queue, 0x5c0, 0x80, true, 0xf37cb9919e63fc46)
#define _m013 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ex::push_lock_t), "_ALPC_PORT.DirectQueueLock", direct_queue_lock, 0x640, 0x40, true, 0xf3a5ceecacd2a519)
#define _m014 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_ALPC_PORT.DirectQueue", direct_queue, 0x680, 0x80, true, 0xecd883dd67b5d7c6)
#define _m015 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ex::push_lock_t), "_ALPC_PORT.WaitQueueLock", wait_queue_lock, 0x700, 0x40, true, 0x74531368bc780734)
#define _m016 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_ALPC_PORT.WaitQueue", wait_queue, 0x740, 0x80, true, 0x17d789778a6ec92c)
#define _m017 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::ksemaphore_t*), "_ALPC_PORT.Semaphore", semaphore, 0x7c0, 0x40, true, 0x26ee7d4f13ac65b5)
#define _m018 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kevent_t*), "_ALPC_PORT.DummyEvent", dummy_event, 0x7c0, 0x40, true, 0x43c671dce621183e)
#define _m019 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct alpc::port_attributes_t), "_ALPC_PORT.PortAttributes", port_attributes, 0x800, 0x40, true, 0x6a1760a507a6871d)
#define _m020 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ex::push_lock_t), "_ALPC_PORT.ResourceListLock", resource_list_lock, 0xa40, 0x40, true, 0x39ea72cd8ffc1681)
#define _m021 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_ALPC_PORT.ResourceListHead", resource_list_head, 0xa80, 0x80, true, 0x439d021d0574488f)
#define _m022 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ex::push_lock_t), "_ALPC_PORT.PortObjectLock", port_object_lock, 0xb00, 0x40, true, 0x331d9d8f0a9133fe)
#define _m023 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct alpc::completion_list_t*), "_ALPC_PORT.CompletionList", completion_list, 0xb40, 0x40, true, 0x7d8311ef841715b0)
#define _m024 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::callback_object_t*), "_ALPC_PORT.CallbackObject", callback_object, 0xb80, 0x40, true, 0x1fd4f417c73f4db0)
#define _m025 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_ALPC_PORT.CallbackContext", callback_context, 0xbc0, 0x40, true, 0xc239fa83097614c)
#define _m026 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_ALPC_PORT.CanceledQueue", canceled_queue, 0xc00, 0x80, true, 0x667569020f038e58)
#define _m027 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_ALPC_PORT.SequenceNo", sequence_no, 0xc80, 0x20, true, 0x67e457ee59e2ad2a)
#define _m028 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_ALPC_PORT.ReferenceNo", reference_no, 0xca0, 0x20, true, 0xfce0d4696f503757)
#define _m029 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::palpc_port_reference_wait_block_t*), "_ALPC_PORT.ReferenceNoWait", reference_no_wait, 0xcc0, 0x40, true, 0x8e6555bc415f61b7)
#define _m030 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_ALPC_PORT.Initialized", initialized, 0xd00, 0x1, true, 0xe26e70fef8ae20be, 1, uint32_t)
#define _m031 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_ALPC_PORT.Type", type, 0xd01, 0x2, true, 0xd32796a4d31acf47, 2, uint32_t)
#define _m032 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_ALPC_PORT.ConnectionPending", connection_pending, 0xd03, 0x1, true, 0x15cb34e50bf1a777, 1, uint32_t)
#define _m033 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_ALPC_PORT.ConnectionRefused", connection_refused, 0xd04, 0x1, true, 0xee8c1cca3a01a17b, 1, uint32_t)
#define _m034 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_ALPC_PORT.Disconnected", disconnected, 0xd05, 0x1, true, 0x948dc62ea215c63b, 1, uint32_t)
#define _m035 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_ALPC_PORT.Closed", closed, 0xd06, 0x1, true, 0x4d6f598cb555a756, 1, uint32_t)
#define _m036 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_ALPC_PORT.NoFlushOnClose", no_flush_on_close, 0xd07, 0x1, true, 0x3b039eb5b006f7ff, 1, uint32_t)
#define _m037 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_ALPC_PORT.ReturnExtendedInfo", return_extended_info, 0xd08, 0x1, true, 0x3a72851262f770aa, 1, uint32_t)
#define _m038 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_ALPC_PORT.Waitable", waitable, 0xd09, 0x1, true, 0xcd6504c54fdbe429, 1, uint32_t)
#define _m039 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_ALPC_PORT.DynamicSecurity", dynamic_security, 0xd0a, 0x1, true, 0x16a947779c74e2f3, 1, uint32_t)
#define _m040 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_ALPC_PORT.Wow64CompletionList", wow64_completion_list, 0xd0b, 0x1, true, 0x6f6a2ba87c01e0ba, 1, uint32_t)
#define _m041 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_ALPC_PORT.Lpc", lpc, 0xd0c, 0x1, true, 0x35f757cdd02bb1ee, 1, uint32_t)
#define _m042 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_ALPC_PORT.LpcToLpc", lpc_to_lpc, 0xd0d, 0x1, true, 0xe8a2a2f4160a766a, 1, uint32_t)
#define _m043 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_ALPC_PORT.HasCompletionList", has_completion_list, 0xd0e, 0x1, true, 0xe02db4d363aaf0e4, 1, uint32_t)
#define _m044 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_ALPC_PORT.HadCompletionList", had_completion_list, 0xd0f, 0x1, true, 0xbf0d362eb11f4030, 1, uint32_t)
#define _m045 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_ALPC_PORT.EnableCompletionList", enable_completion_list, 0xd10, 0x1, true, 0xd001155b190367ff, 1, uint32_t)
#define _m046 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ALPC_PORT.State", state, 0xd00, 0x20, true, 0xd9bb0fa744c11d29)
#define _m047 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct alpc::port_t*), "_ALPC_PORT.TargetQueuePort", target_queue_port, 0xd40, 0x40, true, 0x3406e0a300a0da74)
#define _m048 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct alpc::port_t*), "_ALPC_PORT.TargetSequencePort", target_sequence_port, 0xd80, 0x40, true, 0xf28d8b104bde0022)
#define _m049 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kalpc_message_t*), "_ALPC_PORT.CachedMessage", cached_message, 0xdc0, 0x40, true, 0xdf798d0c9f874b80)
#define _m050 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ALPC_PORT.MainQueueLength", main_queue_length, 0xe00, 0x20, true, 0x43d29cf405f5fba)
#define _m051 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ALPC_PORT.LargeMessageQueueLength", large_message_queue_length, 0xe20, 0x20, true, 0x2880c7f972ebee4d)
#define _m052 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ALPC_PORT.PendingQueueLength", pending_queue_length, 0xe40, 0x20, true, 0xc582821d2c5e6c08)
#define _m053 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ALPC_PORT.DirectQueueLength", direct_queue_length, 0xe60, 0x20, true, 0xc8554c5dc598c5c8)
#define _m054 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ALPC_PORT.CanceledQueueLength", canceled_queue_length, 0xe80, 0x20, true, 0xed5021e2fa99b4eb)
#define _m055 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ALPC_PORT.WaitQueueLength", wait_queue_length, 0xea0, 0x20, true, 0x357b1f6ec47f8f9a)
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
#define _m037
#define _m038
#define _m039
#define _m040
#define _m041
#define _m042
#define _m043
#define _m044
#define _m045
#define _m046
#define _m047
#define _m048
#define _m049
#define _m050
#define _m051
#define _m052
#define _m053
#define _m054
#define _m055
#endif