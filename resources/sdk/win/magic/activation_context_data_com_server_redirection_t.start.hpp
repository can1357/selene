#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ACTIVATION_CONTEXT_DATA_COM_SERVER_REDIRECTION.Size", size, 0x0, 0x20, true, 0x41feb4a8f622deff)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ACTIVATION_CONTEXT_DATA_COM_SERVER_REDIRECTION.Flags", flags, 0x20, 0x20, true, 0x51ddc3bb1e0e7b98)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ACTIVATION_CONTEXT_DATA_COM_SERVER_REDIRECTION.ThreadingModel", threading_model, 0x40, 0x20, true, 0xb968fb8f9c70fe99)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_ACTIVATION_CONTEXT_DATA_COM_SERVER_REDIRECTION.ReferenceClsid", reference_clsid, 0x60, 0x80, true, 0x4d785adac83226da)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_ACTIVATION_CONTEXT_DATA_COM_SERVER_REDIRECTION.ConfiguredClsid", configured_clsid, 0xe0, 0x80, true, 0x87356f30844d96a)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_ACTIVATION_CONTEXT_DATA_COM_SERVER_REDIRECTION.ImplementedClsid", implemented_clsid, 0x160, 0x80, true, 0xf0710dd45e31ab61)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_ACTIVATION_CONTEXT_DATA_COM_SERVER_REDIRECTION.TypeLibraryId", type_library_id, 0x1e0, 0x80, true, 0xdffa5325307e3df4)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ACTIVATION_CONTEXT_DATA_COM_SERVER_REDIRECTION.ModuleLength", module_length, 0x260, 0x20, true, 0x9f12501c691aa22a)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ACTIVATION_CONTEXT_DATA_COM_SERVER_REDIRECTION.ModuleOffset", module_offset, 0x280, 0x20, true, 0x118948d6a22c025b)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ACTIVATION_CONTEXT_DATA_COM_SERVER_REDIRECTION.ProgIdLength", prog_id_length, 0x2a0, 0x20, true, 0x4dc068cf5f71bc44)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ACTIVATION_CONTEXT_DATA_COM_SERVER_REDIRECTION.ProgIdOffset", prog_id_offset, 0x2c0, 0x20, true, 0x1610ab0834f71fb0)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ACTIVATION_CONTEXT_DATA_COM_SERVER_REDIRECTION.ShimDataLength", shim_data_length, 0x2e0, 0x20, true, 0x12a0d4c69ff3e4ed)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ACTIVATION_CONTEXT_DATA_COM_SERVER_REDIRECTION.ShimDataOffset", shim_data_offset, 0x300, 0x20, true, 0xc9888a98914180c0)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ACTIVATION_CONTEXT_DATA_COM_SERVER_REDIRECTION.MiscStatusDefault", misc_status_default, 0x320, 0x20, true, 0x24672fede7c300ed)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ACTIVATION_CONTEXT_DATA_COM_SERVER_REDIRECTION.MiscStatusContent", misc_status_content, 0x340, 0x20, true, 0x943ebff4009b90df)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ACTIVATION_CONTEXT_DATA_COM_SERVER_REDIRECTION.MiscStatusThumbnail", misc_status_thumbnail, 0x360, 0x20, true, 0xc385e824707e0794)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ACTIVATION_CONTEXT_DATA_COM_SERVER_REDIRECTION.MiscStatusIcon", misc_status_icon, 0x380, 0x20, true, 0xb760d70323211747)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ACTIVATION_CONTEXT_DATA_COM_SERVER_REDIRECTION.MiscStatusDocPrint", misc_status_doc_print, 0x3a0, 0x20, true, 0x119306a14d1c66de)
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
#define _m15
#define _m16
#define _m17
#endif