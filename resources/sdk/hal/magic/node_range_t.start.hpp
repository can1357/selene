#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_HAL_NODE_RANGE.PageFrameIndex", page_frame_index, 0x0, 0x40, true, 0xc9bde4be424ae060)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HAL_NODE_RANGE.Node", node, 0x40, 0x20, true, 0xda5ddee202032783)
#else
#define _m00
#define _m01
#endif