#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RAID_IO_RESOURCES.QueueTag", queue_tag, 0x0, 0x20, true, 0xd0c2bda3ab781944)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_RAID_IO_RESOURCES.SrbExtension", srb_extension, 0x40, 0x40, true, 0x4219423734799dcb)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct stor::port::extended_request_block_t*), "_RAID_IO_RESOURCES.Xrb", xrb, 0x80, 0x40, true, 0xbb5fc0feff7e8031)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_RAID_IO_RESOURCES.SenseInfo", sense_info, 0xc0, 0x40, true, 0xd4d61d4288635ceb)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif