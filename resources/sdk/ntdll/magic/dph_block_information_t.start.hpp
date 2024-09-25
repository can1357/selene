#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_DPH_BLOCK_INFORMATION.StartStamp", start_stamp, 0x0, 0x20, true, 0x574663232be0d2c3)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_DPH_BLOCK_INFORMATION.Heap", heap, 0x40, 0x40, true, 0xfe74760562796245)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_DPH_BLOCK_INFORMATION.RequestedSize", requested_size, 0x80, 0x40, true, 0x94f1db64a77afc6a)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_DPH_BLOCK_INFORMATION.ActualSize", actual_size, 0xc0, 0x40, true, 0xf968744138697610)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_DPH_BLOCK_INFORMATION.FreeQueue", free_queue, 0x100, 0x80, true, 0xc8cebcb8ac3bf44)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::slist_entry_t), "_DPH_BLOCK_INFORMATION.FreePushList", free_push_list, 0x100, 0x80, true, 0x122df4d836353e48)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_DPH_BLOCK_INFORMATION.TraceIndex", trace_index, 0x100, 0x10, true, 0x82bb7a56a2b9c83e)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_DPH_BLOCK_INFORMATION.StackTrace", stack_trace, 0x180, 0x40, true, 0x6f16e408c7449dc6)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_DPH_BLOCK_INFORMATION.EndStamp", end_stamp, 0x1e0, 0x20, true, 0x8045ea9b74fe7334)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#endif