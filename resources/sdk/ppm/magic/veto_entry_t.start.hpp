#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_PPM_VETO_ENTRY.Link", link, 0x0, 0x80, true, 0x3be1e34678e6b224)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PPM_VETO_ENTRY.VetoReason", veto_reason, 0x80, 0x20, true, 0x1ad2cda455797266)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PPM_VETO_ENTRY.ReferenceCount", reference_count, 0xa0, 0x20, true, 0x3f555c0a5a3cb6e)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PPM_VETO_ENTRY.HitCount", hit_count, 0xc0, 0x40, true, 0x224459d4718b6510)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PPM_VETO_ENTRY.LastActivationTime", last_activation_time, 0x100, 0x40, true, 0x87f1cfb2d0daf624)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PPM_VETO_ENTRY.TotalActiveTime", total_active_time, 0x140, 0x40, true, 0xc13a540cf3360698)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PPM_VETO_ENTRY.CsActivationTime", cs_activation_time, 0x180, 0x40, true, 0xebe6719ad478174)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PPM_VETO_ENTRY.CsActiveTime", cs_active_time, 0x1c0, 0x40, true, 0xa119c2dc9b71eee)
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