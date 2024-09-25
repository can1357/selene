#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_CONTEXTINFO.DmaBufferSize", dma_buffer_size, 0x0, 0x20, true, 0x3ada65edac55ba97)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_CONTEXTINFO.DmaBufferSegmentSet", dma_buffer_segment_set, 0x20, 0x20, true, 0xf792cb8469895e81)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_CONTEXTINFO.DmaBufferPrivateDataSize", dma_buffer_private_data_size, 0x40, 0x20, true, 0x9ecc50365222570)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_CONTEXTINFO.AllocationListSize", allocation_list_size, 0x60, 0x20, true, 0x8247302de837808d)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_CONTEXTINFO.PatchLocationListSize", patch_location_list_size, 0x80, 0x20, true, 0x5cfd3b534fcb661b)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dxgk::contextinfo_caps_t), "_DXGK_CONTEXTINFO.Caps", caps, 0xc0, 0x20, true, 0x11e3acdef8ded63a)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_CONTEXTINFO.PagingCompanionNodeId", paging_companion_node_id, 0xe0, 0x20, true, 0x60b83683ee93bf87)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif