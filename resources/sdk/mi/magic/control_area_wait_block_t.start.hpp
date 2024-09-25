#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct mi::control_area_wait_block_t*), "_MI_CONTROL_AREA_WAIT_BLOCK.Next", next, 0x0, 0x40, true, 0x9c294f4efb70f2de)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MI_CONTROL_AREA_WAIT_BLOCK.WaitReason", wait_reason, 0x40, 0x20, true, 0x737c1e2f721fdec9)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MI_CONTROL_AREA_WAIT_BLOCK.WaitResponse", wait_response, 0x60, 0x20, true, 0xdae02878ae6d3e64)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kgate_t), "_MI_CONTROL_AREA_WAIT_BLOCK.Gate", gate, 0x80, 0xc0, true, 0xd289494d7472a4f2)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif