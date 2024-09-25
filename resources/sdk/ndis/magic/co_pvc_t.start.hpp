#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_CO_PVC.NdisAfHandle", ndis_af_handle, 0x0, 0x40, true, 0x70737ed6b2bb7730)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::co_specific_parameters_t), "_CO_PVC.PvcParameters", pvc_parameters, 0x40, 0x60, true, 0xf3dbd33cade8dd98)
#else
#define _m00
#define _m01
#endif