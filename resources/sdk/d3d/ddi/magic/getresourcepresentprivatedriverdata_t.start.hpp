#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DDDI_GETRESOURCEPRESENTPRIVATEDRIVERDATA.hResource", h_resource, 0x0, 0x20, true, 0xb7bf871b3332d7a7)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DDDI_GETRESOURCEPRESENTPRIVATEDRIVERDATA.PrivateDriverDataSize", private_driver_data_size, 0x20, 0x20, true, 0x7b4fc30a8ef0f559)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_D3DDDI_GETRESOURCEPRESENTPRIVATEDRIVERDATA.pPrivateDriverData", p_private_driver_data, 0x40, 0x40, true, 0x4abe6a38fa3a8b89)
#else
#define _m00
#define _m01
#define _m02
#endif