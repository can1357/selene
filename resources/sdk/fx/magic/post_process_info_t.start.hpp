#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fx::cr_event_t*), "FxPostProcessInfo.m_Event", m_event, 0x0, 0x40, true, 0x1001586cb3c5d833)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxPostProcessInfo.m_DeleteObject", m_delete_object, 0x40, 0x8, true, 0x167f3b838dfe1d5c)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxPostProcessInfo.m_SetRemovedEvent", m_set_removed_event, 0x48, 0x8, true, 0x2ac974e752f24aae)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::irp_t*), "FxPostProcessInfo.m_FireAndForgetIrp", m_fire_and_forget_irp, 0x80, 0x40, true, 0x3965e355f09e4652)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif