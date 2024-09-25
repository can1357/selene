#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::c_channel_object_t*), "CAsyncCall._pChnlObj", p_chnl_obj, 0x1500, 0x40, true, 0x273a1576b5b1a87e)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rpc::async_state_t), "CAsyncCall._AsyncState", async_state, 0x1580, 0x80, true, 0x23a8bf7897064c1e)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::c_async_call_t*), "CAsyncCall._pNext", p_next, 0x1900, 0x40, true, 0x8e34d5e3ded64df7)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "CAsyncCall._pRequestBuffer", p_request_buffer, 0x1940, 0x40, true, 0x5345b1e5b5f0bcc2)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::hresult), "CAsyncCall._idempotentIRpcReceiveResult", idempotent_i_rpc_receive_result, 0x1980, 0x20, true, 0xd8037b43d484b60d)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(bool), "CAsyncCall._cancelationNotificationsEnabled", cancelation_notifications_enabled, 0x19a0, 0x8, true, 0x75f028465eed6254)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::waitable_count_t), "CAsyncCall._cServerCancelationNotificationsReceived", c_server_cancelation_notifications_received, 0x19c0, 0x20, true, 0x813f536cb1b584ba)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "CAsyncCall._hRpcNotificationCallCancelEvent", h_rpc_notification_call_cancel_event, 0x1a00, 0x40, true, 0x246a6080a4ca7abc)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tp::wait_t*), "CAsyncCall._pRpcNotificationCallCancelWait", p_rpc_notification_call_cancel_wait, 0x1a40, 0x40, true, 0xfc0cc2b2d70208cb)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const class win::cached_call_event_t), "CAsyncCall._eventRpcNotification", event_rpc_notification, 0x1b00, 0x80, true, 0x57a65c87ca44f082)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile uint32_t), "CAsyncCall._cClientRpcFreeDeferrals", c_client_rpc_free_deferrals, 0x1b80, 0x20, true, 0xee6ea77aec53bb5f)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_server_cancellation_state_t), "CAsyncCall._serverCancellationState", server_cancellation_state, 0x1c00, 0x20, true, 0xf16d4a1e3b5baa30)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile uint64_t), "CAsyncCall.m_callCompleteTickCount", m_call_complete_tick_count, 0x1ac0, 0x40, true, 0x1fab4480bdb6cd3)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const uint32_t), "CAsyncCall._lApt", l_apt, 0x0, 0x0, false, 0x44609e7f1612ed9f)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const enum win::aptkind_t), "CAsyncCall._clientAptKind", client_apt_kind, 0x0, 0x0, false, 0x8e26d01b05b971f6)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::wire_that_t*), "CAsyncCall._pIdempotentIRpcReceiveWireThat", p_idempotent_i_rpc_receive_wire_that, 0x0, 0x0, false, 0x13ec8e36a3c5ab62)
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