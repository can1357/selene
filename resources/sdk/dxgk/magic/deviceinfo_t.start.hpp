#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_DEVICEINFO.DmaBufferSize", dma_buffer_size, 0x0, 0x20, true, 0x67d47daea0312cab)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_DEVICEINFO.DmaBufferSegmentSet", dma_buffer_segment_set, 0x20, 0x20, true, 0x745d4b0fe5b009cf)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_DEVICEINFO.DmaBufferPrivateDataSize", dma_buffer_private_data_size, 0x40, 0x20, true, 0xf7cab99da0d93ed9)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_DEVICEINFO.AllocationListSize", allocation_list_size, 0x60, 0x20, true, 0xcf7c4d09fc3887aa)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_DEVICEINFO.PatchLocationListSize", patch_location_list_size, 0x80, 0x20, true, 0xd29326e454c7b6f7)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dxgk::deviceinfoflags_t), "_DXGK_DEVICEINFO.Flags", flags, 0xa0, 0x20, true, 0xfbd39af9add1b06e)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif