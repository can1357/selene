#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_WSK_CLIENT_NPI.ClientContext", client_context, 0x0, 0x40, true, 0x56119f1c8ac1345e)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(const struct wsk::client_dispatch_t*), "_WSK_CLIENT_NPI.Dispatch", dispatch, 0x40, 0x40, true, 0x7069846a7516fd21)
#else
#define _m00
#define _m01
#endif