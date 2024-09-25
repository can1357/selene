#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_D3DKMT_TRIMNOTIFICATION.Context", context, 0x0, 0x40, true, 0x6c15a8ac2cef500a)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct d3d::ddi::trimresidencyset_flags_t), "_D3DKMT_TRIMNOTIFICATION.Flags", flags, 0x40, 0x20, true, 0x514fcf28576e92e9)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_D3DKMT_TRIMNOTIFICATION.NumBytesToTrim", num_bytes_to_trim, 0x80, 0x40, true, 0xca85cd2ff30e3008)
#else
#define _m00
#define _m01
#define _m02
#endif