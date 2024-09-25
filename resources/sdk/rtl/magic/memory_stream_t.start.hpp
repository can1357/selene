#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtl::memory_stream_t), "RtlMemoryStream.Stream", stream, 0x0, 0x80, true, 0x728edb2dc8e77797)
#else
#define _m00
#endif_ESCAPE(uint64_t), "_RTL_MEMORY_STREAM.Size", size, 0x40, 0x40, true, 0x87610b5a259b280d)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_RTL_MEMORY_STREAM.Capacity", capacity, 0x80, 0x40, true, 0x6a02cc45c83e1d94)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_RTL_MEMORY_STREAM.GrowBy", grow_by, 0xc0, 0x40, true, 0x561b929e1822a0d7)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_RTL_MEMORY_STREAM.Position", position, 0x100, 0x40, true, 0x67f424b1f4667138)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_RTL_MEMORY_STREAM.Buffer", buffer, 0x140, 0x40, true, 0x1d55992385aa1fc2)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif