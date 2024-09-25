#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_AsPdcPhaseBlockerGroup.BlockerGroupSignature", blocker_group_signature, 0x0, 0x0, false, 0x55d5c2f576462f72)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_AsPdcPhaseBlockerGroup.BlockerGroupDesc", blocker_group_desc, 0x0, 0x0, false, 0x48b31de5a80afd32)
#else
#define _m00
#define _m01
#endif