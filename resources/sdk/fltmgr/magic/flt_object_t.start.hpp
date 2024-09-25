#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum fltmgr::flt_object_flags_t), "_FLT_OBJECT.Flags", flags, 0x0, 0x20, true, 0xa527fcc5015bb22a)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_FLT_OBJECT.PointerCount", pointer_count, 0x20, 0x20, true, 0x3e934c6e7d15d8b3)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ex::rundown_ref_t), "_FLT_OBJECT.RundownRef", rundown_ref, 0x40, 0x40, true, 0x842544a6e88dc42d)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_FLT_OBJECT.PrimaryLink", primary_link, 0x80, 0x80, true, 0xe69692ebb60dbbf0)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_FLT_OBJECT.UniqueIdentifier", unique_identifier, 0x100, 0x80, true, 0x436f9f2e3ac01aa1)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif