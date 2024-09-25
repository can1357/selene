#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::system_pagefile_information_t), "_SYSTEM_PAGEFILE_INFORMATION_EX.Info", info, 0x0, 0x0, true, 0xae4193fd3fc013d4)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_PAGEFILE_INFORMATION_EX.MinimumSize", minimum_size, 0x100, 0x20, true, 0x8cb8071fd84d7069)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_PAGEFILE_INFORMATION_EX.MaximumSize", maximum_size, 0x120, 0x20, true, 0x57bc0bc6d1439a50)
#else
#define _m00
#define _m01
#define _m02
#endif