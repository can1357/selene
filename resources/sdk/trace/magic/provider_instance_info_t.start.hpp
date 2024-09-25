#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_TRACE_PROVIDER_INSTANCE_INFO.NextOffset", next_offset, 0x0, 0x20, true, 0xe269e46b3313af0b)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_TRACE_PROVIDER_INSTANCE_INFO.EnableCount", enable_count, 0x20, 0x20, true, 0x24576e0a96143d27)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_TRACE_PROVIDER_INSTANCE_INFO.Pid", pid, 0x40, 0x20, true, 0xee5abab7426e52c9)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_TRACE_PROVIDER_INSTANCE_INFO.Flags", flags, 0x60, 0x20, true, 0x73ea2c369be777ca)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif