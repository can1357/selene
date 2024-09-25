#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct mi::extent_deletion_wait_block_t*), "_MI_EXTENT_DELETION_WAIT_BLOCK.Next", next, 0x0, 0x40, true, 0x3464d5ab2df0bcd8)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kgate_t), "_MI_EXTENT_DELETION_WAIT_BLOCK.Gate", gate, 0x40, 0xc0, true, 0x6554ad95654c7fde)
#else
#define _m00
#define _m01
#endif