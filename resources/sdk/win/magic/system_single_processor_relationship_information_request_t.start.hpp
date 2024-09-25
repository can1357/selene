#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum nt::logical_processor_relationship_t), "_SYSTEM_SINGLE_PROCESSOR_RELATIONSHIP_INFORMATION_REQUEST.Relationship", relationship, 0x0, 0x0, false, 0x1457f3014baf686f)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::processor_number_t), "_SYSTEM_SINGLE_PROCESSOR_RELATIONSHIP_INFORMATION_REQUEST.ProcessorNumber", processor_number, 0x0, 0x0, false, 0x14b153d697e9d46e)
#else
#define _m00
#define _m01
#endif