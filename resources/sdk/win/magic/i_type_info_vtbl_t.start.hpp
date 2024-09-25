#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_type_info_t*, const struct nt::guid_t&, void**)>*), "ITypeInfoVtbl.QueryInterface", query_interface, 0x0, 0x40, true, 0x65a8d7626b9854aa)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint32_t(struct win::i_type_info_t*)>*), "ITypeInfoVtbl.AddRef", add_ref, 0x40, 0x40, true, 0xf401a2502f40b3bc)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint32_t(struct win::i_type_info_t*)>*), "ITypeInfoVtbl.Release", release, 0x80, 0x40, true, 0x251caa90995270cf)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_type_info_t*, struct tag::typeattr_t**)>*), "ITypeInfoVtbl.GetTypeAttr", get_type_attr, 0xc0, 0x40, true, 0x21f330f6fa65a1a2)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_type_info_t*, struct win::i_type_comp_t**)>*), "ITypeInfoVtbl.GetTypeComp", get_type_comp, 0x100, 0x40, true, 0x8eb7603acc8c994)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_type_info_t*, uint32_t, struct tag::funcdesc_t**)>*), "ITypeInfoVtbl.GetFuncDesc", get_func_desc, 0x140, 0x40, true, 0x1c5d004141541084)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_type_info_t*, uint32_t, struct tag::vardesc_t**)>*), "ITypeInfoVtbl.GetVarDesc", get_var_desc, 0x180, 0x40, true, 0x4f82f120917b95f1)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_type_info_t*, int32_t, wchar_t**, uint32_t, uint32_t*)>*), "ITypeInfoVtbl.GetNames", get_names, 0x1c0, 0x40, true, 0x1be7581d135179f8)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_type_info_t*, uint32_t, uint32_t*)>*), "ITypeInfoVtbl.GetRefTypeOfImplType", get_ref_type_of_impl_type, 0x200, 0x40, true, 0xf78012e449abf1f7)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_type_info_t*, uint32_t, int32_t*)>*), "ITypeInfoVtbl.GetImplTypeFlags", get_impl_type_flags, 0x240, 0x40, true, 0xde7a52e33141b4e6)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_type_info_t*, wchar_t**, uint32_t, int32_t*)>*), "ITypeInfoVtbl.GetIDsOfNames", get_i_ds_of_names, 0x280, 0x40, true, 0x413aa395c0e8ed7a)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_type_info_t*, void*, int32_t, uint16_t, struct tag::dispparams_t*, struct tag::variant_t*, struct tag::excepinfo_t*, uint32_t*)>*), "ITypeInfoVtbl.Invoke", invoke, 0x2c0, 0x40, true, 0x1f9d40a39b374dd0)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_type_info_t*, int32_t, wchar_t**, wchar_t**, uint32_t*, wchar_t**)>*), "ITypeInfoVtbl.GetDocumentation", get_documentation, 0x300, 0x40, true, 0x46f38657897ea225)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_type_info_t*, int32_t, enum tag::invokekind_t, wchar_t**, wchar_t**, uint16_t*)>*), "ITypeInfoVtbl.GetDllEntry", get_dll_entry, 0x340, 0x40, true, 0x3ab8afd07e98d97c)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_type_info_t*, uint32_t, struct win::i_type_info_t**)>*), "ITypeInfoVtbl.GetRefTypeInfo", get_ref_type_info, 0x380, 0x40, true, 0x45e237118219f703)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_type_info_t*, int32_t, enum tag::invokekind_t, void**)>*), "ITypeInfoVtbl.AddressOfMember", address_of_member, 0x3c0, 0x40, true, 0x977bce6b8ebb17f6)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_type_info_t*, struct win::i_unknown_t*, const struct nt::guid_t&, void**)>*), "ITypeInfoVtbl.CreateInstance", create_instance, 0x400, 0x40, true, 0x54711ab4b1bf4ec9)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_type_info_t*, int32_t, wchar_t**)>*), "ITypeInfoVtbl.GetMops", get_mops, 0x440, 0x40, true, 0x1c5dfdfe64d87a74)
#define _m18 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_type_info_t*, struct win::i_type_lib_t**, uint32_t*)>*), "ITypeInfoVtbl.GetContainingTypeLib", get_containing_type_lib, 0x480, 0x40, true, 0xa7cc2d97d7fa6ff5)
#define _m19 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct win::i_type_info_t*, struct tag::typeattr_t*)>*), "ITypeInfoVtbl.ReleaseTypeAttr", release_type_attr, 0x4c0, 0x40, true, 0x1c54b75eb7f0b54a)
#define _m20 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct win::i_type_info_t*, struct tag::funcdesc_t*)>*), "ITypeInfoVtbl.ReleaseFuncDesc", release_func_desc, 0x500, 0x40, true, 0xc700816cf62317b3)
#define _m21 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct win::i_type_info_t*, struct tag::vardesc_t*)>*), "ITypeInfoVtbl.ReleaseVarDesc", release_var_desc, 0x540, 0x40, true, 0xa458ebf5e26f940a)
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
#define _m19
#define _m20
#define _m21
#endif