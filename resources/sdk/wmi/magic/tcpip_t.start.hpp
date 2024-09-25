#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WMI_TCPIP.Context", context, 0x0, 0x20, true, 0x9858ee3f912fe070)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WMI_TCPIP.Size", size, 0x20, 0x20, true, 0xa2a437002954ef2a)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WMI_TCPIP.DestAddr", dest_addr, 0x40, 0x20, true, 0xbba82a3deb4f4947)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WMI_TCPIP.SrcAddr", src_addr, 0x60, 0x20, true, 0x74682390255a69ad)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_WMI_TCPIP.DestPort", dest_port, 0x80, 0x10, true, 0x972fb93a2b1d3074)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_WMI_TCPIP.SrcPort", src_port, 0x90, 0x10, true, 0xe81ecbc1b4bc1834)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif