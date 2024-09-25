#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_FINDFIRSTACTIVATIONCONTEXTSECTION.Size", size, 0x0, 0x20, true, 0x9cfa20bc1412874a)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_FINDFIRSTACTIVATIONCONTEXTSECTION.Flags", flags, 0x20, 0x20, true, 0xae4fedf1c36723ad)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const struct nt::guid_t*), "_FINDFIRSTACTIVATIONCONTEXTSECTION.ExtensionGuid", extension_guid, 0x40, 0x40, true, 0xb333ec04cd92bbb0)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_FINDFIRSTACTIVATIONCONTEXTSECTION.Id", id, 0x80, 0x20, true, 0xdd53ad044e1b6cc2)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_FINDFIRSTACTIVATIONCONTEXTSECTION.Depth", depth, 0xa0, 0x20, true, 0xfcc968a06a0a4145)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_FINDFIRSTACTIVATIONCONTEXTSECTION.OutFlags", out_flags, 0xc0, 0x20, true, 0x4b1a8724a2f293fe)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif