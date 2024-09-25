#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_USBD_ISO_PACKET_DESCRIPTOR.Offset", offset, 0x0, 0x20, true, 0xf84e7dcfe42950ab)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_USBD_ISO_PACKET_DESCRIPTOR.Length", length, 0x20, 0x20, true, 0x8e6b5bb98e684351)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_USBD_ISO_PACKET_DESCRIPTOR.Status", status, 0x40, 0x20, true, 0x87bc0cab793748af)
#else
#define _m00
#define _m01
#define _m02
#endif