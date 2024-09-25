#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STREAM_EXTENT_ENTRY.Flags", flags, 0x0, 0x20, true, 0xf469cffe0d269449)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct win::retrieval_pointers_buffer_t), "_STREAM_EXTENT_ENTRY.ExtentInformation.RetrievalPointers", retrieval_pointers, 0x0, 0x0, true, 0x74520601c5a69306)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u0_extent_information_t), "_STREAM_EXTENT_ENTRY.ExtentInformation", extent_information, 0x40, 0x0, true, 0xda0f11f494d18dc9)
#else
#define _m00
#define _m01
#define _m02
#endif