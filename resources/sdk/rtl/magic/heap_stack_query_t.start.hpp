#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RTL_HEAP_STACK_QUERY.Version", version, 0x0, 0x20, true, 0x1e89fa72fc6b4ef4)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_RTL_HEAP_STACK_QUERY.Process", process, 0x40, 0x40, true, 0xbc97f7b7532ef7d4)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, uint64_t, void*)>*), "_RTL_HEAP_STACK_QUERY.WriteRoutine", write_routine, 0x80, 0x40, true, 0x82b42bdd6046255)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_RTL_HEAP_STACK_QUERY.SerializationContext", serialization_context, 0xc0, 0x40, true, 0x43ab750162cea4c7)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_RTL_HEAP_STACK_QUERY.QueryLevel", query_level, 0x100, 0x8, true, 0x1f8aac0426303b00)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_RTL_HEAP_STACK_QUERY.Flags", flags, 0x108, 0x8, true, 0x9e96ad425c2248c5)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif