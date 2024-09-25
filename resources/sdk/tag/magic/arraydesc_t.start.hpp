#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::typedesc_t), "tagARRAYDESC.tdescElem", tdesc_elem, 0x0, 0x80, true, 0x5bf314eb91828724)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "tagARRAYDESC.cDims", c_dims, 0x80, 0x10, true, 0x942bea0be54cd169)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct tag::safearraybound_t, 1>), "tagARRAYDESC.rgbounds", rgbounds, 0xa0, 0x40, true, 0xb6d133bbd38134d5)
#else
#define _m00
#define _m01
#define _m02
#endif