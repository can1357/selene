#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::c_std_marshal_t*), "StdDiscData.pStdMshl", p_std_mshl, 0x0, 0x40, true, 0xddea480bd2e583b4)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "StdDiscData.dwType", dw_type, 0x40, 0x20, true, 0xffa09160dfdedeef)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(bool), "StdDiscData.logEventIsActive", log_event_is_active, 0x60, 0x8, true, 0xab53d94726d01991)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::c_object_context_t*), "StdDiscData.explicitServerContext", explicit_server_context, 0x80, 0x40, true, 0x28460f5d145fbf8c)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif