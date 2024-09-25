#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_NODEMETADATA_FLAGS.ContextSchedulingSupported", context_scheduling_supported, 0x0, 0x1, true, 0xab66f5166b147bf2, 1, uint32_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_NODEMETADATA_FLAGS.RingBufferFenceRelease", ring_buffer_fence_release, 0x1, 0x1, true, 0xd7981798f65443a4, 1, uint32_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_NODEMETADATA_FLAGS.SupportTrackedWorkload", support_tracked_workload, 0x2, 0x1, true, 0x554f0c707add7b92, 1, uint32_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint16_t), "_DXGK_NODEMETADATA_FLAGS.MaxInFlightHwQueueBuffers", max_in_flight_hw_queue_buffers, 0x10, 0x10, true, 0x527a1a6519c60e92, 16, uint32_t)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_NODEMETADATA_FLAGS.Value", value, 0x0, 0x20, true, 0x60b21c000f6b8449)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif