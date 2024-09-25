#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_PRESENT_REDIRECTED.hSyncObj", h_sync_obj, 0x0, 0x20, true, 0xfdb06c30eab9c23c)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_PRESENT_REDIRECTED.hDevice", h_device, 0x20, 0x20, true, 0xde36d5b3e4a82559)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_D3DKMT_PRESENT_REDIRECTED.WaitedFenceValue", waited_fence_value, 0x40, 0x40, true, 0x34d7e78db0ff641a)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct d3dk::mt::presenthistorytoken_t), "_D3DKMT_PRESENT_REDIRECTED.PresentHistoryToken", present_history_token, 0x80, 0xc0, true, 0xb6c7c24dec5814e7)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct d3dk::mt::present_redirecteds_flags_t), "_D3DKMT_PRESENT_REDIRECTED.Flags", flags, 0x2240, 0x20, true, 0xd37c720cc3270b04)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_PRESENT_REDIRECTED.hSource", h_source, 0x2260, 0x20, true, 0x624ae6327f2ed45e)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_PRESENT_REDIRECTED.PrivateDriverDataSize", private_driver_data_size, 0x2280, 0x20, true, 0x51f1298e4ffb8fa9)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_D3DKMT_PRESENT_REDIRECTED.pPrivateDriverData", p_private_driver_data, 0x22c0, 0x40, true, 0xe55a8e62e20b1684)
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