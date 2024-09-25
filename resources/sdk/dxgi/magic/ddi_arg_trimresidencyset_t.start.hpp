#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_DXGI_DDI_ARG_TRIMRESIDENCYSET.hDevice", h_device, 0x0, 0x40, true, 0xf670d172bc1882b8)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct d3d::ddi::trimresidencyset_flags_t), "_DXGI_DDI_ARG_TRIMRESIDENCYSET.TrimFlags", trim_flags, 0x40, 0x20, true, 0xe12275ac473be096)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_DXGI_DDI_ARG_TRIMRESIDENCYSET.NumBytesToTrim", num_bytes_to_trim, 0x80, 0x40, true, 0xb40858eea2cc9f71)
#else
#define _m00
#define _m01
#define _m02
#endif