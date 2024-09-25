#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::object_header_t), "_NDIS_SHARED_MEMORY_PARAMETERS.Header", header, 0x0, 0x20, true, 0xe2b7622ef3462ad)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_SHARED_MEMORY_PARAMETERS.Flags", flags, 0x20, 0x20, true, 0x38829875178a7ba6)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_SHARED_MEMORY_PARAMETERS.QueueId", queue_id, 0x40, 0x20, true, 0x48dc61751c72ca34)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_NDIS_SHARED_MEMORY_PARAMETERS.SharedMemoryHandle", shared_memory_handle, 0x80, 0x40, true, 0x1b78f8f629405adc)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_SHARED_MEMORY_PARAMETERS.PreferredNode", preferred_node, 0xc0, 0x20, true, 0xef1adbfba647ca35)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum ndis::shared_memory_usage_t), "_NDIS_SHARED_MEMORY_PARAMETERS.Usage", usage, 0xe0, 0x20, true, 0xcb7721633e391f5d)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_SHARED_MEMORY_PARAMETERS.Length", length, 0x100, 0x20, true, 0xbcff4d5341153576)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_NDIS_SHARED_MEMORY_PARAMETERS.VirtualAddress", virtual_address, 0x140, 0x40, true, 0x84ea1fc296ecbb8f)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_SHARED_MEMORY_PARAMETERS.SGListBufferLength", sg_list_buffer_length, 0x180, 0x20, true, 0x3469d4e1daae989b)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::scatter_gather_list_t*), "_NDIS_SHARED_MEMORY_PARAMETERS.SGListBuffer", sg_list_buffer, 0x1c0, 0x40, true, 0xf2170df9fa9fbf50)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_SHARED_MEMORY_PARAMETERS.VPortId", v_port_id, 0x200, 0x20, true, 0x3f6718e149f9f016)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#define _m09
#define _m10
#endif