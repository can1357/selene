#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_DXGI_DDI_ARG_CHECKPRESENTDURATIONSUPPORT.hDevice", h_device, 0x0, 0x40, true, 0x4d0daa0bddb25343)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGI_DDI_ARG_CHECKPRESENTDURATIONSUPPORT.VidPnSourceId", vid_pn_source_id, 0x40, 0x20, true, 0x4262236ddf469cdc)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGI_DDI_ARG_CHECKPRESENTDURATIONSUPPORT.DesiredPresentDuration", desired_present_duration, 0x60, 0x20, true, 0x79e63ccb22160345)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGI_DDI_ARG_CHECKPRESENTDURATIONSUPPORT.ClosestSmallerDuration", closest_smaller_duration, 0x80, 0x20, true, 0x9a36696df0490500)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGI_DDI_ARG_CHECKPRESENTDURATIONSUPPORT.ClosestLargerDuration", closest_larger_duration, 0xa0, 0x20, true, 0x561d73c26be2cd3b)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif