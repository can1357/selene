#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(uint32_t, uint32_t, uint32_t, void**, uint32_t*)>*), "ThreadTypeSpecificRoutines.WaitForHandles", wait_for_handles, 0x0, 0x40, true, 0xf9cf80183b2fc2d1)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(class win::c_channel_object_t*)>*), "ThreadTypeSpecificRoutines.SignalMTAClient", signal_mta_client, 0x40, 0x40, true, 0xc4e4ab41a956d47c)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(class win::c_channel_object_t*)>*), "ThreadTypeSpecificRoutines.SignalNAClient", signal_na_client, 0x80, 0x40, true, 0xd9168ed45f03d6ef)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct tag::rpcolemessage_t*, const struct nt::guid_t&, bool)>*), "ThreadTypeSpecificRoutines.CheckAndAdjustRpcFlagsInClientGetBuffer", check_and_adjust_rpc_flags_in_client_get_buffer, 0xc0, 0x40, true, 0x2ba73aec34422f6a)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::variant<sdk::function<sdk::hresult(uint32_t, const struct nt::guid_t&, struct tag::rpcolemessage_t*)>*, sdk::function<sdk::hresult(bool, bool, const struct nt::guid_t&, struct tag::rpcolemessage_t*)>*>), "ThreadTypeSpecificRoutines.CanMakeOutCall", can_make_out_call, 0x100, 0x40, true, 0x6b9c243faeaf946e)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<bool()>*), "ThreadTypeSpecificRoutines.CanMakeOutRemReleaseCall", can_make_out_rem_release_call, 0x140, 0x40, true, 0xe6eecdaaa7086ef9)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(class win::c_sync_client_call_t*, struct tag::rpcolemessage_t*, uint32_t*)>*), "ThreadTypeSpecificRoutines.SendReceive", send_receive, 0x180, 0x40, true, 0x3cca730416a01238)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(class win::client_call_t*, struct tag::rpcolemessage_t*, uint32_t*)>*), "ThreadTypeSpecificRoutines.Send", send, 0x1c0, 0x40, true, 0x8ab5e749b7ca1bd4)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(class win::client_call_t*, struct tag::rpcolemessage_t*, uint32_t, uint32_t*)>*), "ThreadTypeSpecificRoutines.Receive", receive, 0x200, 0x40, true, 0x5b70a43c62571f31)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(uint32_t)>*), "ThreadTypeSpecificRoutines.BlockForAsyncCancel", block_for_async_cancel, 0x240, 0x40, true, 0x7e258f5c23fa1f9e)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct tag::rpcolemessage_t*, class win::oxid_entry_t*, class win::c_sync_client_call_t*)>*), "ThreadTypeSpecificRoutines.DispatchCrossApartmentCall", dispatch_cross_apartment_call, 0x280, 0x40, true, 0x3ed967e8543f6f56)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(class win::c_sync_client_call_t*, enum win::wait_for_call_reason_t, uint32_t)>*), "ThreadTypeSpecificRoutines.WaitForCall", wait_for_call, 0x2c0, 0x40, true, 0x5c1dcead65e475ce)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(uint32_t, enum win::send_message_to_classic_sta_reason_t, struct win::hwnd_t*, uint32_t, uint64_t, int64_t)>*), "ThreadTypeSpecificRoutines.SendMessageToClassicSTA", send_message_to_classic_sta, 0x300, 0x40, true, 0x28c326ead3ffa0ec)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(const struct nt::guid_t&, uint16_t, uint32_t, void*)>*), "ThreadTypeSpecificRoutines.HandleIncomingCall", handle_incoming_call, 0x340, 0x40, true, 0x6488426ebaea8937)
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