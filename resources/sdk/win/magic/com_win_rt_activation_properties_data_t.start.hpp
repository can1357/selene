#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::win_rt_activation_properties_data_t), "ComWinRTActivationPropertiesData.winrtActivationPropertiesData", winrt_activation_properties_data, 0x0, 0x80, true, 0x91475d5eb13ad5df)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::user_context_properties_data_t), "ComWinRTActivationPropertiesData.userContextPropertiesData", user_context_properties_data, 0x80, 0x40, true, 0x246e0dd77e36f1b6)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::blob_t*), "ComWinRTActivationPropertiesData.rtbProcessMitigationPolcyBlob", rtb_process_mitigation_polcy_blob, 0xc0, 0x40, true, 0x2c94ff342405df0b)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::containerversion_t), "ComWinRTActivationPropertiesData.negotiatedContainerVersion", negotiated_container_version, 0x100, 0xc0, true, 0x955517b8d37a877f)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif