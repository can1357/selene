#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_TEB_ACTIVE_FRAME.Flags", flags, 0x0, 0x20, true, 0x19da118a57b4031f)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::teb_active_frame_t*), "_TEB_ACTIVE_FRAME.Previous", previous, 0x40, 0x40, true, 0x7fc360b9779ec302)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::variant<struct nt::teb_active_frame_context_t*, const struct nt::teb_active_frame_context_t*>), "_TEB_ACTIVE_FRAME.Context", context, 0x80, 0x40, true, 0x1415859dc314dc48)
#else
#define _m00
#define _m01
#define _m02
#endif