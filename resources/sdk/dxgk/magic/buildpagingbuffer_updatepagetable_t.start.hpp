#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_BUILDPAGINGBUFFER_UPDATEPAGETABLE.PageTableLevel", page_table_level, 0x0, 0x20, true, 0xeb2a2033b75ec24f)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_DXGK_BUILDPAGINGBUFFER_UPDATEPAGETABLE.hAllocation", h_allocation, 0x40, 0x40, true, 0x63cb0200126953e8)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dxgk::pagetableupdateaddress_t), "_DXGK_BUILDPAGINGBUFFER_UPDATEPAGETABLE.PageTableAddress", page_table_address, 0x80, 0x80, true, 0xff052b2499d4f692)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dxgk::pte_t*), "_DXGK_BUILDPAGINGBUFFER_UPDATEPAGETABLE.pPageTableEntries", p_page_table_entries, 0x100, 0x40, true, 0x7e033117de54e56e)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_BUILDPAGINGBUFFER_UPDATEPAGETABLE.StartIndex", start_index, 0x140, 0x20, true, 0xa99b9e229ab01ef5)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_BUILDPAGINGBUFFER_UPDATEPAGETABLE.NumPageTableEntries", num_page_table_entries, 0x160, 0x20, true, 0x409a75c7bde4c462)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dxgk::updatepagetableflags_t), "_DXGK_BUILDPAGINGBUFFER_UPDATEPAGETABLE.Flags", flags, 0x1a0, 0x20, true, 0xb167b6415110cdf3)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_DXGK_BUILDPAGINGBUFFER_UPDATEPAGETABLE.DriverProtection", driver_protection, 0x1c0, 0x40, true, 0x692133c43c314e00)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_DXGK_BUILDPAGINGBUFFER_UPDATEPAGETABLE.AllocationOffsetInBytes", allocation_offset_in_bytes, 0x200, 0x40, true, 0x763b964e720dc492)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_DXGK_BUILDPAGINGBUFFER_UPDATEPAGETABLE.hProcess", h_process, 0x240, 0x40, true, 0x895727c7367f22f8)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum dxgk::pagetableupdatemode_t), "_DXGK_BUILDPAGINGBUFFER_UPDATEPAGETABLE.UpdateMode", update_mode, 0x280, 0x20, true, 0x648d2fa8461042d8)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dxgk::pte_t*), "_DXGK_BUILDPAGINGBUFFER_UPDATEPAGETABLE.pPageTableEntries64KB", p_page_table_entries64kb, 0x2c0, 0x40, true, 0xf020371209e3207c)
#define _m12 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_DXGK_BUILDPAGINGBUFFER_UPDATEPAGETABLE.FirstPteVirtualAddress", first_pte_virtual_address, 0x300, 0x40, true, 0xccc13c621156b84b)
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
#endif