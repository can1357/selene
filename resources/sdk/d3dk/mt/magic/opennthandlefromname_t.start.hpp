#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_OPENNTHANDLEFROMNAME.dwDesiredAccess", dw_desired_access, 0x0, 0x20, true, 0xdebbb13f339acc14)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::object_attributes_t*), "_D3DKMT_OPENNTHANDLEFROMNAME.pObjAttrib", p_obj_attrib, 0x40, 0x40, true, 0x903ee811d83ce077)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_D3DKMT_OPENNTHANDLEFROMNAME.hNtHandle", h_nt_handle, 0x80, 0x40, true, 0xb5367849d3c83975)
#else
#define _m00
#define _m01
#define _m02
#endif