#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct tag::emr_t), "tagEMREXTCREATEFONTINDIRECTW.emr", emr, 0x0, 0x40, true, 0xf60f03d432311fe8)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "tagEMREXTCREATEFONTINDIRECTW.ihFont", ih_font, 0x40, 0x20, true, 0xc632bcde11f8c102)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct tag::extlogfontw_t), "tagEMREXTCREATEFONTINDIRECTW.elfw", elfw, 0x60, 0x0, true, 0x411376e74f9414c5)
#else
#define _m00
#define _m01
#define _m02
#endif