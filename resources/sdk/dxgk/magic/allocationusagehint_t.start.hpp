#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_ALLOCATIONUSAGEHINT.Version", version, 0x0, 0x20, true, 0x646750f835a474b8)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dxgk::allocationusageinfo1_t), "_DXGK_ALLOCATIONUSAGEHINT.v1", v1, 0x20, 0x20, true, 0xa8f379509b24c35c)
#else
#define _m00
#define _m01
#endif