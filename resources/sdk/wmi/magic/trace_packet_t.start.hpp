#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_WMI_TRACE_PACKET.Size", size, 0x0, 0x10, true, 0x970de26837ab7cfd)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_WMI_TRACE_PACKET.HookId", hook_id, 0x10, 0x10, true, 0xddca852a186a6f9a)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WMI_TRACE_PACKET.Type", type, 0x10, 0x8, true, 0x99c2b025e9a7c84b)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WMI_TRACE_PACKET.Group", group, 0x18, 0x8, true, 0x3d9de0a7fec878c0)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif