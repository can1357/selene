#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MI_PROBE_RAISE_TRACKER.UserRangeInKernel", user_range_in_kernel, 0x0, 0x20, true, 0x7a907a9757996a40)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MI_PROBE_RAISE_TRACKER.FaultFailed", fault_failed, 0x20, 0x20, true, 0x5ac89ae1970c4080)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MI_PROBE_RAISE_TRACKER.WriteFaultFailed", write_fault_failed, 0x40, 0x20, true, 0xecc5eed4376c264c)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MI_PROBE_RAISE_TRACKER.LargePageFailed", large_page_failed, 0x60, 0x20, true, 0xc3679590fef1e179)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MI_PROBE_RAISE_TRACKER.UserAccessToKernelPte", user_access_to_kernel_pte, 0x80, 0x20, true, 0x4fd3dc90ffa0dac)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MI_PROBE_RAISE_TRACKER.BadPageLocation", bad_page_location, 0xa0, 0x20, true, 0xf974adbde7119af7)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MI_PROBE_RAISE_TRACKER.InsufficientCharge", insufficient_charge, 0xc0, 0x20, true, 0xad2807f64d5a67bb)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MI_PROBE_RAISE_TRACKER.PageTableCharge", page_table_charge, 0xe0, 0x20, true, 0x6cf03bb618094dff)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MI_PROBE_RAISE_TRACKER.NoIoReference", no_io_reference, 0x120, 0x20, true, 0xdc00bbd53795ccf2)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MI_PROBE_RAISE_TRACKER.ProbeFailed", probe_failed, 0x140, 0x20, true, 0x9c96a62250f74c06)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MI_PROBE_RAISE_TRACKER.PteIsZero", pte_is_zero, 0x160, 0x20, true, 0x79444e747577d7c1)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MI_PROBE_RAISE_TRACKER.StrongCodeWrite", strong_code_write, 0x180, 0x20, true, 0xd3fac0d8721b9204)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MI_PROBE_RAISE_TRACKER.ReducedCloneCommitChargeFailed", reduced_clone_commit_charge_failed, 0x1a0, 0x20, true, 0x24d336cd197437fe)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MI_PROBE_RAISE_TRACKER.CopyOnWriteAtDispatchNoPages", copy_on_write_at_dispatch_no_pages, 0x1c0, 0x20, true, 0x3de60d9c3cfa76eb)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MI_PROBE_RAISE_TRACKER.EnclavePageFailed", enclave_page_failed, 0x200, 0x20, true, 0xa4045dc65358e235)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MI_PROBE_RAISE_TRACKER.NoPhysicalMapping", no_physical_mapping, 0x100, 0x20, true, 0xca99f7771ee82f5f)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MI_PROBE_RAISE_TRACKER.NoPageTablesAllowed", no_page_tables_allowed, 0x1e0, 0x20, true, 0x564fac86b6c1cb63)
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
#endif