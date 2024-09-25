#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::object_header_t), "_NDIS_RECEIVE_SCALE_PARAMETERS.Header", header, 0x0, 0x20, true, 0x845525ede586bbc)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_NDIS_RECEIVE_SCALE_PARAMETERS.Flags", flags, 0x20, 0x10, true, 0x520dbe1193cc2340)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_NDIS_RECEIVE_SCALE_PARAMETERS.BaseCpuNumber", base_cpu_number, 0x30, 0x10, true, 0xbdc88a3cbd784c0f)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_RECEIVE_SCALE_PARAMETERS.HashInformation", hash_information, 0x40, 0x20, true, 0x747dc4c56b7c6663)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_NDIS_RECEIVE_SCALE_PARAMETERS.IndirectionTableSize", indirection_table_size, 0x60, 0x10, true, 0xb2985142f65ad6ce)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_RECEIVE_SCALE_PARAMETERS.IndirectionTableOffset", indirection_table_offset, 0x80, 0x20, true, 0xf55cfc23ed782165)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_NDIS_RECEIVE_SCALE_PARAMETERS.HashSecretKeySize", hash_secret_key_size, 0xa0, 0x10, true, 0x14b6f1c026e3009a)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_RECEIVE_SCALE_PARAMETERS.HashSecretKeyOffset", hash_secret_key_offset, 0xc0, 0x20, true, 0x1e2c4288b39165c8)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_RECEIVE_SCALE_PARAMETERS.ProcessorMasksOffset", processor_masks_offset, 0xe0, 0x20, true, 0xe1af22b27fd8b437)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_RECEIVE_SCALE_PARAMETERS.NumberOfProcessorMasks", number_of_processor_masks, 0x100, 0x20, true, 0xee81758b77813904)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_RECEIVE_SCALE_PARAMETERS.ProcessorMasksEntrySize", processor_masks_entry_size, 0x120, 0x20, true, 0xfd28ca67fbc65090)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::processor_number_t), "_NDIS_RECEIVE_SCALE_PARAMETERS.DefaultProcessorNumber", default_processor_number, 0x140, 0x20, true, 0xff7932c150e4e080)
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
#define _m11
#endif