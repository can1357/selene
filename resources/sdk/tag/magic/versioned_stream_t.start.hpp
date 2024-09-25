#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "tagVersionedStream.guidVersion", guid_version, 0x0, 0x80, true, 0x3c268e8c29f4eb92)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::i_stream_t*), "tagVersionedStream.pStream", p_stream, 0x80, 0x40, true, 0x41f330ce7022e4d6)
#else
#define _m00
#define _m01
#endif