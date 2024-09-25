#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::ndk_request_parameters_t), "_NDIS_NDK_PARAMETERS.NdkRequest", ndk_request, 0x0, 0x40, true, 0x8f4293a649202834)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::ndk_response_parameters_t), "_NDIS_NDK_PARAMETERS.NdkResponse", ndk_response, 0x340, 0x0, true, 0x1ee4d1ead0b1d7ee)
#else
#define _m00
#define _m01
#endif