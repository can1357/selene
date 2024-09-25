#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_VIDEO_REQUEST_PACKET.IoControlCode", io_control_code, 0x0, 0x20, true, 0xa83a8bb1ce99cc56)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::status_block_t*), "_VIDEO_REQUEST_PACKET.StatusBlock", status_block, 0x40, 0x40, true, 0x2bd83f2f671a093c)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_VIDEO_REQUEST_PACKET.InputBuffer", input_buffer, 0x80, 0x40, true, 0xa33e4e2f92cdf357)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_VIDEO_REQUEST_PACKET.InputBufferLength", input_buffer_length, 0xc0, 0x20, true, 0xeb9e8b6e657a0196)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_VIDEO_REQUEST_PACKET.OutputBuffer", output_buffer, 0x100, 0x40, true, 0xd81f4fd29a9bd672)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_VIDEO_REQUEST_PACKET.OutputBufferLength", output_buffer_length, 0x140, 0x20, true, 0xff1262182b1c0da9)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif