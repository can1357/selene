#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct tag::ciexyz_t), "tagICEXYZTRIPLE.ciexyzRed", ciexyz_red, 0x0, 0x60, true, 0x2028e7fd7fdf3079)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct tag::ciexyz_t), "tagICEXYZTRIPLE.ciexyzGreen", ciexyz_green, 0x60, 0x60, true, 0xc2ba4c9eedea7d35)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct tag::ciexyz_t), "tagICEXYZTRIPLE.ciexyzBlue", ciexyz_blue, 0xc0, 0x60, true, 0x36f2714603a5a18f)
#else
#define _m00
#define _m01
#define _m02
#endif