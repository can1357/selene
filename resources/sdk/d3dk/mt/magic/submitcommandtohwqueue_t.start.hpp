#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_SUBMITCOMMANDTOHWQUEUE.hHwQueue", h_hw_queue, 0x0, 0x20, true, 0x6fe54c4e07737ecf)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_D3DKMT_SUBMITCOMMANDTOHWQUEUE.HwQueueProgressFenceId", hw_queue_progress_fence_id, 0x40, 0x40, true, 0xe97b245cc6f20585)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_D3DKMT_SUBMITCOMMANDTOHWQUEUE.CommandBuffer", command_buffer, 0x80, 0x40, true, 0x2b5449d3cb3af915)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_SUBMITCOMMANDTOHWQUEUE.CommandLength", command_length, 0xc0, 0x20, true, 0xe78a2fe5561b83e6)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_SUBMITCOMMANDTOHWQUEUE.PrivateDriverDataSize", private_driver_data_size, 0xe0, 0x20, true, 0x961cf7e4a1aaa23b)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_D3DKMT_SUBMITCOMMANDTOHWQUEUE.pPrivateDriverData", p_private_driver_data, 0x100, 0x40, true, 0x76fd80fb679a52a3)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_SUBMITCOMMANDTOHWQUEUE.NumPrimaries", num_primaries, 0x140, 0x20, true, 0x85be7192d074c09c)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(const uint32_t*), "_D3DKMT_SUBMITCOMMANDTOHWQUEUE.WrittenPrimaries", written_primaries, 0x180, 0x40, true, 0xfb9bb6bf81672d94)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#endif