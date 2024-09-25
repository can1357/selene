#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "ProcessToken._pSelfSid", p_self_sid, 0x0, 0x40, true, 0xa7d69a2f8f7cc1fa)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "ProcessToken._pPackageSid", p_package_sid, 0x80, 0x40, true, 0x62698707071915cf)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::hstring_t volatile*), "ProcessToken._stringSelfSid", string_self_sid, 0x40, 0x40, true, 0x26616d9430f8c4f9)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::hstring_t volatile*), "ProcessToken._stringPackageSid", string_package_sid, 0xc0, 0x40, true, 0x3667f59b3ecb7ece)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::hstring_t volatile*), "ProcessToken._packageMoniker", package_moniker, 0x100, 0x40, true, 0xb813ffd3d92d494a)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(bool), "ProcessToken._fHasPackageMonikerBeenChecked", f_has_package_moniker_been_checked, 0x140, 0x8, true, 0x97e6a0c65599fdf)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(bool), "ProcessToken._fHasPkgClaimBeenChecked", f_has_pkg_claim_been_checked, 0x260, 0x8, true, 0xb12be4db4e4b2b8b)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "ProcessToken._pkgFlags", pkg_flags, 0x280, 0x40, true, 0x213d1550ca50cd42)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "ProcessToken._sessionId", session_id, 0x2c0, 0x20, true, 0xfd5030e13af3a2c4)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "ProcessToken._pszSelfSid", psz_self_sid, 0x0, 0x0, false, 0xb2317a4a1ab5f28a)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "ProcessToken._pszPackageSid", psz_package_sid, 0x0, 0x0, false, 0xc7c44e5f647bbd36)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "ProcessToken._pszPackageMoniker", psz_package_moniker, 0x0, 0x0, false, 0x26c5cd622de86da5)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "ProcessToken._fHasPackageMoniker", f_has_package_moniker, 0x0, 0x0, false, 0x9f83698604f00072)
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
#define _m09
#define _m10
#define _m11
#define _m12
#endif