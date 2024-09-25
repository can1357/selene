#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_RM_REVOKE_MESSAGE.RequestedAction", requested_action, 0x0, 0x8, true, 0x92d6361621234759)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_RM_REVOKE_MESSAGE.RevokeReason", revoke_reason, 0x8, 0x8, true, 0xcd1260844076e6c7)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_RM_REVOKE_MESSAGE.ExternalResourceType", external_resource_type, 0x10, 0x8, true, 0xf4b44967a19fa126)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RM_REVOKE_MESSAGE.All", all, 0x0, 0x20, true, 0x33f2601f9f1c4ba2)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif