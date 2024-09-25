#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "tagSOAP_ACTIVATION_INFO.bSoapActivated", b_soap_activated, 0x0, 0x20, true, 0x2dd2404ad288fb2)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "tagSOAP_ACTIVATION_INFO.lMode", l_mode, 0x20, 0x20, true, 0x368d774fda277275)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "tagSOAP_ACTIVATION_INFO.bstrVRoot", bstr_v_root, 0x40, 0x40, true, 0x8fd66ff8a0a03567)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "tagSOAP_ACTIVATION_INFO.bstrMailTo", bstr_mail_to, 0x80, 0x40, true, 0x344ed5b23cfc6dca)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "tagSOAP_ACTIVATION_INFO.bstrAssemblyName", bstr_assembly_name, 0xc0, 0x40, true, 0x5a1e7a74e344f810)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "tagSOAP_ACTIVATION_INFO.bstrTypeName", bstr_type_name, 0x100, 0x40, true, 0xb7cfc57be02379e)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "tagSOAP_ACTIVATION_INFO.bstrBaseUrl", bstr_base_url, 0x140, 0x40, true, 0x81f09646f3482e38)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif