#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_wireSAFEARRAY.cDims", c_dims, 0x0, 0x10, true, 0x8a50bf5d0968501c)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_wireSAFEARRAY.fFeatures", f_features, 0x10, 0x10, true, 0x5253fe0fc475d974)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_wireSAFEARRAY.cbElements", cb_elements, 0x20, 0x20, true, 0x6e9e4909a55988f3)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_wireSAFEARRAY.cLocks", c_locks, 0x40, 0x20, true, 0xb8924e6e43586c7)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::wire_safearray_union_t), "_wireSAFEARRAY.uArrayStructs", u_array_structs, 0x80, 0x40, true, 0xb8d471d00a298989)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct tag::safearraybound_t, 1>), "_wireSAFEARRAY.rgsabound", rgsabound, 0x1c0, 0x40, true, 0x19739e2a31905926)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif