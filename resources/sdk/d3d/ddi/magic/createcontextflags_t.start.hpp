#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DDDI_CREATECONTEXTFLAGS.NullRendering", null_rendering, 0x0, 0x1, true, 0xf091820b1c39405, 1, uint32_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DDDI_CREATECONTEXTFLAGS.InitialData", initial_data, 0x1, 0x1, true, 0xab0bbd1263b132b6, 1, uint32_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DDDI_CREATECONTEXTFLAGS.DisableGpuTimeout", disable_gpu_timeout, 0x2, 0x1, true, 0x7be86887f20d8718, 1, uint32_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DDDI_CREATECONTEXTFLAGS.SynchronizationOnly", synchronization_only, 0x3, 0x1, true, 0x61cd7b66565af789, 1, uint32_t)
#define _m04 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DDDI_CREATECONTEXTFLAGS.HwQueueSupported", hw_queue_supported, 0x4, 0x1, true, 0x6b0cafe1a2f702fc, 1, uint32_t)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DDDI_CREATECONTEXTFLAGS.Value", value, 0x0, 0x20, true, 0xb10e8ce1d9a5684f)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif