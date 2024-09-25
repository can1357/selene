#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct ndis::pd_ext_client_context_t*, struct ndis::pd_buffer_t*, struct ndis::pd_buffer_t**, struct ndis::pd_buffer_t**, uint32_t)>*), "_NDIS_PD_EXT_CLIENT_DISPATCH.PDExtClientProcessBuffersSend", pd_ext_client_process_buffers_send, 0x0, 0x40, true, 0xc7d7c7c71302f3c3)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct ndis::pd_ext_client_context_t*, struct ndis::pd_buffer_t*, struct ndis::pd_buffer_t**, struct ndis::pd_buffer_t**, uint32_t)>*), "_NDIS_PD_EXT_CLIENT_DISPATCH.PDExtClientProcessBuffersReceive", pd_ext_client_process_buffers_receive, 0x40, 0x40, true, 0xfab704af310dde11)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct ndis::pd_ext_client_context_t*, struct ndis::pd_buffer_t*, struct ndis::pd_buffer_t**, uint32_t)>*), "_NDIS_PD_EXT_CLIENT_DISPATCH.PDExtClientCompleteBuffersSend", pd_ext_client_complete_buffers_send, 0x80, 0x40, true, 0xd3fc660cbfdec9c8)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct ndis::pd_ext_client_context_t*, struct ndis::pd_buffer_t*, struct ndis::pd_buffer_t**, uint32_t)>*), "_NDIS_PD_EXT_CLIENT_DISPATCH.PDExtClientCompleteBuffersReceive", pd_ext_client_complete_buffers_receive, 0xc0, 0x40, true, 0xeb7e1e52d7dcfe81)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif