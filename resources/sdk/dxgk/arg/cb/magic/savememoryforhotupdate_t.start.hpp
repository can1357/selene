#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARGCB_SAVEMEMORYFORHOTUPDATE.NumDataMemoryRanges", num_data_memory_ranges, 0x0, 0x20, true, 0xa3fd70271fa65f88)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dxgk::ksr_memory_range_t*), "_DXGKARGCB_SAVEMEMORYFORHOTUPDATE.pDataMemoryRanges", p_data_memory_ranges, 0x40, 0x40, true, 0xc056b00637c98904)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::mdl_t*), "_DXGKARGCB_SAVEMEMORYFORHOTUPDATE.pDataMdl", p_data_mdl, 0x80, 0x40, true, 0x6b2fc25bca3d9cc9)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARGCB_SAVEMEMORYFORHOTUPDATE.DataSize", data_size, 0xc0, 0x20, true, 0xe1eff62829d5ef26)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_DXGKARGCB_SAVEMEMORYFORHOTUPDATE.pData", p_data, 0x100, 0x40, true, 0x714911b5720541d7)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARGCB_SAVEMEMORYFORHOTUPDATE.MetaDataSize", meta_data_size, 0x140, 0x20, true, 0xaca94d4e9c030fe0)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t*), "_DXGKARGCB_SAVEMEMORYFORHOTUPDATE.pMetaData", p_meta_data, 0x180, 0x40, true, 0x752f0a018546701)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif