#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "KSCOMPONENTID.Manufacturer", manufacturer, 0x0, 0x0, false, 0x13fb68f599ae7715)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "KSCOMPONENTID.Product", product, 0x0, 0x0, false, 0x136013cbe2c0523f)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "KSCOMPONENTID.Component", component, 0x0, 0x0, false, 0xf1b089ae16e438f8)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "KSCOMPONENTID.Name", name, 0x0, 0x0, false, 0x157bb0261264f8f8)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "KSCOMPONENTID.Version", version, 0x0, 0x0, false, 0xb134c377766a8221)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "KSCOMPONENTID.Revision", revision, 0x0, 0x0, false, 0x5e0729daaa5251ae)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif