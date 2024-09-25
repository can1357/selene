#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_VAD_DESC.VadIndex", vad_index, 0x0, 0x20, true, 0xf0110b7d4baacfe0)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_D3DKMT_VAD_DESC.VadAddress", vad_address, 0x40, 0x40, true, 0xaa436f33ad025706)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_VAD_DESC.NumMappedRanges", num_mapped_ranges, 0x80, 0x20, true, 0xa314aa1529cdc563)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_VAD_DESC.VadType", vad_type, 0xa0, 0x20, true, 0x921051badb14d7cc)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_D3DKMT_VAD_DESC.StartAddress", start_address, 0xc0, 0x40, true, 0x3f04303a948237d2)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_D3DKMT_VAD_DESC.EndAddress", end_address, 0x100, 0x40, true, 0xe2de44818c06dfbb)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif