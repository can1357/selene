#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_record_info_t*, const struct nt::guid_t&, void**)>*), "IRecordInfoVtbl.QueryInterface", query_interface, 0x0, 0x40, true, 0xa0e93abb891eb43)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint32_t(struct win::i_record_info_t*)>*), "IRecordInfoVtbl.AddRef", add_ref, 0x40, 0x40, true, 0xb1bd19c92a2fdb36)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint32_t(struct win::i_record_info_t*)>*), "IRecordInfoVtbl.Release", release, 0x80, 0x40, true, 0x38b9a2ff06f1cb11)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_record_info_t*, void*)>*), "IRecordInfoVtbl.RecordInit", record_init, 0xc0, 0x40, true, 0x2620c2c79c3b792a)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_record_info_t*, void*)>*), "IRecordInfoVtbl.RecordClear", record_clear, 0x100, 0x40, true, 0xe0451a0f24195c0)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_record_info_t*, void*, void*)>*), "IRecordInfoVtbl.RecordCopy", record_copy, 0x140, 0x40, true, 0x24476b9d147892ea)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_record_info_t*, struct nt::guid_t*)>*), "IRecordInfoVtbl.GetGuid", get_guid, 0x180, 0x40, true, 0xcc48e2b523d3b46d)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_record_info_t*, wchar_t**)>*), "IRecordInfoVtbl.GetName", get_name, 0x1c0, 0x40, true, 0xb022e587b7ceca0a)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_record_info_t*, uint32_t*)>*), "IRecordInfoVtbl.GetSize", get_size, 0x200, 0x40, true, 0x9e15f944db5cb75b)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_record_info_t*, struct win::i_type_info_t**)>*), "IRecordInfoVtbl.GetTypeInfo", get_type_info, 0x240, 0x40, true, 0x905bad27d4796fc4)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_record_info_t*, void*, const wchar_t*, struct tag::variant_t*)>*), "IRecordInfoVtbl.GetField", get_field, 0x280, 0x40, true, 0x9a74eb5885a82c90)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_record_info_t*, void*, const wchar_t*, struct tag::variant_t*, void**)>*), "IRecordInfoVtbl.GetFieldNoCopy", get_field_no_copy, 0x2c0, 0x40, true, 0xc955b4a6ca9dcad6)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_record_info_t*, uint32_t, void*, const wchar_t*, struct tag::variant_t*)>*), "IRecordInfoVtbl.PutField", put_field, 0x300, 0x40, true, 0x98a4ea041cb32929)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_record_info_t*, uint32_t, void*, const wchar_t*, struct tag::variant_t*)>*), "IRecordInfoVtbl.PutFieldNoCopy", put_field_no_copy, 0x340, 0x40, true, 0x698554e3c6fda4ec)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_record_info_t*, uint32_t*, wchar_t**)>*), "IRecordInfoVtbl.GetFieldNames", get_field_names, 0x380, 0x40, true, 0x873deec014edb20a)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct win::i_record_info_t*, struct win::i_record_info_t*)>*), "IRecordInfoVtbl.IsMatchingType", is_matching_type, 0x3c0, 0x40, true, 0xbb8550a237bb8fd)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void*(struct win::i_record_info_t*)>*), "IRecordInfoVtbl.RecordCreate", record_create, 0x400, 0x40, true, 0x25f538846a5e4768)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_record_info_t*, void*, void**)>*), "IRecordInfoVtbl.RecordCreateCopy", record_create_copy, 0x440, 0x40, true, 0xb71eabc1165ff73b)
#define _m18 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_record_info_t*, void*)>*), "IRecordInfoVtbl.RecordDestroy", record_destroy, 0x480, 0x40, true, 0x5d609b022df37468)
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
#define _m18
#endif