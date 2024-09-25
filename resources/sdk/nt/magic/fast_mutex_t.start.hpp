#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "_FAST_MUTEX.Count", count, 0x0, 0x20, true, 0xc89a658b4bc05afa)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_FAST_MUTEX.Owner", owner, 0x40, 0x40, true, 0xcd46cbcf5bb21886)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FAST_MUTEX.Contention", contention, 0x80, 0x20, true, 0x152343a09970b0f3)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::kevent_t), "_FAST_MUTEX.Event", event, 0xc0, 0xc0, true, 0x2cf70ae3cd34d9cf)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FAST_MUTEX.OldIrql", old_irql, 0x180, 0x20, true, 0xcbc1f26d26dacfe7)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif