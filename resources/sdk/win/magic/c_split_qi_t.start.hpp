#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct tag::m_interface_pointer_t*, 2>), "CSplit_QI.SomePMItfPtrs", some_pm_itf_ptrs, 0x0, 0x80, true, 0x48e52d18030ab381)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<sdk::hresult, 2>), "CSplit_QI.SomeHRs", some_h_rs, 0x80, 0x40, true, 0xdb0d6820c38e41ab)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct nt::guid_t, 2>), "CSplit_QI.SomeIIDs", some_ii_ds, 0xc0, 0x0, true, 0x32e708c22b8d1ab)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "CSplit_QI._dwCount", dw_count, 0x1c0, 0x20, true, 0x774212a8fff4f6f2)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(char*), "CSplit_QI._pAllocBlock", p_alloc_block, 0x200, 0x40, true, 0xe28118450db5cdf1)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::m_interface_pointer_t**), "CSplit_QI._pItfArray", p_itf_array, 0x240, 0x40, true, 0x7e90ed764234fd2d)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::hresult*), "CSplit_QI._pHrArray", p_hr_array, 0x280, 0x40, true, 0x9cb6871463328e1)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t*), "CSplit_QI._pIIDArray", p_iid_array, 0x2c0, 0x40, true, 0xf3d701cea87d11ad)
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