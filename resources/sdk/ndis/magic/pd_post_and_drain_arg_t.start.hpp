#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::pd_buffer_t*), "_NDIS_PD_POST_AND_DRAIN_ARG.PostBufferListHead", post_buffer_list_head, 0x0, 0x40, true, 0x622ad571eb264684)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::pd_buffer_t**), "_NDIS_PD_POST_AND_DRAIN_ARG.DrainBufferListTail", drain_buffer_list_tail, 0x40, 0x40, true, 0xab2f50b522681105)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_PD_POST_AND_DRAIN_ARG.MaxDrainCount", max_drain_count, 0x80, 0x20, true, 0x768d3aa2593608d9)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_PD_POST_AND_DRAIN_ARG.DrainCount", drain_count, 0xa0, 0x20, true, 0x6d027813f067f52d)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_PD_POST_AND_DRAIN_ARG.PostCount", post_count, 0xc0, 0x20, true, 0x3bf0497b7ea978ae)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDIS_PD_POST_AND_DRAIN_ARG.QueueDepthThresholdReached", queue_depth_threshold_reached, 0xe0, 0x8, true, 0x55cec3d16cdc1857)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif