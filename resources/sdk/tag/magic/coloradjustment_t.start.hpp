#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "tagCOLORADJUSTMENT.caSize", ca_size, 0x0, 0x10, true, 0x25284c4c8d8303db)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "tagCOLORADJUSTMENT.caFlags", ca_flags, 0x10, 0x10, true, 0x6aeb393cb618f6b1)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "tagCOLORADJUSTMENT.caIlluminantIndex", ca_illuminant_index, 0x20, 0x10, true, 0x487f4d6ed99a75a7)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "tagCOLORADJUSTMENT.caRedGamma", ca_red_gamma, 0x30, 0x10, true, 0x4fa6b4d2fda2bc7b)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "tagCOLORADJUSTMENT.caGreenGamma", ca_green_gamma, 0x40, 0x10, true, 0xc91da27d98fb4064)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "tagCOLORADJUSTMENT.caBlueGamma", ca_blue_gamma, 0x50, 0x10, true, 0x80084e5583b0307)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "tagCOLORADJUSTMENT.caReferenceBlack", ca_reference_black, 0x60, 0x10, true, 0x4eb34ab059ca1365)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "tagCOLORADJUSTMENT.caReferenceWhite", ca_reference_white, 0x70, 0x10, true, 0x4fb175bfc12348f4)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int16_t), "tagCOLORADJUSTMENT.caContrast", ca_contrast, 0x80, 0x10, true, 0xd91aaf295390f81a)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int16_t), "tagCOLORADJUSTMENT.caBrightness", ca_brightness, 0x90, 0x10, true, 0x33246712a2d46bc6)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int16_t), "tagCOLORADJUSTMENT.caColorfulness", ca_colorfulness, 0xa0, 0x10, true, 0x423f084e64987300)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int16_t), "tagCOLORADJUSTMENT.caRedGreenTint", ca_red_green_tint, 0xb0, 0x10, true, 0xdbb5cd248694aaa5)
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