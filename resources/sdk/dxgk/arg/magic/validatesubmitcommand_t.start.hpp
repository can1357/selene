#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_DXGKARG_VALIDATESUBMITCOMMAND.Commands", commands, 0x0, 0x40, true, 0x938f65b19b5a879c)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_VALIDATESUBMITCOMMAND.CommandLength", command_length, 0x40, 0x20, true, 0x41aff6fc97a89817)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dxgk::validatesubmitcommandflags_t), "_DXGKARG_VALIDATESUBMITCOMMAND.Flags", flags, 0x60, 0x20, true, 0xf6f5edb17e667d85)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_VALIDATESUBMITCOMMAND.ContextCount", context_count, 0x80, 0x20, true, 0x567d750a83cff828)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<void*, 64>), "_DXGKARG_VALIDATESUBMITCOMMAND.Context", context, 0xc0, 0x0, true, 0xd927287b5f7d5366)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_DXGKARG_VALIDATESUBMITCOMMAND.pPrivateDriverData", p_private_driver_data, 0x10c0, 0x40, true, 0x7df923de0c5b4e77)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_VALIDATESUBMITCOMMAND.PrivateDriverDataSize", private_driver_data_size, 0x1100, 0x20, true, 0xc986d398e6c9fe9f)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_VALIDATESUBMITCOMMAND.UmdPrivateDataSize", umd_private_data_size, 0x1120, 0x20, true, 0xfa790f8e6196e5a5)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_DXGKARG_VALIDATESUBMITCOMMAND.HwQueueProgressFenceId", hw_queue_progress_fence_id, 0x1140, 0x40, true, 0x97560b2ac55c6054)
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