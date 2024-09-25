#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::entry_property_store_t), "ComClassRegistrationEntryProperties.Verbs", verbs, 0x600, 0x40, true, 0xe1c23dfe938d642f)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::entry_property_store_t), "ComClassRegistrationEntryProperties.MiscStatusAspects", misc_status_aspects, 0x6c0, 0x40, true, 0x64c4693593c561a4)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "ComClassRegistrationEntryProperties.ServerId", server_id, 0x0, 0x20, true, 0x2b086f7d8dd7046e)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::entry_property_store_t), "ComClassRegistrationEntryProperties.ImplementedCategories", implemented_categories, 0x280, 0x40, true, 0x764bbcd0aa5d4546)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::entry_property_store_t), "ComClassRegistrationEntryProperties.CustomAttributes", custom_attributes, 0x0, 0x0, false, 0x422320a446849e7)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(bool), "ComClassRegistrationEntryProperties.EnableOleDefaultHandler", enable_ole_default_handler, 0x0, 0x0, false, 0x9e47c3193524bf4a)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif