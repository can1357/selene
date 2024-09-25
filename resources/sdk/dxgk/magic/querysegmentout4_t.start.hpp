#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_QUERYSEGMENTOUT4.NbSegment", nb_segment, 0x0, 0x20, true, 0x271596e564437147)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t*), "_DXGK_QUERYSEGMENTOUT4.pSegmentDescriptor", p_segment_descriptor, 0x40, 0x40, true, 0x7f1f223ad37e0c5d)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_QUERYSEGMENTOUT4.PagingBufferSegmentId", paging_buffer_segment_id, 0x80, 0x20, true, 0xde7d050590b60ee5)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_QUERYSEGMENTOUT4.PagingBufferSize", paging_buffer_size, 0xa0, 0x20, true, 0x8cf98a08e9ff76c5)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_QUERYSEGMENTOUT4.PagingBufferPrivateDataSize", paging_buffer_private_data_size, 0xc0, 0x20, true, 0xf9fab0c13836c67f)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_DXGK_QUERYSEGMENTOUT4.SegmentDescriptorStride", segment_descriptor_stride, 0x100, 0x40, true, 0x617ffd571838af6b)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif