#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HEAP_FAILURE_INFORMATION.Version", version, 0x0, 0x20, true, 0xfa65c925fda6e6d9)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HEAP_FAILURE_INFORMATION.StructureSize", structure_size, 0x20, 0x20, true, 0x44a8ada5f5ae6d9f)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum heap::failure_type_t), "_HEAP_FAILURE_INFORMATION.FailureType", failure_type, 0x40, 0x20, true, 0x541c50a73b0a1803)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_HEAP_FAILURE_INFORMATION.HeapAddress", heap_address, 0x80, 0x40, true, 0xc123ef629a17e7e3)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_HEAP_FAILURE_INFORMATION.Address", address, 0xc0, 0x40, true, 0xad2e83153f412c9d)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_HEAP_FAILURE_INFORMATION.Param1", param1, 0x100, 0x40, true, 0x1c89fd39962a3da0)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_HEAP_FAILURE_INFORMATION.Param2", param2, 0x140, 0x40, true, 0x40afd8be5f5ade29)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_HEAP_FAILURE_INFORMATION.Param3", param3, 0x180, 0x40, true, 0x8b91d391338244cb)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::variant<struct heap::entry_t*, void*>), "_HEAP_FAILURE_INFORMATION.PreviousBlock", previous_block, 0x1c0, 0x40, true, 0x9350875dfb30fa05)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::variant<struct heap::entry_t*, void*>), "_HEAP_FAILURE_INFORMATION.NextBlock", next_block, 0x200, 0x40, true, 0xc5fffaeac7debf0f)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::variant<struct heap::entry_t, struct nt::fake_heap_entry_t>), "_HEAP_FAILURE_INFORMATION.ExpectedDecodedEntry", expected_decoded_entry, 0x240, 0x80, true, 0x8856b6f48e76f408)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<void*, 32>), "_HEAP_FAILURE_INFORMATION.StackTrace", stack_trace, 0x2c0, 0x0, true, 0xc5af6cdac8aeb852)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_HEAP_FAILURE_INFORMATION.HeapMajorVersion", heap_major_version, 0xac0, 0x8, true, 0xce9b568775fba2c1)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_HEAP_FAILURE_INFORMATION.HeapMinorVersion", heap_minor_version, 0xac8, 0x8, true, 0x4bd1600e1486a3b9)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::exception_record_t), "_HEAP_FAILURE_INFORMATION.ExceptionRecord", exception_record, 0xb00, 0xc0, true, 0x61f62402e7f81bc3)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::context), "_HEAP_FAILURE_INFORMATION.ContextRecord", context_record, 0x1000, 0x80, true, 0xdc88060181c29bb7)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct heap::entry_t), "_HEAP_FAILURE_INFORMATION.ExpectedEncodedEntry", expected_encoded_entry, 0x0, 0x0, false, 0x56ae5e15e6d5e7a7)
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