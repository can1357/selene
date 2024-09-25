#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_NDIS_FRAME_TYPE_AND_OPEN.Type", type, 0x0, 0x10, true, 0xd81e98f41e1b91b7)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::open_block_t*), "_NDIS_FRAME_TYPE_AND_OPEN.Open", open, 0x40, 0x40, true, 0xd710ea11bc70b98)
#else
#define _m00
#define _m01
#endif