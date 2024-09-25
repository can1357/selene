#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "tagEXCEPINFO.wCode", w_code, 0x0, 0x10, true, 0xa1978696b8d578e4)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "tagEXCEPINFO.wReserved", w_reserved, 0x10, 0x10, true, 0x5c41bc76bce77cd4)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "tagEXCEPINFO.bstrSource", bstr_source, 0x40, 0x40, true, 0x482e8619d7785ac0)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "tagEXCEPINFO.bstrDescription", bstr_description, 0x80, 0x40, true, 0xdf21cbf024e24855)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "tagEXCEPINFO.bstrHelpFile", bstr_help_file, 0xc0, 0x40, true, 0x5f128b84e2160f38)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagEXCEPINFO.dwHelpContext", dw_help_context, 0x100, 0x20, true, 0xca2e1cb8429cb500)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "tagEXCEPINFO.pvReserved", pv_reserved, 0x140, 0x40, true, 0x7324d78883c5b06a)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct tag::excepinfo_t*)>*), "tagEXCEPINFO.pfnDeferredFillIn", pfn_deferred_fill_in, 0x180, 0x40, true, 0xf631a5ecaab07644)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "tagEXCEPINFO.scode", scode, 0x1c0, 0x20, true, 0x3c36408ab2ff82ac)
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