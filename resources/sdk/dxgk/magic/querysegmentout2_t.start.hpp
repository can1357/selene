#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_QUERYSEGMENTOUT2.SegmentCount", segment_count, 0x0, 0x20, true, 0xe011abb96417895f)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dxgk::segmentdescriptor2_t*), "_DXGK_QUERYSEGMENTOUT2.pSegmentDescriptor", p_segment_descriptor, 0x40, 0x40, true, 0xdf8937bdf5947254)
#else
#define _m00
#define _m01
#endif