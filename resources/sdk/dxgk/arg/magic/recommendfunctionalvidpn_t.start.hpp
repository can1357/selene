#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_RECOMMENDFUNCTIONALVIDPN.NumberOfVidPnTargets", number_of_vid_pn_targets, 0x0, 0x20, true, 0x533353692ea3f4ad)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(const uint32_t*), "_DXGKARG_RECOMMENDFUNCTIONALVIDPN.pVidPnTargetPrioritizationVector", p_vid_pn_target_prioritization_vector, 0x40, 0x40, true, 0x5478099e8b0e29ae)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct d3dk::mdt::hvidpn_t*), "_DXGKARG_RECOMMENDFUNCTIONALVIDPN.hRecommendedFunctionalVidPn", h_recommended_functional_vid_pn, 0x80, 0x40, true, 0x38600c3347a74bd9)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum dxgk::recommendfunctionalvidpn_reason_t), "_DXGKARG_RECOMMENDFUNCTIONALVIDPN.RequestReason", request_reason, 0xc0, 0x20, true, 0x2156b717e4d847f6)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_DXGKARG_RECOMMENDFUNCTIONALVIDPN.pPrivateDriverData", p_private_driver_data, 0x100, 0x40, true, 0xff82aa16d8196626)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_RECOMMENDFUNCTIONALVIDPN.PrivateDriverDataSize", private_driver_data_size, 0x140, 0x20, true, 0x12734ad960b0e8a1)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif