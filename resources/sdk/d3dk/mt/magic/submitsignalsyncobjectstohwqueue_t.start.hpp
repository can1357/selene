#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::d3dddicb_signalflags_t), "_D3DKMT_SUBMITSIGNALSYNCOBJECTSTOHWQUEUE.Flags", flags, 0x0, 0x20, true, 0xfae0776894d83bba)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_SUBMITSIGNALSYNCOBJECTSTOHWQUEUE.BroadcastHwQueueCount", broadcast_hw_queue_count, 0x20, 0x20, true, 0x352c869f6d977496)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(const uint32_t*), "_D3DKMT_SUBMITSIGNALSYNCOBJECTSTOHWQUEUE.BroadcastHwQueueArray", broadcast_hw_queue_array, 0x40, 0x40, true, 0xec930740f6ce385f)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_SUBMITSIGNALSYNCOBJECTSTOHWQUEUE.ObjectCount", object_count, 0x80, 0x20, true, 0x9fb79e8aabdb4bfd)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(const uint32_t*), "_D3DKMT_SUBMITSIGNALSYNCOBJECTSTOHWQUEUE.ObjectHandleArray", object_handle_array, 0xc0, 0x40, true, 0xdee203c574d6ff4a)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(const uint64_t*), "_D3DKMT_SUBMITSIGNALSYNCOBJECTSTOHWQUEUE.FenceValueArray", fence_value_array, 0x100, 0x40, true, 0x168339198d57d10d)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif