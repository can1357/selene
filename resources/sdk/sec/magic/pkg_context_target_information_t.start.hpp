#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SecPkgContext_TargetInformation.MarshalledTargetInfoLength", marshalled_target_info_length, 0x0, 0x20, true, 0x9da95732efa4a2b7)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t*), "_SecPkgContext_TargetInformation.MarshalledTargetInfo", marshalled_target_info, 0x40, 0x40, true, 0xc256ddd9f20db97e)
#else
#define _m00
#define _m01
#endif