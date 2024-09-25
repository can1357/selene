#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_DXGKARG_CREATEPROTECTEDSESSION.hProtectedSession", h_protected_session, 0x0, 0x40, true, 0x17a5bd08f7dd84c8)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_DXGKARG_CREATEPROTECTEDSESSION.pPrivateDriverData", p_private_driver_data, 0x40, 0x40, true, 0xeff5627ca4afd9e8)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_CREATEPROTECTEDSESSION.PrivateDriverDataSize", private_driver_data_size, 0x80, 0x20, true, 0xa76797606738009b)
#else
#define _m00
#define _m01
#define _m02
#endif