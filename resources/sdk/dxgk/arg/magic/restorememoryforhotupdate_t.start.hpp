#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dxgk::restorememoryforhotupdateflags_t), "_DXGKARG_RESTOREMEMORYFORHOTUPDATE.Flags", flags, 0x0, 0x20, true, 0xacc11d0e3e7ea74b)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::mdl_t*), "_DXGKARG_RESTOREMEMORYFORHOTUPDATE.pDataMdl", p_data_mdl, 0x40, 0x40, true, 0x8869c9cb647df13b)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_RESTOREMEMORYFORHOTUPDATE.MetaDataSize", meta_data_size, 0x80, 0x20, true, 0xa4c461dc1c839148)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_DXGKARG_RESTOREMEMORYFORHOTUPDATE.pMetaData", p_meta_data, 0xc0, 0x40, true, 0x9d8f97d0cd0f6ec1)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif