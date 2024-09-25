#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_KSSTREAM_POINTER.Context", context, 0x0, 0x0, false, 0xce103ed07194a2cb)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::kspin_t*), "_KSSTREAM_POINTER.Pin", pin, 0x0, 0x0, false, 0x5f1bc82cf99f4539)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::ksstream_header_t*), "_KSSTREAM_POINTER.StreamHeader", stream_header, 0x0, 0x0, false, 0x8d34e00f739622dd)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::ksstream_pointer_offset_t*), "_KSSTREAM_POINTER.Offset", offset, 0x0, 0x0, false, 0x937c7eb2fc41c492)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::ksstream_pointer_offset_t), "_KSSTREAM_POINTER.OffsetIn", offset_in, 0x0, 0x0, false, 0x9693262b2b1edb8b)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::ksstream_pointer_offset_t), "_KSSTREAM_POINTER.OffsetOut", offset_out, 0x0, 0x0, false, 0xc9caa7dc55e1a112)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif