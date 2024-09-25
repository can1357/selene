#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_DXGKARG_COLLECTDIAGNOSTICINFO.hAdapter", h_adapter, 0x0, 0x40, true, 0xf55b54f02d8ec14b)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum dxgk::diagnosticinfo_type_t), "_DXGKARG_COLLECTDIAGNOSTICINFO.Type", type, 0x40, 0x20, true, 0x303d5582662032b8)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<char, 64>), "_DXGKARG_COLLECTDIAGNOSTICINFO.BucketingString", bucketing_string, 0x60, 0x0, true, 0x3874804de0fcbaba)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<char, 128>), "_DXGKARG_COLLECTDIAGNOSTICINFO.DescriptionString", description_string, 0x260, 0x0, true, 0xf36351d834e9e8c1)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_DXGKARG_COLLECTDIAGNOSTICINFO.pReserved", p_reserved, 0x680, 0x40, true, 0x6ef7cf2c3673e074)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_COLLECTDIAGNOSTICINFO.BufferSizeIn", buffer_size_in, 0x6c0, 0x20, true, 0x3ff4775287f530d9)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_COLLECTDIAGNOSTICINFO.BufferSizeOut", buffer_size_out, 0x6e0, 0x20, true, 0x457a0996e63a95f4)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_DXGKARG_COLLECTDIAGNOSTICINFO.pBuffer", p_buffer, 0x700, 0x40, true, 0xd9da3d3f5964ca78)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#endif