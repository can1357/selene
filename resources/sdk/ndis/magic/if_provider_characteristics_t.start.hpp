#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::object_header_t), "_NDIS_IF_PROVIDER_CHARACTERISTICS.Header", header, 0x0, 0x20, true, 0x803bdbc6b3a90822)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, uint32_t, uint32_t*, void*)>*), "_NDIS_IF_PROVIDER_CHARACTERISTICS.QueryObjectHandler", query_object_handler, 0x40, 0x40, true, 0x439fb60949548b0c)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, uint32_t, uint32_t, void*)>*), "_NDIS_IF_PROVIDER_CHARACTERISTICS.SetObjectHandler", set_object_handler, 0x80, 0x40, true, 0x66284549db855ccb)
#else
#define _m00
#define _m01
#define _m02
#endif