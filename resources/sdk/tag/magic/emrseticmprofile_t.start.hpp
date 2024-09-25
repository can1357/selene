#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct tag::emr_t), "tagEMRSETICMPROFILE.emr", emr, 0x0, 0x40, true, 0x3a12a524500dfac1)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "tagEMRSETICMPROFILE.dwFlags", dw_flags, 0x40, 0x20, true, 0x59d6080b6e9304bc)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "tagEMRSETICMPROFILE.cbName", cb_name, 0x60, 0x20, true, 0x1f6f0edcbc332869)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "tagEMRSETICMPROFILE.cbData", cb_data, 0x80, 0x20, true, 0x749c9444d062fab0)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 1>), "tagEMRSETICMPROFILE.Data", data, 0xa0, 0x8, true, 0x3a11dc8c68f355cd)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif