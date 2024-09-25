#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_MIPI_DSI_PACKET.DataId", data_id, 0x0, 0x8, true, 0x75b329180fb63785)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint6_t), "_MIPI_DSI_PACKET.DataType", data_type, 0x0, 0x6, true, 0x2382c2dbaf52f72e, 6, uint8_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_MIPI_DSI_PACKET.VirtualChannel", virtual_channel, 0x6, 0x2, true, 0x31173c38e08f54b7, 2, uint8_t)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_MIPI_DSI_PACKET.Data0", data0, 0x10, 0x8, true, 0xaed70a1467ac1df5)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_MIPI_DSI_PACKET.Data1", data1, 0x18, 0x8, true, 0x2b9fa113c7d156c4)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_MIPI_DSI_PACKET.LongWriteWordCount", long_write_word_count, 0x10, 0x10, true, 0x658be1d2b25dec0)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_MIPI_DSI_PACKET.EccFiller", ecc_filler, 0x20, 0x8, true, 0x619f9a5e2d58034d)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 8>), "_MIPI_DSI_PACKET.Payload", payload, 0x28, 0x40, true, 0x9bcab2a4f1317ff6)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#endif