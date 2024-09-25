#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union wdf::bm_request_type_t), "_USB_DEFAULT_PIPE_SETUP_PACKET.bmRequestType", bm_request_type, 0x0, 0x8, true, 0x18861a51b4a63fb)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_USB_DEFAULT_PIPE_SETUP_PACKET.bRequest", b_request, 0x8, 0x8, true, 0x6d76af1c82147521)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_USB_DEFAULT_PIPE_SETUP_PACKET.wLength", w_length, 0x30, 0x10, true, 0x5a0e5945ee06590e)
#else
#define _m00
#define _m01
#define _m02
#endif