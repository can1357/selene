#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_MARKDEVICEASERROR.hDevice", h_device, 0x0, 0x20, true, 0x9996784129abbaa7)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum d3dk::mt::device_error_reason_t), "_D3DKMT_MARKDEVICEASERROR.Reason", reason, 0x20, 0x20, true, 0x72db99735340e276)
#else
#define _m00
#define _m01
#endif