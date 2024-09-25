#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_COLLECTDBGINFO_EXT.BucketingKey", bucketing_key, 0x0, 0x20, true, 0xa7b4245650f730ca)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_COLLECTDBGINFO_EXT.CurrentDmaBufferOffset", current_dma_buffer_offset, 0x20, 0x20, true, 0xa0d60eb2125f50f9)
#else
#define _m00
#define _m01
#endif