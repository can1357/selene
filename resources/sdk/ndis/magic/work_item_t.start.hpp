#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_NDIS_WORK_ITEM.Context", context, 0x0, 0x40, true, 0x7f79e20fab52e598)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct ndis::work_item_t*, void*)>*), "_NDIS_WORK_ITEM.Routine", routine, 0x40, 0x40, true, 0xd94fa8468d96923d)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 64>), "_NDIS_WORK_ITEM.WrapperReserved", wrapper_reserved, 0x80, 0x0, true, 0x44c89e25b865edc2)
#else
#define _m00
#define _m01
#define _m02
#endif