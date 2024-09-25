#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<class win::c_com_apartment_t*(class win::c_ole_tls_t&)>*), "ApartmentTypeSpecificRoutines.GetCurrentComApartment", get_current_com_apartment, 0x0, 0x40, true, 0x969eba9dc4d9c660)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<bool()>*), "ApartmentTypeSpecificRoutines.IsInitializedAndNotUninitializing", is_initialized_and_not_uninitializing, 0x40, 0x40, true, 0xe0e652421ad73419)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(void**)>*), "ApartmentTypeSpecificRoutines.CreateApartmentState", create_apartment_state, 0x80, 0x40, true, 0x4fd80c79c4c974b4)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "ApartmentTypeSpecificRoutines.ReleaseApartmentState", release_apartment_state, 0xc0, 0x40, true, 0xd78a76d7111a0267)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint32_t()>*), "ApartmentTypeSpecificRoutines.GetServerReportedOxidFlags", get_server_reported_oxid_flags, 0x100, 0x40, true, 0xc446ad826ef50783)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(class win::c_async_call_t*, class win::c_channel_object_t*)>*), "ApartmentTypeSpecificRoutines.SignalApartmentClient", signal_apartment_client, 0x140, 0x40, true, 0xf84cf374c1789259)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct tag::rpcolemessage_t*, uint32_t, bool, struct win::i_rpc_stub_buffer_t*, class win::c_server_channel_t*, struct tag::ipid_entry_t*, uint32_t*)>*), "ApartmentTypeSpecificRoutines.InvokeInApartment", invoke_in_apartment, 0x180, 0x40, true, 0xc5ea586a7682fc8)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(class win::winrt_async_response_t*)>*), "ApartmentTypeSpecificRoutines.DeliverCrossThreadResponseToClient", deliver_cross_thread_response_to_client, 0x1c0, 0x40, true, 0x6cfdefceaa14d17)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(class win::winrt_async_server_continuation_message_t*)>*), "ApartmentTypeSpecificRoutines.DeliverCrossThreadCancelToServer", deliver_cross_thread_cancel_to_server, 0x200, 0x40, true, 0x6eb2e5936daeaa90)
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