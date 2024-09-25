#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ex::push_lock_t), "_IOMMU_PAGE_HANDLING_DATA.ResetLock", reset_lock, 0x0, 0x0, false, 0x1f573732faa9d764)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_IOMMU_PAGE_HANDLING_DATA.Lock", lock, 0x0, 0x0, false, 0x1b5c4276d67ef84d)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IOMMU_PAGE_HANDLING_DATA.ValidGroupFaultSequenceNumber", valid_group_fault_sequence_number, 0x0, 0x0, false, 0xb0228bd8d0da5c98)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint32_t(void*, uint32_t*, uint64_t*, uint16_t*, void**, uint64_t*)>*), "_IOMMU_PAGE_HANDLING_DATA.GetPageFault", get_page_fault, 0x0, 0x0, false, 0x26e874d06fbb3c79)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, uint32_t, uint64_t, uint16_t, int32_t)>*), "_IOMMU_PAGE_HANDLING_DATA.DismissPageFault", dismiss_page_fault, 0x0, 0x0, false, 0x1ed71638115085d9)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif