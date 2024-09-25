#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::mmpte_t), "_MMCLONE_BLOCK.ProtoPte", proto_pte, 0x0, 0x40, true, 0x70bbc1cc78c93fc1)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile uint64_t), "_MMCLONE_BLOCK.CloneCommitCount", clone_commit_count, 0x80, 0x40, true, 0x248f77bd5f132c38)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct mi::clone_block_flags_t), "_MMCLONE_BLOCK.u1", u1, 0x80, 0x40, true, 0xe58797e9a4e16a6a)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile uint64_t), "_MMCLONE_BLOCK.CloneRefCount", clone_ref_count, 0xc0, 0x40, true, 0x1653d2b3e5bd71ce)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MMCLONE_BLOCK.CrossPartitionReferences", cross_partition_references, 0x40, 0x40, true, 0x41ff331bf27712d8)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile int64_t), "_MMCLONE_BLOCK.EntireField", entire_field, 0x0, 0x0, false, 0x1877295ce46b430a)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct mi::clone_block_flags_t), "_MMCLONE_BLOCK.Flags", flags, 0x0, 0x0, false, 0xecaa40ffbdafecb3)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MMCLONE_BLOCK.UseCount", use_count, 0x0, 0x0, false, 0x45316af176724374)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MMCLONE_BLOCK.PaddingFor16ByteAlignment", padding_for16_byte_alignment, 0x0, 0x0, false, 0xaaad6f8604262876)
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