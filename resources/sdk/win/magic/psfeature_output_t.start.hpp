#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "_PSFEATURE_OUTPUT.bPageIndependent", b_page_independent, 0x0, 0x20, true, 0xe4a83a7c91ade9e8)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "_PSFEATURE_OUTPUT.bSetPageDevice", b_set_page_device, 0x20, 0x20, true, 0xb2474c53be1d3a55)
#else
#define _m00
#define _m01
#endif