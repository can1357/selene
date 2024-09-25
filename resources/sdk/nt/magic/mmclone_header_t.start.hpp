#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MMCLONE_HEADER.NumberOfPtes", number_of_ptes, 0x0, 0x40, true, 0x5b7d0a271b5b255a)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile uint64_t), "_MMCLONE_HEADER.NumberOfProcessReferences", number_of_process_references, 0x40, 0x40, true, 0xfc127c0b3be5587e)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::mmclone_block_t*), "_MMCLONE_HEADER.ClonePtes", clone_ptes, 0x80, 0x40, true, 0x854cac2b65de5b68)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct mi::partition_t*), "_MMCLONE_HEADER.Partition", partition, 0xc0, 0x40, true, 0x784f55e2cd0fd706)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif