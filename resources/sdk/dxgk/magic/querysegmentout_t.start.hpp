#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_QUERYSEGMENTOUT.NbSegment", nb_segment, 0x0, 0x20, true, 0xff37eb5cd1e66585)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dxgk::segmentdescriptor_t*), "_DXGK_QUERYSEGMENTOUT.pSegmentDescriptor", p_segment_descriptor, 0x40, 0x40, true, 0xef57b39e62bf7305)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_QUERYSEGMENTOUT.PagingBufferSegmentId", paging_buffer_segment_id, 0x80, 0x20, true, 0xdd3c4fdc682d7502)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_QUERYSEGMENTOUT.PagingBufferSize", paging_buffer_size, 0xa0, 0x20, true, 0x45d43a170e61f93)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_QUERYSEGMENTOUT.PagingBufferPrivateDataSize", paging_buffer_private_data_size, 0xc0, 0x20, true, 0x3a065979d94c8b9b)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif