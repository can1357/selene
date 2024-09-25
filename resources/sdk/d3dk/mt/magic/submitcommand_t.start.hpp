#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_D3DKMT_SUBMITCOMMAND.Commands", commands, 0x0, 0x40, true, 0x62d8bcfa5ef18277)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_SUBMITCOMMAND.CommandLength", command_length, 0x40, 0x20, true, 0x5d1711c3edf7769b)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct d3dk::mt::submitcommandflags_t), "_D3DKMT_SUBMITCOMMAND.Flags", flags, 0x60, 0x20, true, 0x291d0137b7c780ee)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_D3DKMT_SUBMITCOMMAND.PresentHistoryToken", present_history_token, 0x80, 0x40, true, 0x2eba061399156a89)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_SUBMITCOMMAND.BroadcastContextCount", broadcast_context_count, 0xc0, 0x20, true, 0x65cb2914bea2c42a)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 64>), "_D3DKMT_SUBMITCOMMAND.BroadcastContext", broadcast_context, 0xe0, 0x0, true, 0xe468ed7951542fa3)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_D3DKMT_SUBMITCOMMAND.pPrivateDriverData", p_private_driver_data, 0x900, 0x40, true, 0x6d45f2afa38908dc)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_SUBMITCOMMAND.PrivateDriverDataSize", private_driver_data_size, 0x940, 0x20, true, 0x1db86202f682e2e0)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_SUBMITCOMMAND.NumPrimaries", num_primaries, 0x960, 0x20, true, 0x11b72f935553b2b5)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 16>), "_D3DKMT_SUBMITCOMMAND.WrittenPrimaries", written_primaries, 0x980, 0x0, true, 0x4d5d086da713e593)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_SUBMITCOMMAND.NumHistoryBuffers", num_history_buffers, 0xb80, 0x20, true, 0xb943e096b7abad1)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t*), "_D3DKMT_SUBMITCOMMAND.HistoryBufferArray", history_buffer_array, 0xbc0, 0x40, true, 0x8b95a9aa2c78216b)
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
#define _m09
#define _m10
#define _m11
#endif