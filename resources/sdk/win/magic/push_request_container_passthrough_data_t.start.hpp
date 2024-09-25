#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const struct win::wire_container_this_t*), "PushRequestContainerPassthroughData._savedRequestContainerPassthroughData", saved_request_container_passthrough_data, 0x0, 0x40, true, 0xcdbfbd1cf4a2dc8e)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "PushRequestContainerPassthroughData._savedRequestContainerPassthroughDataSize", saved_request_container_passthrough_data_size, 0x40, 0x20, true, 0x327626df3f450650)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "PushRequestContainerPassthroughData._savedFreeRequestContainerPassthroughData", saved_free_request_container_passthrough_data, 0x60, 0x20, true, 0x52f7a1349de04ebc)
#else
#define _m00
#define _m01
#define _m02
#endif