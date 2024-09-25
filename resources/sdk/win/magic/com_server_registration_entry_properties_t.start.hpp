#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::opaque_string_t), "ComServerRegistrationEntryProperties.ApplicationId", application_id, 0x0, 0x40, true, 0xb11b9428102cf1e2)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::opaque_string_t), "ComServerRegistrationEntryProperties.ApplicationDisplayName", application_display_name, 0x0, 0x0, false, 0x8b2fdf410fcc7752)
#else
#define _m00
#define _m01
#endif