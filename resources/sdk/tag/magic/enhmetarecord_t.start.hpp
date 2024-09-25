#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "tagENHMETARECORD.iType", i_type, 0x0, 0x20, true, 0xf89138ce04eff046)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "tagENHMETARECORD.nSize", n_size, 0x20, 0x20, true, 0x964c56f17b72a712)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 1>), "tagENHMETARECORD.dParm", d_parm, 0x40, 0x20, true, 0x408f2d5ffb163df6)
#else
#define _m00
#define _m01
#define _m02
#endif