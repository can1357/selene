#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HEAP_STOP_ON_TAG.HeapAndTagIndex", heap_and_tag_index, 0x0, 0x20, true, 0xa2b6a19ca492c5f9)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_HEAP_STOP_ON_TAG.TagIndex", tag_index, 0x0, 0x10, true, 0x82c6b50d0bc0bc1e)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_HEAP_STOP_ON_TAG.HeapIndex", heap_index, 0x10, 0x10, true, 0x8e3dd210b3475317)
#else
#define _m00
#define _m01
#define _m02
#endif