#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_tagDATAINFO.ulTotalSize", ul_total_size, 0x0, 0x20, true, 0x4692104faafcc8e0)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_tagDATAINFO.ulavrPacketSize", ulavr_packet_size, 0x20, 0x20, true, 0xe5bfe0854f82110f)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_tagDATAINFO.ulConnectSpeed", ul_connect_speed, 0x40, 0x20, true, 0x9adc832dd6439854)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_tagDATAINFO.ulProcessorSpeed", ul_processor_speed, 0x60, 0x20, true, 0x11704cf5bd674a89)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif