#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_PCI_DEVICE_USAGE.Paging", paging, 0x0, 0x20, true, 0x47ef1bf317849cec)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_PCI_DEVICE_USAGE.Hibernate", hibernate, 0x20, 0x20, true, 0xf2d66bd694f0e180)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_PCI_DEVICE_USAGE.CrashDump", crash_dump, 0x40, 0x20, true, 0x11ebfa9283f8b3f)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_PCI_DEVICE_USAGE.GuestAssigned", guest_assigned, 0x60, 0x20, true, 0x41528b069bcc186a)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif