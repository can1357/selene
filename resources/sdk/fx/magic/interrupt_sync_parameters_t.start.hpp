#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::interrupt_t*), "FxInterruptSyncParameters.Interrupt", interrupt, 0x0, 0x40, true, 0x4c310543f1d5259f)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdf_interrupt_synchronize_t ), "FxInterruptSyncParameters.Callback", callback, 0x40, 0x40, true, 0xfe8041cf5b625486)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "FxInterruptSyncParameters.Context", context, 0x80, 0x40, true, 0x7470c7a07fdf877)
#else
#define _m00
#define _m01
#define _m02
#endif