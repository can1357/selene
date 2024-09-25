#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_HEAP_BLOCK_INFORMATION.Address", address, 0x0, 0x40, true, 0x79d46e9419922770)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HEAP_BLOCK_INFORMATION.Flags", flags, 0x40, 0x20, true, 0xe05dced81d545692)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_HEAP_BLOCK_INFORMATION.DataSize", data_size, 0x80, 0x40, true, 0x61a0d07a6f54e96f)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_HEAP_BLOCK_INFORMATION.OverheadSize", overhead_size, 0xc0, 0x40, true, 0x4046dec9346e2ad2)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_HEAP_BLOCK_INFORMATION.NextBlockInformationOffset", next_block_information_offset, 0x100, 0x40, true, 0xe0e1e54d73cc33e5)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif