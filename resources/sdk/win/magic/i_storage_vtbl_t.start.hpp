#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_storage_t*, const struct nt::guid_t*, void**)>*), "IStorageVtbl.QueryInterface", query_interface, 0x0, 0x40, true, 0x33240377a6195029)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint32_t(struct win::i_storage_t*)>*), "IStorageVtbl.AddRef", add_ref, 0x40, 0x40, true, 0xfc501cf3fa59c8d1)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint32_t(struct win::i_storage_t*)>*), "IStorageVtbl.Release", release, 0x80, 0x40, true, 0xc08d54968e78c2e4)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_storage_t*, const wchar_t*, uint32_t, uint32_t, uint32_t, struct win::i_stream_t**)>*), "IStorageVtbl.CreateStream", create_stream, 0xc0, 0x40, true, 0x3c789afeae38af6a)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_storage_t*, const wchar_t*, void*, uint32_t, uint32_t, struct win::i_stream_t**)>*), "IStorageVtbl.OpenStream", open_stream, 0x100, 0x40, true, 0x9ce64365cc4fbacc)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_storage_t*, const wchar_t*, uint32_t, uint32_t, uint32_t, struct win::i_storage_t**)>*), "IStorageVtbl.CreateStorage", create_storage, 0x140, 0x40, true, 0x30a0134ebec3b0cf)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_storage_t*, const wchar_t*, struct win::i_storage_t*, uint32_t, wchar_t**, uint32_t, struct win::i_storage_t**)>*), "IStorageVtbl.OpenStorage", open_storage, 0x180, 0x40, true, 0x47fe2a1c03d57a60)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_storage_t*, uint32_t, const struct nt::guid_t*, wchar_t**, struct win::i_storage_t*)>*), "IStorageVtbl.CopyTo", copy_to, 0x1c0, 0x40, true, 0x6b9645b6d1431521)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_storage_t*, const wchar_t*, struct win::i_storage_t*, const wchar_t*, uint32_t)>*), "IStorageVtbl.MoveElementTo", move_element_to, 0x200, 0x40, true, 0xfef1e38e1cab683c)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_storage_t*, uint32_t)>*), "IStorageVtbl.Commit", commit, 0x240, 0x40, true, 0x99ff3d8c1a134493)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_storage_t*)>*), "IStorageVtbl.Revert", revert, 0x280, 0x40, true, 0xfa6b299943146adb)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_storage_t*, uint32_t, void*, uint32_t, struct win::i_enum_statstg_t**)>*), "IStorageVtbl.EnumElements", enum_elements, 0x2c0, 0x40, true, 0x6988d7e6e3f0c0f1)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_storage_t*, const wchar_t*)>*), "IStorageVtbl.DestroyElement", destroy_element, 0x300, 0x40, true, 0xaec8093982de381c)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_storage_t*, const wchar_t*, const wchar_t*)>*), "IStorageVtbl.RenameElement", rename_element, 0x340, 0x40, true, 0x6e20a328282681d2)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_storage_t*, const wchar_t*, const struct win::filetime_t*, const struct win::filetime_t*, const struct win::filetime_t*)>*), "IStorageVtbl.SetElementTimes", set_element_times, 0x380, 0x40, true, 0xf4d60e1cc444b502)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_storage_t*, const struct nt::guid_t*)>*), "IStorageVtbl.SetClass", set_class, 0x3c0, 0x40, true, 0x5a1fe50074fd5d2a)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_storage_t*, uint32_t, uint32_t)>*), "IStorageVtbl.SetStateBits", set_state_bits, 0x400, 0x40, true, 0x4d78934a6a2cafce)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_storage_t*, struct tag::statstg_t*, uint32_t)>*), "IStorageVtbl.Stat", stat, 0x440, 0x40, true, 0x5ca3b66cfa2264e3)
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