#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STREAMS_ASSOCIATE_ID_INPUT_BUFFER.Flags", flags, 0x0, 0x20, true, 0x404c2c591582ef62)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STREAMS_ASSOCIATE_ID_INPUT_BUFFER.StreamId", stream_id, 0x20, 0x20, true, 0x2c7e90cb99e0637f)
#else
#define _m00
#define _m01
#endif