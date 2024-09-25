#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t*), "_POP_PER_PROCESSOR_CONTEXT.UncompressedData", uncompressed_data, 0x0, 0x40, true, 0xf4c4e09655e9365)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_POP_PER_PROCESSOR_CONTEXT.MappingVa", mapping_va, 0x40, 0x40, true, 0x632e2954063bf7f5)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_POP_PER_PROCESSOR_CONTEXT.XpressEncodeWorkspace", xpress_encode_workspace, 0x80, 0x40, true, 0xd2724284eb31b1a4)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t*), "_POP_PER_PROCESSOR_CONTEXT.CompressedDataBuffer", compressed_data_buffer, 0xc0, 0x40, true, 0xdf36463c17b99acb)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_POP_PER_PROCESSOR_CONTEXT.CopyTicks", copy_ticks, 0x100, 0x40, true, 0xc901c5ecd43b880c)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_POP_PER_PROCESSOR_CONTEXT.CompressTicks", compress_ticks, 0x140, 0x40, true, 0xdbc0cd74e5f3e89)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_POP_PER_PROCESSOR_CONTEXT.BytesCopied", bytes_copied, 0x180, 0x40, true, 0xed16c4fa0afc3bc0)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_POP_PER_PROCESSOR_CONTEXT.PagesProcessed", pages_processed, 0x1c0, 0x40, true, 0xfdf5ef1901a52d9d)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_POP_PER_PROCESSOR_CONTEXT.DecompressTicks", decompress_ticks, 0x200, 0x40, true, 0x8d7d31ce896521c0)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_POP_PER_PROCESSOR_CONTEXT.ResumeCopyTicks", resume_copy_ticks, 0x240, 0x40, true, 0x60457141db392d95)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_POP_PER_PROCESSOR_CONTEXT.SharedBufferTicks", shared_buffer_ticks, 0x280, 0x40, true, 0x5a97fbd8a38fa586)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint64_t, 2>), "_POP_PER_PROCESSOR_CONTEXT.DecompressTicksByMethod", decompress_ticks_by_method, 0x2c0, 0x80, true, 0x646c55d539f289b0)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint64_t, 2>), "_POP_PER_PROCESSOR_CONTEXT.DecompressSizeByMethod", decompress_size_by_method, 0x340, 0x80, true, 0xc9c95ad657bbba8f)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_POP_PER_PROCESSOR_CONTEXT.CompressCount", compress_count, 0x3c0, 0x20, true, 0x5d1f513f7319b50b)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_POP_PER_PROCESSOR_CONTEXT.HuffCompressCount", huff_compress_count, 0x3e0, 0x20, true, 0x365bc23e1cff4e35)
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
#define _m12
#define _m13
#define _m14
#endif