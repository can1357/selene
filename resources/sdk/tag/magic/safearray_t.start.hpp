#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "tagSAFEARRAY.cDims", c_dims, 0x0, 0x10, true, 0x28d29006d6c710c9)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "tagSAFEARRAY.fFeatures", f_features, 0x10, 0x10, true, 0x84bba340e74f0548)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagSAFEARRAY.cbElements", cb_elements, 0x20, 0x20, true, 0x44587d941cf9a546)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagSAFEARRAY.cLocks", c_locks, 0x40, 0x20, true, 0x7ecdb7fd7347c70)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "tagSAFEARRAY.pvData", pv_data, 0x80, 0x40, true, 0xd2a5975921a7125)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct tag::safearraybound_t, 1>), "tagSAFEARRAY.rgsabound", rgsabound, 0xc0, 0x40, true, 0xced2bd28f91d1844)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif