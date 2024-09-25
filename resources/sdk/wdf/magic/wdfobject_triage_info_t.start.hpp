#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDFOBJECT_TRIAGE_INFO.RawObjectSize", raw_object_size, 0x0, 0x20, true, 0xa582a860640c9952)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDFOBJECT_TRIAGE_INFO.ObjectType", object_type, 0x20, 0x20, true, 0x472d69524a5389fc)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDFOBJECT_TRIAGE_INFO.TotalObjectSize", total_object_size, 0x40, 0x20, true, 0x58ca48bde081c4cf)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDFOBJECT_TRIAGE_INFO.ChildListHead", child_list_head, 0x60, 0x20, true, 0x607d93e3c427665e)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDFOBJECT_TRIAGE_INFO.ChildEntry", child_entry, 0x80, 0x20, true, 0xf3524d46faa5fbf6)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDFOBJECT_TRIAGE_INFO.Globals", globals, 0xa0, 0x20, true, 0xe477c1d2607f1e6f)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDFOBJECT_TRIAGE_INFO.ParentObject", parent_object, 0xc0, 0x20, true, 0x59826266afc7a5eb)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif