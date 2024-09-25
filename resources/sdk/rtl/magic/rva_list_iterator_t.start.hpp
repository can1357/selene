#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RTL_RVA_LIST_ITERATOR.CurrentRva", current_rva, 0x0, 0x20, true, 0x3a5fc55fe1f19303)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RTL_RVA_LIST_ITERATOR.CurrentRvaIndex", current_rva_index, 0x20, 0x20, true, 0xd9681a216e06b26f)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RTL_RVA_LIST_ITERATOR.CompressedRvaDataOffset", compressed_rva_data_offset, 0x40, 0x20, true, 0x12381cf6d5ed145f)
#else
#define _m00
#define _m01
#define _m02
#endif