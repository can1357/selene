#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_QUERYSEGMENTOUT3.NbSegment", nb_segment, 0x0, 0x20, true, 0x134037f084504858)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dxgk::segmentdescriptor3_t*), "_DXGK_QUERYSEGMENTOUT3.pSegmentDescriptor", p_segment_descriptor, 0x40, 0x40, true, 0x3387b02a4c83b886)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_QUERYSEGMENTOUT3.PagingBufferSegmentId", paging_buffer_segment_id, 0x80, 0x20, true, 0x78bf5d93c02675b3)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_QUERYSEGMENTOUT3.PagingBufferSize", paging_buffer_size, 0xa0, 0x20, true, 0xe33a1fed62fa0aff)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_QUERYSEGMENTOUT3.PagingBufferPrivateDataSize", paging_buffer_private_data_size, 0xc0, 0x20, true, 0xbe58a1775986420f)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif