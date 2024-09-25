#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_INTERRUPT_TRACKING_ENTRY.ListEntry", list_entry, 0x0, 0x0, false, 0x8ad06fdb5a5fa3cd)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::interrupt_tracking_root_t*), "_INTERRUPT_TRACKING_ENTRY.IntTrackRoot", int_track_root, 0x0, 0x0, false, 0xf5c82c443b1d8971)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_INTERRUPT_TRACKING_ENTRY.InterruptObjectCount", interrupt_object_count, 0x0, 0x0, false, 0xe971597df98d70ed)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kinterrupt_t**), "_INTERRUPT_TRACKING_ENTRY.InterruptObjectArray", interrupt_object_array, 0x0, 0x0, false, 0x78bc364048615f68)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_INTERRUPT_TRACKING_ENTRY.IsrTime", isr_time, 0x0, 0x0, false, 0xc9596a1aa83ac576)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_INTERRUPT_TRACKING_ENTRY.DpcTime", dpc_time, 0x0, 0x0, false, 0x108bb399ae179d70)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_INTERRUPT_TRACKING_ENTRY.IsPrimaryInterrupt", is_primary_interrupt, 0x0, 0x0, false, 0x9ba975e4759dca72)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::interrupt_vector_data_t), "_INTERRUPT_TRACKING_ENTRY.VectorData", vector_data, 0x0, 0x0, false, 0xc7ae7aca2db2c87f)
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