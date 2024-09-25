#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct ndis::kspin_t*, struct nt::irp_t*)>*), "_KSPIN_DISPATCH.Create", create, 0x0, 0x0, false, 0xd532f9130a775ef4)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct ndis::kspin_t*, struct nt::irp_t*)>*), "_KSPIN_DISPATCH.Close", close, 0x0, 0x0, false, 0xf20a081c44f5557f)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct ndis::kspin_t*)>*), "_KSPIN_DISPATCH.Process", process, 0x0, 0x0, false, 0xa164b405d7aa7985)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct ndis::kspin_t*)>*), "_KSPIN_DISPATCH.Reset", reset, 0x0, 0x0, false, 0xf6c908867b0f782b)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct ndis::kspin_t*, union ndis::ksdataformat_t*, struct ndis::ksmultiple_item_t*, const union ndis::ksdataformat_t*, const struct ndis::ksattribute_list_t*)>*), "_KSPIN_DISPATCH.SetDataFormat", set_data_format, 0x0, 0x0, false, 0x65b2aa56142160d5)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct ndis::kspin_t*, enum ndis::ksstate_t, enum ndis::ksstate_t)>*), "_KSPIN_DISPATCH.SetDeviceState", set_device_state, 0x0, 0x0, false, 0xfc75331ffc051c27)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct ndis::kspin_t*)>*), "_KSPIN_DISPATCH.Connect", connect, 0x0, 0x0, false, 0x725679a29442ef22)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct ndis::kspin_t*)>*), "_KSPIN_DISPATCH.Disconnect", disconnect, 0x0, 0x0, false, 0x2d4ab4381f3c62b9)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const struct ndis::ksclock_dispatch_t*), "_KSPIN_DISPATCH.Clock", clock, 0x0, 0x0, false, 0xe386114a9da2b6fa)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const struct ndis::ksallocator_dispatch_t*), "_KSPIN_DISPATCH.Allocator", allocator, 0x0, 0x0, false, 0x81d16a571d57055c)
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
#endif