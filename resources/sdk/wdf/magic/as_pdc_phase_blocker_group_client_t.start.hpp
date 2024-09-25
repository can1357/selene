#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_AsPdcPhaseBlockerGroupClient.BlockerGroupSignature", blocker_group_signature, 0x0, 0x0, false, 0x3a50b3bda232d5aa)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_AsPdcPhaseBlockerGroupClient.BlockerGroupDesc", blocker_group_desc, 0x0, 0x0, false, 0xdbe60cec043fb95d)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_AsPdcPhaseBlockerGroupClient.ClientId", client_id, 0x0, 0x0, false, 0xb59d0b4a0a3263b)
#else
#define _m00
#define _m01
#define _m02
#endif