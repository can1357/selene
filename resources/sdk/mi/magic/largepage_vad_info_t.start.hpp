#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_MI_LARGEPAGE_VAD_INFO.LargeImageBias", large_image_bias, 0x0, 0x8, true, 0xd3ac7963f8d0f8f1)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MI_LARGEPAGE_VAD_INFO.ActualImageViewSize", actual_image_view_size, 0x40, 0x40, true, 0xdcad86d8fe416a8e)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::epartition_t*), "_MI_LARGEPAGE_VAD_INFO.ReferencedPartition", referenced_partition, 0x80, 0x40, true, 0x69d2b56c6365f0a4)
#else
#define _m00
#define _m01
#define _m02
#endif