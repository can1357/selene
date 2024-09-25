#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "KSMETHOD_ITEM.MethodId", method_id, 0x0, 0x0, false, 0x5b1e8ff4af91c645)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct nt::irp_t*, struct ndis::ksidentifier_t*, void*)>*), "KSMETHOD_ITEM.MethodHandler", method_handler, 0x0, 0x0, false, 0xb12f6eb0b73bfbf2)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "KSMETHOD_ITEM.MethodSupported", method_supported, 0x0, 0x0, false, 0x5959821650a11c1a)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "KSMETHOD_ITEM.MinMethod", min_method, 0x0, 0x0, false, 0x495b754bec561832)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "KSMETHOD_ITEM.MinData", min_data, 0x0, 0x0, false, 0x4de358d605e30361)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct nt::irp_t*, struct ndis::ksidentifier_t*, void*)>*), "KSMETHOD_ITEM.SupportHandler", support_handler, 0x0, 0x0, false, 0x4c43f88b37a0ab86)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "KSMETHOD_ITEM.Flags", flags, 0x0, 0x0, false, 0x611cec39d0acb70a)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif