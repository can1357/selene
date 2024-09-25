#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_data_object_t*, const struct nt::guid_t*, void**)>*), "IDataObjectVtbl.QueryInterface", query_interface, 0x0, 0x40, true, 0x22efe2f23f8c71bf)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint32_t(struct win::i_data_object_t*)>*), "IDataObjectVtbl.AddRef", add_ref, 0x40, 0x40, true, 0x4d81ebb951c0103e)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint32_t(struct win::i_data_object_t*)>*), "IDataObjectVtbl.Release", release, 0x80, 0x40, true, 0x9b2dbbda20f666f6)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_data_object_t*, struct tag::formatetc_t*, struct tag::stgmedium_t*)>*), "IDataObjectVtbl.GetData", get_data, 0xc0, 0x40, true, 0x11dde1c828269248)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_data_object_t*, struct tag::formatetc_t*, struct tag::stgmedium_t*)>*), "IDataObjectVtbl.GetDataHere", get_data_here, 0x100, 0x40, true, 0xf337d45abcb37877)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_data_object_t*, struct tag::formatetc_t*)>*), "IDataObjectVtbl.QueryGetData", query_get_data, 0x140, 0x40, true, 0xacbe623b6780039a)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_data_object_t*, struct tag::formatetc_t*, struct tag::formatetc_t*)>*), "IDataObjectVtbl.GetCanonicalFormatEtc", get_canonical_format_etc, 0x180, 0x40, true, 0x5ef5b240817afa02)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_data_object_t*, struct tag::formatetc_t*, struct tag::stgmedium_t*, int32_t)>*), "IDataObjectVtbl.SetData", set_data, 0x1c0, 0x40, true, 0x3f5215129cd05311)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_data_object_t*, uint32_t, struct win::i_enum_formatetc_t**)>*), "IDataObjectVtbl.EnumFormatEtc", enum_format_etc, 0x200, 0x40, true, 0x26be222fbe81d481)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_data_object_t*, struct tag::formatetc_t*, uint32_t, struct win::i_advise_sink_t*, uint32_t*)>*), "IDataObjectVtbl.DAdvise", d_advise, 0x240, 0x40, true, 0xa9de8e3db06644c)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_data_object_t*, uint32_t)>*), "IDataObjectVtbl.DUnadvise", d_unadvise, 0x280, 0x40, true, 0x7dd18cf044b166a7)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_data_object_t*, struct win::i_enum_statdata_t**)>*), "IDataObjectVtbl.EnumDAdvise", enum_d_advise, 0x2c0, 0x40, true, 0xa01fe551c72e171d)
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
#endif