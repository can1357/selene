#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_OUTPUTDUPLCONTEXTSCOUNT.VidPnSourceId", vid_pn_source_id, 0x0, 0x20, true, 0xe14aed1657d90a7b)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_OUTPUTDUPLCONTEXTSCOUNT.OutputDuplicationCount", output_duplication_count, 0x20, 0x20, true, 0xbe0ef390429a0aa6)
#else
#define _m00
#define _m01
#endif