#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtl::avl_tree_t), "_MI_ENCLAVE_STATE.EnclaveRegions", enclave_regions, 0x0, 0x40, true, 0x8afe883d1d5f0208)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_MI_ENCLAVE_STATE.EnclaveMetadataPage", enclave_metadata_page, 0x40, 0x40, true, 0x12a95c810d2e0a55)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtl::bitmap_t*), "_MI_ENCLAVE_STATE.EnclaveMetadataBitMap", enclave_metadata_bit_map, 0x80, 0x40, true, 0x74d6f95287eaa486)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ex::push_lock_t), "_MI_ENCLAVE_STATE.EnclaveMetadataEntryLock", enclave_metadata_entry_lock, 0xc0, 0x40, true, 0x9aa3ff8ad03be2ba)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile int32_t), "_MI_ENCLAVE_STATE.EnclaveMetadataPageLock", enclave_metadata_page_lock, 0x100, 0x20, true, 0x66bc395f369f044a)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_MI_ENCLAVE_STATE.EnclaveList", enclave_list, 0x140, 0x80, true, 0x75523643a9f078f6)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ex::push_lock_t), "_MI_ENCLAVE_STATE.EnclaveListLock", enclave_list_lock, 0x1c0, 0x40, true, 0x9f5ca699d38c2c09)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ex::rundown_ref_t), "_MI_ENCLAVE_STATE.ShutdownRundown", shutdown_rundown, 0x200, 0x40, true, 0x27057cc4e970cb46)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#endif