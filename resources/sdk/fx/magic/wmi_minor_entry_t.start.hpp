#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wmi_handler_minor_dispatch_t ), "FxWmiMinorEntry.Handler", handler, 0x0, 0x40, true, 0x13f4e892225da3cc)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxWmiMinorEntry.CheckInstance", check_instance, 0x40, 0x8, true, 0x357e6228f0f6977d)
#else
#define _m00
#define _m01
#endif