#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::net_buffer_shared_memory_t*), "_NET_BUFFER_SHARED_MEMORY.NextSharedMemorySegment", next_shared_memory_segment, 0x0, 0x40, true, 0xbd6ab4e2a9e03e97)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NET_BUFFER_SHARED_MEMORY.SharedMemoryFlags", shared_memory_flags, 0x40, 0x20, true, 0xdc0a350cc767ed01)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_NET_BUFFER_SHARED_MEMORY.SharedMemoryHandle", shared_memory_handle, 0x80, 0x40, true, 0x79f08bf80c384f8a)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NET_BUFFER_SHARED_MEMORY.SharedMemoryOffset", shared_memory_offset, 0xc0, 0x20, true, 0xa5b236a88906b2a0)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NET_BUFFER_SHARED_MEMORY.SharedMemoryLength", shared_memory_length, 0xe0, 0x20, true, 0xee8165f2ac201235)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif