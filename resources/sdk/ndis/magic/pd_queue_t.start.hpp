#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::object_header_t), "_NDIS_PD_QUEUE.Header", header, 0x0, 0x20, true, 0xbb8c7ec771610b83)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_PD_QUEUE.Flags", flags, 0x20, 0x20, true, 0xcb8e75d49fea6ada)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const struct ndis::pd_queue_dispatch_t*), "_NDIS_PD_QUEUE.Dispatch", dispatch, 0x40, 0x40, true, 0xf42ae38f14ba455d)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<void*, 2>), "_NDIS_PD_QUEUE.PDPlatformReserved", pd_platform_reserved, 0x80, 0x80, true, 0xfd7944200d89f63b)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<void*, 2>), "_NDIS_PD_QUEUE.PDClientReserved", pd_client_reserved, 0x100, 0x80, true, 0xbfdd5b500f3d7765)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif