#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_QUERYPROCESSOFFERINFO.cbSize", cb_size, 0x0, 0x20, true, 0xd9416332a6c3a361)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_D3DKMT_QUERYPROCESSOFFERINFO.hProcess", h_process, 0x40, 0x40, true, 0x1612e246b5da2958)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_D3DKMT_QUERYPROCESSOFFERINFO.DecommitUniqueness", decommit_uniqueness, 0x80, 0x40, true, 0xb592a2f99e29cc83)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_D3DKMT_QUERYPROCESSOFFERINFO.DecommittableBytes", decommittable_bytes, 0xc0, 0x40, true, 0x5c6fb8792855d0db)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif