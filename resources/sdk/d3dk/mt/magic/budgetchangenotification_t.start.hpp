#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_D3DKMT_BUDGETCHANGENOTIFICATION.Context", context, 0x0, 0x40, true, 0xef106060c0770834)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_D3DKMT_BUDGETCHANGENOTIFICATION.Budget", budget, 0x40, 0x40, true, 0xf1f947097ab3283)
#else
#define _m00
#define _m01
#endif