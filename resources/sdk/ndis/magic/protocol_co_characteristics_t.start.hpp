#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::object_header_t), "_NDIS_PROTOCOL_CO_CHARACTERISTICS.Header", header, 0x0, 0x20, true, 0x44be6ac565eb3860)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_PROTOCOL_CO_CHARACTERISTICS.Flags", flags, 0x20, 0x20, true, 0x64cde045bd5c4a60)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, void*, struct ndis::status_indication_t*)>*), "_NDIS_PROTOCOL_CO_CHARACTERISTICS.CoStatusHandlerEx", co_status_handler_ex, 0x40, 0x40, true, 0x49ac4235981807de)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, struct ndis::co_address_family_t*)>*), "_NDIS_PROTOCOL_CO_CHARACTERISTICS.CoAfRegisterNotifyHandler", co_af_register_notify_handler, 0x80, 0x40, true, 0xb39f0314614ac334)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, void*, struct ndis::net_buffer_list_t*, uint32_t, uint32_t)>*), "_NDIS_PROTOCOL_CO_CHARACTERISTICS.CoReceiveNetBufferListsHandler", co_receive_net_buffer_lists_handler, 0xc0, 0x40, true, 0x9f5935d51c264af0)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, struct ndis::net_buffer_list_t*, uint32_t)>*), "_NDIS_PROTOCOL_CO_CHARACTERISTICS.CoSendNetBufferListsCompleteHandler", co_send_net_buffer_lists_complete_handler, 0x100, 0x40, true, 0x948c644b37a1eda)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif