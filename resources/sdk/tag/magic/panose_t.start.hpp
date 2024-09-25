#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "tagPANOSE.bFamilyType", b_family_type, 0x0, 0x8, true, 0xd0b1aa91f511363a)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "tagPANOSE.bSerifStyle", b_serif_style, 0x8, 0x8, true, 0x99c34ec90599f517)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "tagPANOSE.bWeight", b_weight, 0x10, 0x8, true, 0x11a00de45eb42971)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "tagPANOSE.bProportion", b_proportion, 0x18, 0x8, true, 0xd27639dc25ea0fb2)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "tagPANOSE.bContrast", b_contrast, 0x20, 0x8, true, 0xb07853ee96ae758a)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "tagPANOSE.bStrokeVariation", b_stroke_variation, 0x28, 0x8, true, 0xc5e2796acabd18e0)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "tagPANOSE.bArmStyle", b_arm_style, 0x30, 0x8, true, 0x3a5ad895a61ecc68)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "tagPANOSE.bLetterform", b_letterform, 0x38, 0x8, true, 0x940b86562164ec15)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "tagPANOSE.bMidline", b_midline, 0x40, 0x8, true, 0x2f2b90fa3bbd0d59)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "tagPANOSE.bXHeight", b_x_height, 0x48, 0x8, true, 0xee53d01757237253)
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