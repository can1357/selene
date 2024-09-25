#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_RTL_HEAP_USAGE.Length", length, 0x0, 0x20, true, 0x905b46ddc23346fa)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_RTL_HEAP_USAGE.BytesAllocated", bytes_allocated, 0x40, 0x40, true, 0xc8884060d1fa2c9)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_RTL_HEAP_USAGE.BytesCommitted", bytes_committed, 0x80, 0x40, true, 0x485df86ce525994c)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_RTL_HEAP_USAGE.BytesReserved", bytes_reserved, 0xc0, 0x40, true, 0xa41cf05ac79d239f)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_RTL_HEAP_USAGE.BytesReservedMaximum", bytes_reserved_maximum, 0x100, 0x40, true, 0xe82faa585642b5cf)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct rtl::heap_usage_entry_t*), "_RTL_HEAP_USAGE.Entries", entries, 0x140, 0x40, true, 0x810f24767417cc1)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct rtl::heap_usage_entry_t*), "_RTL_HEAP_USAGE.AddedEntries", added_entries, 0x180, 0x40, true, 0x3ac2c7b66f2d9735)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct rtl::heap_usage_entry_t*), "_RTL_HEAP_USAGE.RemovedEntries", removed_entries, 0x1c0, 0x40, true, 0x39f19660d82d7ed1)
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