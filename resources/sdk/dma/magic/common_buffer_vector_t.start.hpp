#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_DMA_COMMON_BUFFER_VECTOR.ListEntry", list_entry, 0x0, 0x80, true, 0x938c1241f088de7d)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_DMA_COMMON_BUFFER_VECTOR.SizeOfEntries", size_of_entries, 0x80, 0x40, true, 0x8c3fcb33d60473a5)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_DMA_COMMON_BUFFER_VECTOR.NumberOfEntries", number_of_entries, 0xc0, 0x20, true, 0x46a390192229fc81)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct halp::dma_domain_object_t*), "_DMA_COMMON_BUFFER_VECTOR.Domain", domain, 0x100, 0x40, true, 0x8cf857c0483a1547)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::mdl_t*), "_DMA_COMMON_BUFFER_VECTOR.Mdl", mdl, 0x140, 0x40, true, 0xb02de7ce0146f490)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_DMA_COMMON_BUFFER_VECTOR.BaseAddress", base_address, 0x180, 0x40, true, 0xcbb48cc033e260d2)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_DMA_COMMON_BUFFER_VECTOR.BaseLogicalAddress", base_logical_address, 0x1c0, 0x40, true, 0xbb5428704748b3da)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct dma::common_buffer_entry_t*), "_DMA_COMMON_BUFFER_VECTOR.Entries", entries, 0x200, 0x40, true, 0xe57a0e670c443316)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_DMA_COMMON_BUFFER_VECTOR.LogicalAddressMapped", logical_address_mapped, 0x0, 0x0, false, 0xb1afb73fcae754d4)
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
#endif