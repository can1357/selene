#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_NDIS_RSC_NBL_INFO.Info.CoalescedSegCount", coalesced_seg_count, 0x0, 0x10, true, 0xa09aa116362238f9)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_NDIS_RSC_NBL_INFO.Info.DupAckCount", dup_ack_count, 0x10, 0x10, true, 0xa9b4afb4c9ef9185)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_info_t), "_NDIS_RSC_NBL_INFO.Info", info, 0x0, 0x20, true, 0x54bd769289975396)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_NDIS_RSC_NBL_INFO.Value", value, 0x0, 0x40, true, 0xbe8e3d7f20ae63eb)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif