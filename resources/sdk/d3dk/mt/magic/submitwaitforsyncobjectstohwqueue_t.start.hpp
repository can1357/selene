#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_SUBMITWAITFORSYNCOBJECTSTOHWQUEUE.hHwQueue", h_hw_queue, 0x0, 0x20, true, 0x4b1ca386f41f3301)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_SUBMITWAITFORSYNCOBJECTSTOHWQUEUE.ObjectCount", object_count, 0x20, 0x20, true, 0xf3dd385459548150)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(const uint32_t*), "_D3DKMT_SUBMITWAITFORSYNCOBJECTSTOHWQUEUE.ObjectHandleArray", object_handle_array, 0x40, 0x40, true, 0xd3c7fc7bf569b685)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(const uint64_t*), "_D3DKMT_SUBMITWAITFORSYNCOBJECTSTOHWQUEUE.FenceValueArray", fence_value_array, 0x80, 0x40, true, 0x6279729f43815393)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif