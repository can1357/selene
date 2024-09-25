#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_SET_TIMING_PATH_INFO.VidPnTargetId", vid_pn_target_id, 0x0, 0x20, true, 0x6846f16fc28640)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum d3d::ddi::color_space_type_t), "_DXGK_SET_TIMING_PATH_INFO.OutputColorSpace", output_color_space, 0x20, 0x20, true, 0xed51fc0aac55f8b)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum d3d::ddi::output_wire_color_space_type_t), "_DXGK_SET_TIMING_PATH_INFO.OutputWireColorSpace", output_wire_color_space, 0x20, 0x20, true, 0x464514f9af548f35)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(union d3dk::mdt::wire_format_and_preference_t), "_DXGK_SET_TIMING_PATH_INFO.SelectedWireFormat", selected_wire_format, 0x40, 0x20, true, 0xf2761b9396baa39)
#define _m04 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_DXGK_SET_TIMING_PATH_INFO.Input.VidPnPathUpdates", vid_pn_path_updates, 0x0, 0x2, true, 0xdaf1d4c21e9ae5af, 2, uint32_t)
#define _m05 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_SET_TIMING_PATH_INFO.Input.Active", active, 0x2, 0x1, true, 0x3a5168bf7be34e8c, 1, uint32_t)
#define _m06 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_SET_TIMING_PATH_INFO.Input.IgnoreConnectivity", ignore_connectivity, 0x3, 0x1, true, 0xbcc37eba363fb1b1, 1, uint32_t)
#define _m07 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_SET_TIMING_PATH_INFO.Input.PreserveInherited", preserve_inherited, 0x4, 0x1, true, 0xd6515643815f4c29, 1, uint32_t)
#define _m08 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_DXGK_SET_TIMING_PATH_INFO.Input.SyncLockGroup", sync_lock_group, 0x5, 0x3, true, 0x6ff7bb5b7bc61e3a, 3, uint32_t)
#define _m09 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint4_t), "_DXGK_SET_TIMING_PATH_INFO.Input.SyncLockStyle", sync_lock_style, 0x8, 0x4, true, 0xbcedf03c59ae306c, 4, uint32_t)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u0_input_t), "_DXGK_SET_TIMING_PATH_INFO.Input", input, 0x60, 0x20, true, 0x2ea3f8d6f31cdb6a)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_SET_TIMING_PATH_INFO.InputFlags", input_flags, 0x60, 0x20, true, 0xd858ab6bff5bbbcb)
#define _m12 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_SET_TIMING_PATH_INFO.Output.RecheckMPO", recheck_mpo, 0x0, 0x1, true, 0xf5fb3e3f93716fee, 1, uint32_t)
#define _m13 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u1_output_t), "_DXGK_SET_TIMING_PATH_INFO.Output", output, 0x80, 0x20, true, 0x9e51ee0206ac7aa8)
#define _m14 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_SET_TIMING_PATH_INFO.OutputFlags", output_flags, 0x80, 0x20, true, 0x685030c43f82cc5a)
#define _m15 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dxgk::connection_change_t), "_DXGK_SET_TIMING_PATH_INFO.TargetState", target_state, 0xc0, 0xc0, true, 0x542e6aee1f54b853)
#define _m16 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXGK_SET_TIMING_PATH_INFO.GlitchCause", glitch_cause, 0x180, 0x8, true, 0x3ab0f7c8b20459dc)
#define _m17 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXGK_SET_TIMING_PATH_INFO.GlitchEffect", glitch_effect, 0x188, 0x8, true, 0xf84a81e4967116cf)
#define _m18 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXGK_SET_TIMING_PATH_INFO.GlitchDuration", glitch_duration, 0x190, 0x8, true, 0xbfd13ee3cf51ffac)
#define _m19 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_SET_TIMING_PATH_INFO.DiagnosticInfo", diagnostic_info, 0x180, 0x20, true, 0xf02ba31f47a82f80)
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
#define _m12
#define _m13
#define _m14
#define _m15
#define _m16
#define _m17
#define _m18
#define _m19
#endif