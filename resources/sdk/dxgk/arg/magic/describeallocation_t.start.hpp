#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_DXGKARG_DESCRIBEALLOCATION.hAllocation", h_allocation, 0x0, 0x40, true, 0xa5f43c7d04f078ca)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_DESCRIBEALLOCATION.Width", width, 0x40, 0x20, true, 0x5165b51be8f1982d)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_DESCRIBEALLOCATION.Height", height, 0x60, 0x20, true, 0x382153b3416dfd4a)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum kuser::d3dddiformat_t), "_DXGKARG_DESCRIBEALLOCATION.Format", format, 0x80, 0x20, true, 0x5e6db9ec7e630f3b)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct d3d::ddi::multisamplingmethod_t), "_DXGKARG_DESCRIBEALLOCATION.MultisampleMethod", multisample_method, 0xa0, 0x40, true, 0xe2dbae82fb77a8e)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct d3d::ddi::rational_t), "_DXGKARG_DESCRIBEALLOCATION.RefreshRate", refresh_rate, 0xe0, 0x40, true, 0x6217768e95ef31b1)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_DESCRIBEALLOCATION.PrivateDriverFormatAttribute", private_driver_format_attribute, 0x120, 0x20, true, 0xa91f5279c5873504)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dxgk::describeallocationflags_t), "_DXGKARG_DESCRIBEALLOCATION.Flags", flags, 0x140, 0x20, true, 0x8d79b2c911693696)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum d3d::ddi::rotation_t), "_DXGKARG_DESCRIBEALLOCATION.Rotation", rotation, 0x160, 0x20, true, 0x17760a010509e06b)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#endif