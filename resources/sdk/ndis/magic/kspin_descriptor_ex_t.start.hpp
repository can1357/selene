#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const struct ndis::kspin_dispatch_t*), "_KSPIN_DESCRIPTOR_EX.Dispatch", dispatch, 0x0, 0x0, false, 0xa48cdebb8d67e19c)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const struct ndis::ksautomation_table_t*), "_KSPIN_DESCRIPTOR_EX.AutomationTable", automation_table, 0x0, 0x0, false, 0x91680db1764ba83a)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::kspin_descriptor_t), "_KSPIN_DESCRIPTOR_EX.PinDescriptor", pin_descriptor, 0x0, 0x0, false, 0x82b4185935803ef5)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KSPIN_DESCRIPTOR_EX.Flags", flags, 0x0, 0x0, false, 0xc0c9a78d73bcedca)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KSPIN_DESCRIPTOR_EX.InstancesPossible", instances_possible, 0x0, 0x0, false, 0x763c9fd9a1f08c23)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KSPIN_DESCRIPTOR_EX.InstancesNecessary", instances_necessary, 0x0, 0x0, false, 0x4a7595ddd9746d1a)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const struct ndis::ksallocator_framing_ex_t*), "_KSPIN_DESCRIPTOR_EX.AllocatorFraming", allocator_framing, 0x0, 0x0, false, 0x7475364727674a8)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, struct nt::irp_t*, struct ndis::ksp_pin_t*, union ndis::ksdataformat_t*, union ndis::ksdataformat_t*, uint32_t, void*, uint32_t*)>*), "_KSPIN_DESCRIPTOR_EX.IntersectHandler", intersect_handler, 0x0, 0x0, false, 0x8a9779bf82234f2a)
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