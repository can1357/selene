#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "_NCryptAlgorithmName.pszName", psz_name, 0x0, 0x40, true, 0xb756ab9bae0544d0)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NCryptAlgorithmName.dwClass", dw_class, 0x40, 0x20, true, 0xf6e467f135c7aef2)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NCryptAlgorithmName.dwAlgOperations", dw_alg_operations, 0x60, 0x20, true, 0xa8974d92b78cbe7e)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NCryptAlgorithmName.dwFlags", dw_flags, 0x80, 0x20, true, 0x1d682f897c9a8d56)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif