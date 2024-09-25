#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_NDK_RESULT_EX.Status", status, 0x0, 0x20, true, 0x13dac050083c2ef3)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDK_RESULT_EX.BytesTransferred", bytes_transferred, 0x20, 0x20, true, 0x326cc2b08aa0f26a)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_NDK_RESULT_EX.QPContext", qp_context, 0x40, 0x40, true, 0x656e6183417d1736)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_NDK_RESULT_EX.RequestContext", request_context, 0x80, 0x40, true, 0xf7cc14067b071f42)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum ndis::ndk_operation_type_t), "_NDK_RESULT_EX.Type", type, 0xc0, 0x20, true, 0x97c8a2100d52ce99)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_NDK_RESULT_EX.TypeSpecificCompletionOutput", type_specific_completion_output, 0x100, 0x40, true, 0xdbe2911bb0bedb00)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDK_RESULT_EX.ProviderErrorCode", provider_error_code, 0x0, 0x0, false, 0xc9849c3cf5bb083d)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif