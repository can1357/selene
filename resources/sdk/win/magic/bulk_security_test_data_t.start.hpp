#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "BULK_SECURITY_TEST_DATA.DesiredAccess", desired_access, 0x0, 0x20, true, 0x466de89741a25bb1)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 1>), "BULK_SECURITY_TEST_DATA.SecurityIds", security_ids, 0x20, 0x20, true, 0xa0dc917b2dc83edd)
#else
#define _m00
#define _m01
#endif