#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "tagEMRFORMAT.dSignature", d_signature, 0x0, 0x20, true, 0x97a3750e47d112fa)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "tagEMRFORMAT.nVersion", n_version, 0x20, 0x20, true, 0x3d77869e07674934)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "tagEMRFORMAT.cbData", cb_data, 0x40, 0x20, true, 0xe8a7d7d2bea52527)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "tagEMRFORMAT.offData", off_data, 0x60, 0x20, true, 0x942a004298a92fa9)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif