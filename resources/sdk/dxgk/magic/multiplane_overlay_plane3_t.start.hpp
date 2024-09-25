#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_MULTIPLANE_OVERLAY_PLANE3.LayerIndex", layer_index, 0x0, 0x20, true, 0x6c2de52245ca076e)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_DXGK_MULTIPLANE_OVERLAY_PLANE3.PresentId", present_id, 0x40, 0x40, true, 0x543e27d9480a1cdd)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dxgk::plane_specific_input_flags_t), "_DXGK_MULTIPLANE_OVERLAY_PLANE3.InputFlags", input_flags, 0x80, 0x20, true, 0xefb9ae565cc5a047)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dxgk::plane_specific_output_flags_t), "_DXGK_MULTIPLANE_OVERLAY_PLANE3.OutputFlags", output_flags, 0xa0, 0x20, true, 0x6331afafee6130c5)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_MULTIPLANE_OVERLAY_PLANE3.MaxImmediateFlipLine", max_immediate_flip_line, 0xc0, 0x20, true, 0x9798ef098640b209)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_MULTIPLANE_OVERLAY_PLANE3.ContextCount", context_count, 0xe0, 0x20, true, 0x1923cd8244ead78e)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dxgk::primarycontextdata_t**), "_DXGK_MULTIPLANE_OVERLAY_PLANE3.ppContextData", pp_context_data, 0x100, 0x40, true, 0xaef0c355090b2884)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_MULTIPLANE_OVERLAY_PLANE3.DriverPrivateDataSize", driver_private_data_size, 0x140, 0x20, true, 0xa958af826a916139)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_DXGK_MULTIPLANE_OVERLAY_PLANE3.pDriverPrivateData", p_driver_private_data, 0x180, 0x40, true, 0x399d801ea492c6d1)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dxgk::multiplane_overlay_attributes3_t), "_DXGK_MULTIPLANE_OVERLAY_PLANE3.PlaneAttributes", plane_attributes, 0x1c0, 0xc0, true, 0x81169d50159bd232)
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
#endif