#if !IN_PARSER
#define _m000 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FAST_IO_DISPATCH.SizeOfFastIoDispatch", size_of_fast_io_dispatch, 0x0, 0x20, true, 0x22e0d08d06679f43)
#define _m001 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pfast_io_check_if_possible_t ), "_FAST_IO_DISPATCH.FastIoCheckIfPossible", fast_io_check_if_possible, 0x40, 0x40, true, 0xf1c300e7efec5c6c)
#define _m002 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<uint8_t(struct nt::file_object_t*, int64_t*, uint32_t, uint8_t, uint32_t, void*, struct io::status_block_t*, struct nt::device_object_t*)>*), "_FAST_IO_DISPATCH.FastIoRead", fast_io_read, 0x80, 0x40, true, 0xeb005428d78f0a2d)
#define _m003 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<uint8_t(struct nt::file_object_t*, int64_t*, uint32_t, uint8_t, uint32_t, void*, struct io::status_block_t*, struct nt::device_object_t*)>*), "_FAST_IO_DISPATCH.FastIoWrite", fast_io_write, 0xc0, 0x40, true, 0x98dd2faf72a69839)
#define _m004 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pfast_io_query_basic_info_t ), "_FAST_IO_DISPATCH.FastIoQueryBasicInfo", fast_io_query_basic_info, 0x100, 0x40, true, 0xf23af6fee80182c7)
#define _m005 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pfast_io_query_standard_info_t ), "_FAST_IO_DISPATCH.FastIoQueryStandardInfo", fast_io_query_standard_info, 0x140, 0x40, true, 0xcba656b6728a442c)
#define _m006 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::variant<sdk::function<uint8_t(struct nt::file_object_t*, int64_t*, int64_t*, struct nt::kprocess_t*, uint32_t, uint8_t, uint8_t, struct io::status_block_t*, struct nt::device_object_t*)>*, sdk::function<uint8_t(struct nt::file_object_t*, int64_t*, int64_t*, struct nt::eprocess_t*, uint32_t, uint8_t, uint8_t, struct io::status_block_t*, struct nt::device_object_t*)>*>), "_FAST_IO_DISPATCH.FastIoLock", fast_io_lock, 0x180, 0x40, true, 0xc9e4d2e7be52b4fe)
#define _m007 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::variant<sdk::function<uint8_t(struct nt::file_object_t*, int64_t*, int64_t*, struct nt::kprocess_t*, uint32_t, struct io::status_block_t*, struct nt::device_object_t*)>*, sdk::function<uint8_t(struct nt::file_object_t*, int64_t*, int64_t*, struct nt::eprocess_t*, uint32_t, struct io::status_block_t*, struct nt::device_object_t*)>*>), "_FAST_IO_DISPATCH.FastIoUnlockSingle", fast_io_unlock_single, 0x1c0, 0x40, true, 0x270be1df58cb1833)
#define _m008 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::variant<sdk::function<uint8_t(struct nt::file_object_t*, struct nt::kprocess_t*, struct io::status_block_t*, struct nt::device_object_t*)>*, sdk::function<uint8_t(struct nt::file_object_t*, struct nt::eprocess_t*, struct io::status_block_t*, struct nt::device_object_t*)>*>), "_FAST_IO_DISPATCH.FastIoUnlockAll", fast_io_unlock_all, 0x200, 0x40, true, 0xe670f45d65aebaf9)
#define _m009 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pfast_io_unlock_all_by_key_t ), "_FAST_IO_DISPATCH.FastIoUnlockAllByKey", fast_io_unlock_all_by_key, 0x240, 0x40, true, 0xbcd90125a02ca882)
#define _m010 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pfast_io_device_control_t ), "_FAST_IO_DISPATCH.FastIoDeviceControl", fast_io_device_control, 0x280, 0x40, true, 0x5fee470d46d98ff7)
#define _m011 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct nt::file_object_t*)>*), "_FAST_IO_DISPATCH.AcquireFileForNtCreateSection", acquire_file_for_nt_create_section, 0x2c0, 0x40, true, 0xeac9555a3e153a61)
#define _m012 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct nt::file_object_t*)>*), "_FAST_IO_DISPATCH.ReleaseFileForNtCreateSection", release_file_for_nt_create_section, 0x300, 0x40, true, 0xbe1f14639e6f2940)
#define _m013 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pfast_io_detach_device_t ), "_FAST_IO_DISPATCH.FastIoDetachDevice", fast_io_detach_device, 0x340, 0x40, true, 0xdb2a7c7fcd8a29bb)
#define _m014 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pfast_io_query_network_open_info_t ), "_FAST_IO_DISPATCH.FastIoQueryNetworkOpenInfo", fast_io_query_network_open_info, 0x380, 0x40, true, 0x79fdbd199a986d03)
#define _m015 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pfast_io_acquire_for_mod_write_t ), "_FAST_IO_DISPATCH.AcquireForModWrite", acquire_for_mod_write, 0x3c0, 0x40, true, 0x2f641bf014b306a8)
#define _m016 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<uint8_t(struct nt::file_object_t*, int64_t*, uint32_t, uint32_t, struct nt::mdl_t**, struct io::status_block_t*, struct nt::device_object_t*)>*), "_FAST_IO_DISPATCH.MdlRead", mdl_read, 0x400, 0x40, true, 0x879b1e375a14e5cc)
#define _m017 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<uint8_t(struct nt::file_object_t*, struct nt::mdl_t*, struct nt::device_object_t*)>*), "_FAST_IO_DISPATCH.MdlReadComplete", mdl_read_complete, 0x440, 0x40, true, 0xbc716d2e51f2a67d)
#define _m018 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<uint8_t(struct nt::file_object_t*, int64_t*, uint32_t, uint32_t, struct nt::mdl_t**, struct io::status_block_t*, struct nt::device_object_t*)>*), "_FAST_IO_DISPATCH.PrepareMdlWrite", prepare_mdl_write, 0x480, 0x40, true, 0xa38261121347c08e)
#define _m019 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<uint8_t(struct nt::file_object_t*, int64_t*, struct nt::mdl_t*, struct nt::device_object_t*)>*), "_FAST_IO_DISPATCH.MdlWriteComplete", mdl_write_complete, 0x4c0, 0x40, true, 0xfd48c9ba6755b418)
#define _m020 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<uint8_t(struct nt::file_object_t*, int64_t*, uint32_t, uint32_t, void*, struct nt::mdl_t**, struct io::status_block_t*, struct nt::compressed_data_info_t*, uint32_t, struct nt::device_object_t*)>*), "_FAST_IO_DISPATCH.FastIoReadCompressed", fast_io_read_compressed, 0x500, 0x40, true, 0xeba6fc4db670c612)
#define _m021 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<uint8_t(struct nt::file_object_t*, int64_t*, uint32_t, uint32_t, void*, struct nt::mdl_t**, struct io::status_block_t*, struct nt::compressed_data_info_t*, uint32_t, struct nt::device_object_t*)>*), "_FAST_IO_DISPATCH.FastIoWriteCompressed", fast_io_write_compressed, 0x540, 0x40, true, 0x2ec7024d35b8a5bd)
#define _m022 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<uint8_t(struct nt::file_object_t*, struct nt::mdl_t*, struct nt::device_object_t*)>*), "_FAST_IO_DISPATCH.MdlReadCompleteCompressed", mdl_read_complete_compressed, 0x580, 0x40, true, 0x788624af308287d6)
#define _m023 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<uint8_t(struct nt::file_object_t*, int64_t*, struct nt::mdl_t*, struct nt::device_object_t*)>*), "_FAST_IO_DISPATCH.MdlWriteCompleteCompressed", mdl_write_complete_compressed, 0x5c0, 0x40, true, 0x42e6df23c3a6b8cd)
#define _m024 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pfast_io_query_open_t ), "_FAST_IO_DISPATCH.FastIoQueryOpen", fast_io_query_open, 0x600, 0x40, true, 0x240e65700c3843fc)
#define _m025 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pfast_io_release_for_mod_write_t ), "_FAST_IO_DISPATCH.ReleaseForModWrite", release_for_mod_write, 0x640, 0x40, true, 0x92fe42cee5e33dbb)
#define _m026 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct nt::file_object_t*, struct nt::device_object_t*)>*), "_FAST_IO_DISPATCH.AcquireForCcFlush", acquire_for_cc_flush, 0x680, 0x40, true, 0x9837736ab25fb71f)
#define _m027 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct nt::file_object_t*, struct nt::device_object_t*)>*), "_FAST_IO_DISPATCH.ReleaseForCcFlush", release_for_cc_flush, 0x6c0, 0x40, true, 0x54a131ecde05e81d)
#else
#define _m000
#define _m001
#define _m002
#define _m003
#define _m004
#define _m005
#define _m006
#define _m007
#define _m008
#define _m009
#define _m010
#define _m011
#define _m012
#define _m013
#define _m014
#define _m015
#define _m016
#define _m017
#define _m018
#define _m019
#define _m020
#define _m021
#define _m022
#define _m023
#define _m024
#define _m025
#define _m026
#define _m027
#endif