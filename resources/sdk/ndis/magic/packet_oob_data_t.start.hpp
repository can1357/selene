#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_NDIS_PACKET_OOB_DATA.TimeToSend", time_to_send, 0x0, 0x40, true, 0x6711c46b2df94f10)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_NDIS_PACKET_OOB_DATA.TimeSent", time_sent, 0x0, 0x40, true, 0xa16f374fb6123505)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_NDIS_PACKET_OOB_DATA.TimeReceived", time_received, 0x40, 0x40, true, 0x2715ce8d90dfe42d)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_PACKET_OOB_DATA.HeaderSize", header_size, 0x80, 0x20, true, 0x8fb7a58a797cff5d)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_PACKET_OOB_DATA.SizeMediaSpecificInfo", size_media_specific_info, 0xa0, 0x20, true, 0x83fcbf2ecc4630f8)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_NDIS_PACKET_OOB_DATA.MediaSpecificInformation", media_specific_information, 0xc0, 0x40, true, 0x8f1de61e9e97e197)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_NDIS_PACKET_OOB_DATA.Status", status, 0x100, 0x20, true, 0x86b8908bf8947b62)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif