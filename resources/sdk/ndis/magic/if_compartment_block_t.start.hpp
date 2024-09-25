#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_NDIS_IF_COMPARTMENT_BLOCK.Link", link, 0x0, 0x0, false, 0xf4508b682bf7127a)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_IF_COMPARTMENT_BLOCK.CompartmentId", compartment_id, 0x0, 0x0, false, 0x94b218f43046a6d9)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_NDIS_IF_COMPARTMENT_BLOCK.NetworkLink", network_link, 0x0, 0x0, false, 0xdf779f5c137f2429)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_IF_COMPARTMENT_BLOCK.Flags", flags, 0x0, 0x0, false, 0x70b4235c32d47e11)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_NDIS_IF_COMPARTMENT_BLOCK.Ref", ref, 0x0, 0x0, false, 0x3347fb9e855c9d28)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_NDIS_IF_COMPARTMENT_BLOCK.UserRef", user_ref, 0x0, 0x0, false, 0x19ab006c45e8bc2c)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::if_network_block_t*), "_NDIS_IF_COMPARTMENT_BLOCK.LoopbackNetwork", loopback_network, 0x0, 0x0, false, 0x323d1bd3010e4d84)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::nsi_compartment_rw_t), "_NDIS_IF_COMPARTMENT_BLOCK.LoopbackInfo", loopback_info, 0x0, 0x0, false, 0x6f0ce02bee980873)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::if_block_t*), "_NDIS_IF_COMPARTMENT_BLOCK.LoopbackIf", loopback_if, 0x0, 0x0, false, 0x96191b091bef3276)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kevent_t*), "_NDIS_IF_COMPARTMENT_BLOCK.AsyncEvent", async_event, 0x0, 0x0, false, 0xfe6eb9b97baa6e38)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::ejob_t*), "_NDIS_IF_COMPARTMENT_BLOCK.JobObject", job_object, 0x0, 0x0, false, 0xddd9b00bd0b3b688)
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
#endif