#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_USBD_PIPE_INFORMATION.MaximumPacketSize", maximum_packet_size, 0x0, 0x10, true, 0xfb3973c6702dbf06)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_USBD_PIPE_INFORMATION.EndpointAddress", endpoint_address, 0x10, 0x8, true, 0xadf4282b80ae004a)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_USBD_PIPE_INFORMATION.Interval", interval, 0x18, 0x8, true, 0xc5a676f1879d3032)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::usbd_pipe_type_t), "_USBD_PIPE_INFORMATION.PipeType", pipe_type, 0x20, 0x20, true, 0xd78a67c459399d84)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_USBD_PIPE_INFORMATION.PipeHandle", pipe_handle, 0x40, 0x40, true, 0xf4090c2c8cb3044c)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_USBD_PIPE_INFORMATION.MaximumTransferSize", maximum_transfer_size, 0x80, 0x20, true, 0xadeed355b81ee11c)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_USBD_PIPE_INFORMATION.PipeFlags", pipe_flags, 0xa0, 0x20, true, 0x2bb2ed36248191cc)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif