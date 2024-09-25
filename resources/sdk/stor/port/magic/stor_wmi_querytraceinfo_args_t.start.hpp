#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_STOR_WMI_QUERYTRACEINFO_ARGS.TraceInformationClass", trace_information_class, 0x0, 0x20, true, 0x3477e4271dba6ff1)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_STOR_WMI_QUERYTRACEINFO_ARGS.TraceInformation", trace_information, 0x40, 0x40, true, 0x3ad4f0d8a067fcbc)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_STOR_WMI_QUERYTRACEINFO_ARGS.TraceInformationLength", trace_information_length, 0x80, 0x20, true, 0x60d526f65fc322ca)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t*), "_STOR_WMI_QUERYTRACEINFO_ARGS.RequiredLength", required_length, 0xc0, 0x40, true, 0x5c60d5a318ae494c)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_STOR_WMI_QUERYTRACEINFO_ARGS.Buffer", buffer, 0x100, 0x40, true, 0x9902e482514e9fd3)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_STOR_WMI_QUERYTRACEINFO_ARGS.result", result, 0x140, 0x20, true, 0x54f85ddc408cc03)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif