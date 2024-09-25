#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PENDING_STACK_EXPANSION_FALLBACK_WORK.IssueOidRequest", issue_oid_request, 0x0, 0x8, true, 0xb9e32495daaca6ac)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PENDING_STACK_EXPANSION_FALLBACK_WORK.CompleteOidRequest", complete_oid_request, 0x8, 0x8, true, 0xd1d0bd96086ddeff)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::oid_request_t*), "_PENDING_STACK_EXPANSION_FALLBACK_WORK.DirectOidRequestsToComplete", direct_oid_requests_to_complete, 0x40, 0x40, true, 0xae0a8c72a360ba31)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::status_indication_t*), "_PENDING_STACK_EXPANSION_FALLBACK_WORK.StatusIndications", status_indications, 0x80, 0x40, true, 0x15bf47a534814af1)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::net_pnp_event_notification_t*), "_PENDING_STACK_EXPANSION_FALLBACK_WORK.NetPnPEvents", net_pn_p_events, 0xc0, 0x40, true, 0x619e30c0b808d63a)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::net_device_pnp_event_t*), "_PENDING_STACK_EXPANSION_FALLBACK_WORK.DevicePnPEvents", device_pn_p_events, 0x100, 0x40, true, 0x8c2e309f401035d5)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::net_buffer_list_t*), "_PENDING_STACK_EXPANSION_FALLBACK_WORK.SentNblsToComplete", sent_nbls_to_complete, 0x140, 0x40, true, 0x987deac72f8f1978)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::net_buffer_list_t*), "_PENDING_STACK_EXPANSION_FALLBACK_WORK.ReceivedNblsToComplete", received_nbls_to_complete, 0x180, 0x40, true, 0xe35965ee7ac2c39f)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#endif