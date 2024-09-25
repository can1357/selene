#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WMI_UDP.PID", pid, 0x0, 0x20, true, 0x4b983a1d31f69e3f)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_WMI_UDP.Size", size, 0x20, 0x10, true, 0x7a4157996518fd81)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WMI_UDP.DestAddr", dest_addr, 0x40, 0x20, true, 0x993122836150c1e8)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WMI_UDP.SrcAddr", src_addr, 0x60, 0x20, true, 0xabe591e73b0382fd)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_WMI_UDP.DestPort", dest_port, 0x80, 0x10, true, 0xe978de42e4876f1a)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_WMI_UDP.SrcPort", src_port, 0x90, 0x10, true, 0xef21c3a7f9422a2a)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif