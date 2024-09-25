#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MI_PFN_ULONG5.EntireField", entire_field, 0x0, 0x0, false, 0x48249d84d2a0b003)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint21_t), "_MI_PFN_ULONG5.StandbyList.NodeBlinkHigh", node_blink_high, 0x0, 0x0, false, 0xcf6a4d67f95a03df, 21, uint32_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint11_t), "_MI_PFN_ULONG5.StandbyList.NodeFlinkMiddle", node_flink_middle, 0x0, 0x0, false, 0x94a2c96d003414cc, 11, uint32_t)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_standby_list_t), "_MI_PFN_ULONG5.StandbyList", standby_list, 0x0, 0x0, false, 0x8ed9e32f5cfef3f2)
#define _m04 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint4_t), "_MI_PFN_ULONG5.MappedPageList.ModifiedListBucketIndex", modified_list_bucket_index, 0x0, 0x0, false, 0xd6e3d522cd842eac, 4, uint8_t)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u1_mapped_page_list_t), "_MI_PFN_ULONG5.MappedPageList", mapped_page_list, 0x0, 0x0, false, 0xffbd5af2941d7276)
#define _m06 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_MI_PFN_ULONG5.Active.AnchorLargePageSize", anchor_large_page_size, 0x0, 0x0, false, 0x579b9047796d822a, 2, uint8_t)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u2_active_t), "_MI_PFN_ULONG5.Active", active, 0x0, 0x0, false, 0x7d4a521fdfe03441)
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