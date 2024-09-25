#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_WAN_CO_INFO.MaxFrameSize", max_frame_size, 0x0, 0x20, true, 0xccca199fcd388d4e)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_WAN_CO_INFO.MaxSendWindow", max_send_window, 0x20, 0x20, true, 0x5a9bc75f3eed4d72)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_WAN_CO_INFO.FramingBits", framing_bits, 0x40, 0x20, true, 0x703c3fd9ae9b2079)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_WAN_CO_INFO.DesiredACCM", desired_accm, 0x60, 0x20, true, 0x3139871903b4bd47)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif