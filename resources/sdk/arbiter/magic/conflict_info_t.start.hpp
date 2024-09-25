#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::device_object_t*), "_ARBITER_CONFLICT_INFO.OwningObject", owning_object, 0x0, 0x40, true, 0x8561158ee8847a85)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_ARBITER_CONFLICT_INFO.Start", start, 0x40, 0x40, true, 0x84f417234b937564)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_ARBITER_CONFLICT_INFO.End", end, 0x80, 0x40, true, 0x2708ebfae5dcf700)
#else
#define _m00
#define _m01
#define _m02
#endif