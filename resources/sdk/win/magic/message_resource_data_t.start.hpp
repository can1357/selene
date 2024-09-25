#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MESSAGE_RESOURCE_DATA.NumberOfBlocks", number_of_blocks, 0x0, 0x20, true, 0x3576cb320a983eae)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct win::message_resource_block_t, 1>), "_MESSAGE_RESOURCE_DATA.Blocks", blocks, 0x20, 0x60, true, 0xa0e313a5a4a6ce00)
#else
#define _m00
#define _m01
#endif