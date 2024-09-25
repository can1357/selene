#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum nt::output_wire_color_space_type_t), "_COLORSPACE_TRANSFORM_SET_INPUT.OutputWireColorSpaceExpected", output_wire_color_space_expected, 0x0, 0x20, true, 0xfa40667bfa2ea361)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::output_wire_format_t), "_COLORSPACE_TRANSFORM_SET_INPUT.OutputWireFormatExpected", output_wire_format_expected, 0x20, 0x40, true, 0xba2bac5b08e5b710)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::colorspace_transform_t), "_COLORSPACE_TRANSFORM_SET_INPUT.ColorSpaceTransform", color_space_transform, 0x60, 0xa0, true, 0x698e7e2c396062ab)
#else
#define _m00
#define _m01
#define _m02
#endif