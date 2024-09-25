#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum d3d::ddi::color_space_type_t), "_DXGK_INHERITED_TIMING_INFO.OutputColorSpace", output_color_space, 0x0, 0x20, true, 0xb86d9794edc413a9)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum d3d::ddi::output_wire_color_space_type_t), "_DXGK_INHERITED_TIMING_INFO.OutputWireColorSpace", output_wire_color_space, 0x0, 0x20, true, 0x804514c13682eab0)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(union d3dk::mdt::wire_format_and_preference_t), "_DXGK_INHERITED_TIMING_INFO.SelectedWireFormat", selected_wire_format, 0x20, 0x20, true, 0x20313fbeca11d69a)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXGK_INHERITED_TIMING_INFO.GlitchCause", glitch_cause, 0x40, 0x8, true, 0x6466373216f76c0c)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXGK_INHERITED_TIMING_INFO.GlitchEffect", glitch_effect, 0x48, 0x8, true, 0x76a1168ac89ef1c0)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXGK_INHERITED_TIMING_INFO.GlitchDuration", glitch_duration, 0x50, 0x8, true, 0xb06f9951cf21ca1)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_INHERITED_TIMING_INFO.DiagnosticInfo", diagnostic_info, 0x40, 0x20, true, 0x6039f2738bbf4d1f)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif